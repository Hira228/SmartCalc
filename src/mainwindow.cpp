#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QPropertyAnimation>

#ifdef __cplusplus
extern "C" {
#endif

#include "s21_smart_calc.h"

#ifdef __cplusplus
}
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    inputXLineEdit = ui->lineEdit_x;

    expandCalculatorAction = new QAction(tr("Expand Calculator"), this);
    fileMenu = menuBar()->addMenu(tr("&CALC"));
    fileMenu->addAction(expandCalculatorAction);

    QString menuBarStyle = "background-color: rgb(255, 255, 255);";
    menuBar()->setStyleSheet(menuBarStyle);

    connect(expandCalculatorAction, &QAction::triggered, this, &MainWindow::expandWindow);

    connect(ui->pushButton_zero, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_x, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_one, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_two, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_three, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_four, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_five, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_six, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_seven, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_eight, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_nine, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_plus, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_minus, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_div, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_multi, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_sin, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_cos, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_tan, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_asin, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_acos, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_atan, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_log, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_ln, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_open_prnt, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_close_prnt, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_point, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_mod, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_pow, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_ac, SIGNAL(clicked()),this, SLOT(clearText()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()),this, SLOT(add_lexems()));
    connect(ui->pushButton_res, SIGNAL(clicked()),this, SLOT(calc_result()));
    //connect(ui->pushButton_graph, SIGNAL(clicked()),this, SLOT(on_pushButton_graph_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::expandWindow()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");

    if (width() == 794) {
        animation->setEndValue(QRect(geometry().x(), geometry().y(), 361, 380));
    } else {
        animation->setEndValue(QRect(geometry().x(), geometry().y(), 794, 380));
    }
    animation->setDuration(500);
    animation->setEasingCurve(QEasingCurve::InOutQuad);

    animation->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::add_lexems()
{
    QPushButton *button = static_cast<QPushButton*>(sender());

    QString current_text = ui->show_res->text();
    QString new_label;

    if (current_text == "0") {
        new_label = button->text();
    } else {
        new_label = current_text + button->text();
    }

    ui->show_res->setText(new_label);

    // Добавляем отладочное сообщение
    qDebug() << "add_lexems() - New label:" << new_label;
}

void MainWindow::clearText()
{
    ui->show_res->setText("0");
}

void MainWindow::calc_result()
{
    QString exec = ui->show_res->text();
    const char *math_expression = exec.toLatin1();
    char *temp_str = NULL;
    QString xInput = inputXLineEdit->text();
    double xValue = xInput.toDouble();
    char *result = NULL;
    if(check_x_str(math_expression))
    {
        temp_str = str_with_graph(math_expression, xValue);
        const char * temps_strs = temp_str;
        result = execution(temps_strs);
    }
    else result = execution(math_expression);

    QString resultStr(result);

    ui->show_res->setText(resultStr);

    free(result);
    free(temp_str);

    qDebug() << "calc_result() - Result:" << resultStr;
}




void MainWindow::on_pushButton_graph_clicked()
{
    graph_ui = new Graph(this);
    graph_ui->show();
}


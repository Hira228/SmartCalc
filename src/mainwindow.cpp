#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QPropertyAnimation>
#include <QtMath>

#include "graph.h"
#include "creditcalc.h"

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
    inputXlineEdit_min = ui->lineEdit_x_min_graph;
    inputXlineEdit_max = ui->lineEdit_x_max_graph;
    inputYlineEdit_min = ui->lineEdit_y_min_graph;
    inputYlineEdit_max = ui->lineEdit_y_max_graph;

    expandCalculatorAction = new QAction(tr("Expand Calculator"), this);
    creditCalculatorAction = new QAction(tr("Credit Calculator"), this); // Обратите внимание на изменение имени переменной

    fileMenu = menuBar()->addMenu(tr("&CALC"));
    fileMenu->addAction(expandCalculatorAction);
    fileMenu->addAction(creditCalculatorAction); // Используйте creditCalculatorAction здесь

    QString menuBarStyle = "background-color: rgb(255, 255, 255);";
    menuBar()->setStyleSheet(menuBarStyle);

    connect(expandCalculatorAction, &QAction::triggered, this, &MainWindow::expandWindow);
    connect(creditCalculatorAction, &QAction::triggered, this, &MainWindow::CreditCalc);
    // Предположим, что у вас также есть connect для creditCalculatorAction


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
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::expandWindow()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");

    if (width() == 791) {
        animation->setEndValue(QRect(geometry().x(), geometry().y(), 361, 360));
    } else {
        animation->setEndValue(QRect(geometry().x(), geometry().y(), 791, 360));
    }
    animation->setDuration(500);
    animation->setEasingCurve(QEasingCurve::InOutQuad);

    animation->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::CreditCalc()
{
    creditcalc_ui = new class CreditCalc(this);
    creditcalc_ui->show();
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

    qDebug() << "add_lexems() - New label:" << new_label;
}

void MainWindow::clearText()
{
    ui->show_res->setText("0");
}

void MainWindow::calc_result()
{
    QString exec = ui->show_res->text();
    //qDebug() << "calc_result() - Result2:" << exec;
    std::string math_exp_str = exec.toStdString();
    const char *math_expression = math_exp_str.c_str();
    //QString str = QString::fromStdString(math_expression);
    //qDebug() << "calc_result() - Result:" << str;
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

    //qDebug() << "calc_result() - Result:" << resultStr;
}


void MainWindow::on_pushButton_graph_clicked()
{
    double pi = M_PI;
    h = 0.1;
    QString ex = ui->show_res->text();
    //qDebug() << "y() - Result:" << ex;
    std::string math_exp_str = ex.toStdString();
    const char *math_expression = math_exp_str.c_str();
    //qDebug() << "y() - Result:" << math_exp;
    char *temp_str = NULL;
    QString Yres = NULL;
    char *result = NULL;
    const char * temps_strs = NULL;
    double yValue = 0;

    QString xBegin = inputXlineEdit_min->text();
    double xValue_begin = xBegin.toDouble();

    QString xEnd = inputXlineEdit_max->text();
    double xValue_end = xEnd.toDouble();

    QString yBegin = inputYlineEdit_min->text();
    double yValue_begin = yBegin.toDouble();

    QString yEnd = inputYlineEdit_max->text();
    double yValue_end = yEnd.toDouble();

    graph_ui = new Graph(this);

    graph_ui->setXAxis(xValue_begin, xValue_end);
    graph_ui->setYAxis(yValue_begin, yValue_end);

    N = (xValue_end - xValue_begin)/h + 2;

    x.clear();
    y.clear();
    for (X = xValue_begin; X <= xValue_end; X += h)
    {
        //qDebug() << "X() - Result:" << X;
        temp_str = str_with_graph(math_expression, X);
        temps_strs = temp_str;
        result = execution(temps_strs);
        if(result[0] != 'F')
        {
            Yres = result;
            yValue = Yres.toDouble();
            //qDebug() << "Y() - Result:" << yValue;
            x.push_back(X);
            y.push_back(yValue);
        }
        else
        {
            x.push_back(X);
            y.push_back(std::numeric_limits<double>::quiet_NaN());
        }
        free(result);
        free(temp_str);
        result = NULL;
        temp_str = NULL;
    }
    temp_str = str_with_graph(math_expression, M_PI);
    temps_strs = temp_str;
    result = execution(temps_strs);
    if(result[0] != 'F')
    {
        Yres = result;
        yValue = Yres.toDouble();
        qDebug() << "Y() - Result:" << result;
        x.push_back(M_PI);
        y.push_back(yValue);
    }
    else
    {
        x.push_back(M_PI);
        y.push_back(std::numeric_limits<double>::quiet_NaN());
    }
    free(result);
    free(temp_str);
    result = NULL;
    temp_str = NULL;

    graph_ui->plotGraph(x, y);

    graph_ui->show();
}


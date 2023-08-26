#include "creditcalc.h"
#include "ui_creditcalc.h"
#include <QDebug>

CreditCalc::CreditCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreditCalc)
{
    ui->setupUi(this);
    //connect(ui->pushButton_3, SIGNAL(clicked()),this, SLOT(handle_on_pushButton3_clicked()));
}

CreditCalc::~CreditCalc()
{
    delete ui;
}


void CreditCalc::handle_on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) ui->stackedWidget->setCurrentWidget(ui->page_1);
    if (index == 1) ui->stackedWidget->setCurrentWidget(ui->page_2);
    if (index == 2) ui->stackedWidget->setCurrentWidget(ui->page_3);
}


//void CreditCalc::handle_on_pushButton3_clicked()
//{
//    QString deadline_str = ui->lineEdit_11->text();
//    deadline = deadline_str.toInt();
//    qDebug() << "срок() - Result:" << deadline;

//    QString pay_str = ui->lineEdit_10->text();
//    pay = pay_str.toDouble();
//    qDebug() << "платеж() - Result:" << pay;

//    QString interest_rate_str = ui->lineEdit_9->text();
//    qDebug() << "проц став() - Result:" << interest_rate_str;
//    interest_rate = interest_rate_str.toDouble();
//    qDebug() << "проц став() - Result:" << interest_rate;


//}


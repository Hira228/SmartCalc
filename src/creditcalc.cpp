#include "creditcalc.h"
#include "ui_creditcalc.h"
#include <QDebug>

CreditCalc::CreditCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreditCalc)
{
    ui->setupUi(this);
}

CreditCalc::~CreditCalc()
{
    delete ui;
}


void CreditCalc::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) ui->stackedWidget->setCurrentWidget(ui->page_1);
    if (index == 1) ui->stackedWidget->setCurrentWidget(ui->page_2);
    if (index == 2) ui->stackedWidget->setCurrentWidget(ui->page_3);
}


void CreditCalc::on_pushButton_3_clicked()
{
    double sum_percent = 0;
    double sum_credit_plus_sum_percent = 0;
    double sum = 0;
    sum_credit = 0;


    QString deadline_str = ui->lineEdit_11->text();
    deadline = deadline_str.toInt();

    QString pay_str = ui->lineEdit_10->text();
    pay = pay_str.toDouble();
    double pay_temp = pay;

    QString interest_rate_str = ui->lineEdit_9->text();
    interest_rate = interest_rate_str.toDouble();
    interest_rate = interest_rate / 12.0 / 100.0;

    if(ui->comboBox_2->currentIndex() == 0) deadline *= 12;

    sum_credit_plus_sum_percent = pay_temp * deadline;
    //sum = pay * interest_rate;
    while(deadline != 0)
    {
       sum_percent = pay * interest_rate;
       pay -= sum_percent;
       sum_credit += pay;
       deadline--;
    }

      sum_percent = sum_credit_plus_sum_percent - sum_credit;
//    sum_credit_plus_sum_percent = sum_credit_plus_sum_percent - sum_percent;
//    sum_credit = sum_credit_plus_sum_percent - (pay * deadline);
//    sum_percent = sum_credit_plus_sum_percent - sum_credit;
    qDebug() << "sum_percent() - Result3:" << sum;
    qDebug() << "sum_percent() - Result3:" << sum_percent;
    qDebug() << "sum_credit() - Result3:" << sum_credit;
    qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;

}

void CreditCalc::on_pushButton_1_clicked()
{
    double diff_pay_1 = 0;
    double diff_pay_2 = 0;
    double sum_percent = 0;
    double sum_credit_plus_sum_percent = 0;
    QString sum_credit_str = ui->lineEdit->text();
    sum_credit = sum_credit_str.toDouble();

    QString deadline_str = ui->lineEdit_2->text();
    deadline = deadline_str.toInt();

    QString interest_rate_str = ui->lineEdit_6->text();
    interest_rate = interest_rate_str.toDouble();
    interest_rate = interest_rate / 12.0 / 100.0;

    if(ui->comboBox_3->currentIndex() == 0) deadline *= 12;

    if(ui->radioButton->isChecked())
    {
        pay = (sum_credit * interest_rate) / (1 - pow(1 + interest_rate, -deadline));
        sum_percent = pay * deadline - sum_credit;
        sum_credit_plus_sum_percent = sum_credit + sum_percent;
        qDebug() << "pay() - Result1:" << pay;
        qDebug() << "sum_credit() - Result2:" << sum_percent;
        qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;
    }
    else if(ui->radioButton_2->isChecked())
    {
        for (int i = 0; i <= deadline; i++)
        {
            pay = sum_credit / deadline + (sum_credit - (i - 1) * (sum_credit / deadline)) * interest_rate;
            sum_percent += pay;
            qDebug() << "calc_result() - Result2:" << pay;
        }
        sum_credit_plus_sum_percent = sum_percent;
        sum_percent -= sum_credit;
        qDebug() << "sum_credit() - Result2:" << sum_percent;
        qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;
    }
}



void CreditCalc::on_pushButton_2_clicked()
{
    deadline = 0;
    double sum_credit_temp = 0;
    double sum_percent = 0;
    double sum_credit_plus_sum_percent = 0;

    QString sum_credit_str = ui->lineEdit_8->text();
    sum_credit = sum_credit_str.toDouble();
    double sum_credit_temp_none = sum_credit;
    QString pay_str = ui->lineEdit_5->text();
    pay = pay_str.toInt();

    QString interest_rate_str = ui->lineEdit_7->text();
    interest_rate = interest_rate_str.toDouble();
    interest_rate = interest_rate / 12.0 / 100.0;

    while(sum_credit > 0)
    {
        sum_credit_temp = sum_credit;
        sum_credit *= (interest_rate + 1);
        sum_percent += (sum_credit - sum_credit_temp);
        sum_credit -= pay;
        deadline++;
    }
    sum_credit_plus_sum_percent = sum_percent + sum_credit_temp_none;


    qDebug() << "calc_result() - Result2:" << deadline;
    qDebug() << "sum_percent() - Result2:" << sum_percent;
    qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;
}


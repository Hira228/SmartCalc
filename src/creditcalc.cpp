#include "creditcalc.h"
#include "ui_creditcalc.h"
#include <QDebug>
#include <QPropertyAnimation>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QDoubleValidator>

CreditCalc::CreditCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreditCalc)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QDoubleValidator(0, 1000000, 7, this));
    ui->lineEdit_2->setValidator(new QDoubleValidator(0, 10000000, 7, this));
    ui->lineEdit_6->setValidator(new QDoubleValidator(0, 10000000, 7, this));

    ui->lineEdit_8->setValidator(new QDoubleValidator(0, 1000000, 7, this));
    ui->lineEdit_5->setValidator(new QDoubleValidator(0, 10000000, 7, this));
    ui->lineEdit_7->setValidator(new QDoubleValidator(0, 10000000, 7, this));

    ui->lineEdit_11->setValidator(new QDoubleValidator(0, 1000000, 7, this));
    ui->lineEdit_10->setValidator(new QDoubleValidator(0, 10000000, 7, this));
    ui->lineEdit_9->setValidator(new QDoubleValidator(0, 10000000, 7, this));
}

CreditCalc::~CreditCalc()
{
    delete ui;
}


void CreditCalc::on_comboBox_currentIndexChanged(int index)
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    if (index == 0)
    {
        ui->lineEdit->setText(0);
        ui->lineEdit_2->setText(0);
        ui->lineEdit_6->setText(0);
        ui->stackedWidget->setCurrentWidget(ui->page_1);
        if (height() == 550) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 350));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);
    }
    if (index == 1)
    {
        ui->lineEdit_8->setText(0);
        ui->lineEdit_5->setText(0);
        ui->lineEdit_7->setText(0);
        ui->stackedWidget->setCurrentWidget(ui->page_2);
        if (height() == 550) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 350));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);
    }
    if (index == 2)
    {
        ui->lineEdit_11->setText(0);
        ui->lineEdit_10->setText(0);
        ui->lineEdit_9->setText(0);
        ui->stackedWidget->setCurrentWidget(ui->page_3);
        if (height() == 550) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 350));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);
    }
    animation->start(QAbstractAnimation::DeleteWhenStopped);
}

void CreditCalc::on_pushButton_3_clicked()
{
    int FLAG_ERROR = 0;
    int FLAG_ERROR_1 = 0;
    QString sum_credit_temp = NULL;
    QString percent_pay = NULL;
    QString percent_plus_credit = NULL;
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

    if(interest_rate < 0)
    {
        FLAG_ERROR_1 = 1;
    }

    if(ui->comboBox_2->currentIndex() == 0)
    {
        if(deadline > 50) FLAG_ERROR = 1;
        deadline *= 12;
    }
    else if(deadline > 600) FLAG_ERROR = 1;


    if(FLAG_ERROR == 0 && FLAG_ERROR_1 == 0)
    {
        sum_credit_plus_sum_percent = pay_temp * deadline;
        while(deadline != 0)
        {
           sum_percent = pay * interest_rate;
           pay -= sum_percent;
           sum_credit += pay;
           deadline--;
        }

        sum_percent = sum_credit_plus_sum_percent - sum_credit;

        qDebug() << "sum_percent() - Result3:" << sum_percent;
        qDebug() << "sum_credit() - Result3:" << sum_credit;
        qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;

        percent_pay = QString::number(sum_percent, 'f', 2);
        sum_credit_temp = QString::number(sum_credit, 'f', 2);
        percent_plus_credit = QString::number(sum_credit_plus_sum_percent, 'f', 2);

        ui->label_28->setText(percent_pay);
        ui->label_29->setText(sum_credit_temp);
        ui->label_30->setText(percent_plus_credit);

        QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");

        if (height() == 350) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 550));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }

    else if(FLAG_ERROR == 1)
    {
        if(ui->comboBox_2->currentIndex() == 0) ui->lineEdit_11->setText("Максимум 50");
        else ui->lineEdit_11->setText("Максимум 600");
    }
    else if(FLAG_ERROR_1 == 1)
    {

        ui->lineEdit_9->setText("Процентная ставка меньше 0");
    }

}

void CreditCalc::on_pushButton_1_clicked()
{
    int FLAG_ERROR = 0;
    int FLAG_ERROR_1 = 0;
    double diff_pay_1 = 0;
    double diff_pay_2 = 0;
    double sum_percent = 0;
    QString points = "...";
    QString mounth_pay = NULL;
    QString diff_pay_2_temp = NULL;
    QString percent_pay = NULL;
    QString percent_plus_credit = NULL;
    double sum_credit_plus_sum_percent = 0;
    QString sum_credit_str = ui->lineEdit->text();
    sum_credit = sum_credit_str.toDouble();

    QString deadline_str = ui->lineEdit_2->text();
    deadline = deadline_str.toInt();

    QString interest_rate_str = ui->lineEdit_6->text();
    interest_rate = interest_rate_str.toDouble();
    interest_rate = interest_rate / 12.0 / 100.0;

    if(interest_rate < 0)
    {
        FLAG_ERROR_1 = 1;
    }

    if(ui->comboBox_3->currentIndex() == 0)
    {
        if(deadline > 50) FLAG_ERROR = 1;
        deadline *= 12;
    }
    else if (deadline > 600) FLAG_ERROR = 1;

    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");

    if(ui->radioButton->isChecked() && FLAG_ERROR == 0 && FLAG_ERROR_1 == 0)
    {
        pay = (sum_credit * interest_rate) / (1 - pow(1 + interest_rate, -deadline));
        sum_percent = pay * deadline - sum_credit;
        sum_credit_plus_sum_percent = sum_credit + sum_percent;
        qDebug() << "pay() - Result1:" << pay;
        qDebug() << "sum_credit() - Result2:" << sum_percent;
        qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;

        mounth_pay = QString::number(pay, 'f', 2);
        percent_pay = QString::number(sum_percent, 'f', 2);
        percent_plus_credit = QString::number(sum_credit_plus_sum_percent, 'f', 2);

        ui->label_36->setText(mounth_pay);
        ui->label_35->setText(percent_pay);
        ui->label_34->setText(percent_plus_credit);

        if (height() == 350) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 550));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
    else if(ui->radioButton_2->isChecked() && FLAG_ERROR == 0 && FLAG_ERROR_1 == 0)
    {
        for (int i = 0; i <= deadline; i++)
        {
            pay = sum_credit / deadline + (sum_credit - (i - 1) * (sum_credit / deadline)) * interest_rate;
            sum_percent += pay;
            qDebug() << "calc_result() - Result2:" << pay;
            if(i == 0) diff_pay_1 = pay;
        }
        diff_pay_2 = pay;
        sum_credit_plus_sum_percent = sum_percent;
        sum_percent -= sum_credit;

        qDebug() << "sum_credit() - Result2:" << sum_percent;
        qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;
        mounth_pay = QString::number(diff_pay_1, 'f', 2);
        diff_pay_2_temp = QString::number(diff_pay_2, 'f', 2);
        mounth_pay += points;
        mounth_pay += diff_pay_2_temp;
        percent_pay = QString::number(sum_percent, 'f', 2);
        percent_plus_credit = QString::number(sum_credit_plus_sum_percent, 'f', 2);

        ui->label_36->setText(mounth_pay);
        ui->label_35->setText(percent_pay);
        ui->label_34->setText(percent_plus_credit);

        if (height() == 350) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 550));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
    else if(FLAG_ERROR == 1)
    {
        if(ui->comboBox_3->currentIndex() == 0) ui->lineEdit_2->setText("Максимум 50");
        else ui->lineEdit_2->setText("Максимум 600");
    }
    else
    {
        ui->lineEdit_6->setText("Процентная ставка меньше 0");
    }
}



void CreditCalc::on_pushButton_2_clicked()
{
    int FLAG_ERROR_1 = 0;

    QString deadline_temp = NULL;
    QString sum_percent_pay = NULL;
    QString percent_plus_credit = NULL;
    QString ERROR = "Минимальный платеж: ";
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

    if(interest_rate < 0)
    {
        FLAG_ERROR_1 = 1;
    }

    int minimum_pay = (sum_credit * interest_rate) + 0.5;
    QString minimum_pay_str = QString::number(minimum_pay);
    minimum_pay_str = ERROR + minimum_pay_str;

    if(sum_credit * interest_rate < pay && FLAG_ERROR_1 == 0)
    {
        while(sum_credit >= 0)
        {
            sum_credit_temp = sum_credit;
            sum_credit *= (interest_rate + 1);
            sum_percent += (sum_credit - sum_credit_temp);
            sum_credit -= pay;
            deadline++;
        }
        sum_credit_plus_sum_percent = sum_percent + sum_credit_temp_none;
        deadline_temp = QString::number(deadline);
        sum_percent_pay = QString::number(sum_percent, 'f', 2);
        percent_plus_credit = QString::number(sum_credit_plus_sum_percent, 'f', 2);

        ui->label_33->setText(deadline_temp);
        ui->label_32->setText(sum_percent_pay);
        ui->label_31->setText(percent_plus_credit);

        qDebug() << "calc_result() - Result2:" << deadline;
        qDebug() << "sum_percent() - Result2:" << sum_percent;
        qDebug() << "sum_credit_plus_sum_percent() - Result3:" << sum_credit_plus_sum_percent;

        QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
        if (height() == 350) {
            animation->setEndValue(QRect(geometry().x(), geometry().y(), 715, 550));
        }
        animation->setDuration(500);
        animation->setEasingCurve(QEasingCurve::InOutQuad);

        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
    else if(sum_credit * interest_rate > pay)
    {
        ui->lineEdit_5->setText(minimum_pay_str);
    }
    else
    {
        ui->lineEdit_7->setText("Процентная ставка меньше 0");
    }


}


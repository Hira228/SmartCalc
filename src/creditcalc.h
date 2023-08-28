#ifndef CREDITCALC_H
#define CREDITCALC_H

#include <QPropertyAnimation>
#include <QDialog>

namespace Ui {
class CreditCalc;
}

class CreditCalc : public QDialog
{
    Q_OBJECT

public:
    explicit CreditCalc(QWidget *parent = nullptr);
    ~CreditCalc();

private slots:
    void on_pushButton_2_clicked();

private slots:
    void on_pushButton_1_clicked();

private slots:
    void on_pushButton_3_clicked();

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::CreditCalc *ui;

    double sum_credit;
    double interest_rate;
    double pay;
    int deadline;
};

#endif // CREDITCALC_H

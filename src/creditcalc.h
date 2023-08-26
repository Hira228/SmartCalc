#ifndef CREDITCALC_H
#define CREDITCALC_H

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

//private slots:
//    void handle_on_pushButton3_clicked();

private slots:
    void handle_on_comboBox_currentIndexChanged(int index);

private:
    Ui::CreditCalc *ui;

//    double sum_credit;
//    double interest_rate;
//    double pay;
//    int deadline;
};

#endif // CREDITCALC_H

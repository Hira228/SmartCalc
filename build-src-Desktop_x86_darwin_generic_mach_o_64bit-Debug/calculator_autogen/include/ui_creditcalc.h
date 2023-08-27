/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditCalc
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_15;
    QLabel *label_17;
    QPushButton *pushButton_1;
    QComboBox *comboBox_3;
    QWidget *page_2;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QLabel *label_14;
    QLineEdit *lineEdit_10;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QLabel *label_22;
    QLabel *label_23;
    QPushButton *pushButton_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QDialog *CreditCalc)
    {
        if (CreditCalc->objectName().isEmpty())
            CreditCalc->setObjectName(QString::fromUtf8("CreditCalc"));
        CreditCalc->resize(715, 349);
        CreditCalc->setStyleSheet(QString::fromUtf8("background-color:#a2a2a2"));
        stackedWidget = new QStackedWidget(CreditCalc);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 40, 711, 311));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        label_2 = new QLabel(page_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 30, 141, 41));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_3 = new QLabel(page_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 141, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_4 = new QLabel(page_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 150, 141, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_8 = new QLabel(page_1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 210, 191, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        lineEdit_6 = new QLineEdit(page_1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(280, 150, 201, 41));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        lineEdit_2 = new QLineEdit(page_1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 90, 201, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        lineEdit = new QLineEdit(page_1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 30, 201, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        verticalLayoutWidget = new QWidget(page_1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(280, 210, 201, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(verticalLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8("color:white"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8("color:white"));

        verticalLayout->addWidget(radioButton_2);

        label_15 = new QLabel(page_1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(490, 30, 141, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_17 = new QLabel(page_1);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(490, 150, 141, 41));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        pushButton_1 = new QPushButton(page_1);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(280, 260, 151, 41));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}"));
        comboBox_3 = new QComboBox(page_1);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(490, 90, 98, 41));
        QFont font1;
        font1.setPointSize(12);
        comboBox_3->setFont(font1);
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	border: 1px solid #333333;\n"
"	border-radius: 3px;\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"	min-width: 6em;\n"
"	color: #ffffff;\n"
"}\n"
"QComboBox::drop-down {\n"
"	subcontrol-origin: padding;\n"
"	subcontrol-position: top right;\n"
"	width: 20px;\n"
" \n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"     image: url(:/images/combobox-arrow.png);\n"
"}\n"
" \n"
"QComboBox QAbstractView{\n"
"	background-color: #4f4f4f;\n"
"	color: #999999;\n"
" \n"
"	selection-background-color: #999999;\n"
"	selection-color: #4f4f4f;\n"
"}"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 150, 141, 41));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 30, 141, 41));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        lineEdit_8 = new QLineEdit(page_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(280, 30, 201, 41));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 90, 151, 41));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        lineEdit_5 = new QLineEdit(page_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(280, 90, 201, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        lineEdit_7 = new QLineEdit(page_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(280, 150, 201, 41));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        label_18 = new QLabel(page_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(490, 30, 141, 41));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_19 = new QLabel(page_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(490, 90, 141, 41));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(490, 150, 141, 41));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 220, 151, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 150, 141, 41));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        lineEdit_10 = new QLineEdit(page_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(280, 90, 201, 41));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 90, 151, 41));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 30, 141, 41));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        lineEdit_9 = new QLineEdit(page_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(280, 150, 201, 41));
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        lineEdit_11 = new QLineEdit(page_3);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(280, 30, 201, 41));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color:darkgray;\n"
"color:white"));
        label_22 = new QLabel(page_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(490, 90, 141, 41));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(490, 150, 141, 41));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 220, 151, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}"));
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(490, 30, 98, 41));
        comboBox_2->setFont(font1);
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	border: 1px solid #333333;\n"
"	border-radius: 3px;\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"	min-width: 6em;\n"
"	color: #ffffff;\n"
"}\n"
"QComboBox::drop-down {\n"
"	subcontrol-origin: padding;\n"
"	subcontrol-position: top right;\n"
"	width: 20px;\n"
" \n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"     image: url(:/images/combobox-arrow.png);\n"
"}\n"
" \n"
"QComboBox QAbstractView{\n"
"	background-color: #4f4f4f;\n"
"	color: #999999;\n"
" \n"
"	selection-background-color: #999999;\n"
"	selection-color: #4f4f4f;\n"
"}"));
        stackedWidget->addWidget(page_3);
        comboBox = new QComboBox(CreditCalc);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(280, 10, 341, 41));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	border: 1px solid #333333;\n"
"	border-radius: 3px;\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"	min-width: 6em;\n"
"	color: #ffffff;\n"
"}\n"
"QComboBox::drop-down {\n"
"	subcontrol-origin: padding;\n"
"	subcontrol-position: top right;\n"
"	width: 20px;\n"
" \n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"     image: url(:/images/combobox-arrow.png);\n"
"}\n"
" \n"
"QComboBox QAbstractView{\n"
"	background-color: #4f4f4f;\n"
"	color: #999999;\n"
" \n"
"	selection-background-color: #999999;\n"
"	selection-color: #4f4f4f;\n"
"}"));
        label = new QLabel(CreditCalc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(17, 15, 141, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white\n"
""));

        retranslateUi(CreditCalc);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CreditCalc);
    } // setupUi

    void retranslateUi(QDialog *CreditCalc)
    {
        CreditCalc->setWindowTitle(QCoreApplication::translate("CreditCalc", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("CreditCalc", "C\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("CreditCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("CreditCalc", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        radioButton->setText(QCoreApplication::translate("CreditCalc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CreditCalc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_15->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        label_17->setText(QCoreApplication::translate("CreditCalc", "%", nullptr));
        pushButton_1->setText(QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("CreditCalc", "\320\273\320\265\321\202", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("CreditCalc", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_11->setText(QCoreApplication::translate("CreditCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("CreditCalc", "C\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("CreditCalc", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_18->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        label_19->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        label_20->setText(QCoreApplication::translate("CreditCalc", "%", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_14->setText(QCoreApplication::translate("CreditCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("CreditCalc", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_13->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_22->setText(QCoreApplication::translate("CreditCalc", "\342\202\275", nullptr));
        label_23->setText(QCoreApplication::translate("CreditCalc", "%", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("CreditCalc", "\320\273\320\265\321\202", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("CreditCalc", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276\320\263\320\276 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\207\320\265\321\202 \321\201\321\200\320\276\320\272\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\271 \321\201\321\203\320\274\320\274\321\213 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));

        label->setText(QCoreApplication::translate("CreditCalc", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 \321\200\320\260\321\201\321\207\320\265\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditCalc: public Ui_CreditCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALC_H

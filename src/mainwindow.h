#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QVector>

#include "graph.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_graph_clicked();

private slots:
    void expandWindow();

private slots:
    void add_lexems();
    void clearText();
    void calc_result();

private:
    Ui::MainWindow *ui;
    QAction *expandCalculatorAction;
    QMenu *fileMenu;
    QLineEdit *inputXLineEdit;
    QLineEdit *inputXlineEdit_min;
    QLineEdit *inputXlineEdit_max;
    QLineEdit *inputYlineEdit_min;
    QLineEdit *inputYlineEdit_max;
    Graph *graph_ui;

    double h, X;
    int N;

    QVector<double> x,y;
};

#endif // MAINWINDOW_H

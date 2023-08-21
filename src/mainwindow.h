#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

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
    void expandWindow();

private slots:
    void add_lexems();
    void clearText();
    void calc_result();
    void on_pushButton_graph_clicked();

private:
    Ui::MainWindow *ui;
    QAction *expandCalculatorAction;
    QMenu *fileMenu;
    QLineEdit *inputXLineEdit;
};

#endif // MAINWINDOW_H

#ifndef GRAPH_H
#define GRAPH_H

#include <QDialog>

namespace Ui {
class Graph;
}

class Graph : public QDialog
{
    Q_OBJECT

public:
    explicit Graph(QWidget *parent = nullptr);
    ~Graph();
    void setXAxis(double x_min, double x_max);
    void setYAxis(double y_min, double y_max);
    void plotGraph(QVector<double> x, QVector<double> y);

private:
    Ui::Graph *ui;
};

#endif // GRAPH_H

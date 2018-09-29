#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonAgregar_clicked();

    void on_pushButtonLimpiar_clicked();



    void on_spinBoxEfectivo_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    int valor=0;
    int total=0;
    int efectivo=0;
    int cambio =0;
    int contador=0;
};

#endif // MAINWINDOW_H

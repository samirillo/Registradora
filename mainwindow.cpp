#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAgregar_clicked()
{

    valor=ui->spinBoxValor->value();

    total+=valor;
    contador++;

    ui->spinBoxTotal->setValue(total);
    ui->lcdNumberRecaudos->display(contador);
    ui->spinBoxValor->setValue(0);
}

void MainWindow::on_pushButtonLimpiar_clicked()
{
    contador=0;
    efectivo=0;
    cambio=0;
    total=0;
    ui->spinBoxCambio->setValue(cambio);
    ui->spinBoxTotal->setValue(total);
    ui->spinBoxEfectivo->setValue(efectivo);
    ui->lcdNumberRecaudos->display(contador);
    ui->spinBoxValor->setFocus();
}



void MainWindow::on_spinBoxEfectivo_valueChanged(int arg1)
{
    total=ui->spinBoxTotal->value();
    efectivo=ui->spinBoxEfectivo->value();
    if(total<efectivo && efectivo !=0){
        cambio=efectivo-total;
        ui->spinBoxCambio->setValue(cambio);
    }
}

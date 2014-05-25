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

void MainWindow::on_actionZamknij_triggered()
{
    this->close();
}

void MainWindow::on_actionO_autorach_triggered()
{
    QMessageBox::about(this,"Autorzy","Piotr Banach - młody, przystojny, inteligentny.\nDaniel Rynca - 23885002371");
}

void MainWindow::on_actionO_algorytmach_triggered()
{
    QMessageBox::information(this,"Algorytmy","Sortowanie szybkie (ang. quicksort)\n\njeden z popularnych algorytmów sortowania\ndziałających na zasadzie \"dziel i zwyciężaj\".\nSortowanie QuickSort zostało wynalezione w 1962 \nprzez C.A.R. Hoare'a.\n\nSortowanie bąbelkowe (ang. bubble sort)\n\nprosta metoda sortowania polegająca na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności,\n jeżeli zaburza ona porządek, \nw jakim się sortuje tablicę. \nSortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.");
}

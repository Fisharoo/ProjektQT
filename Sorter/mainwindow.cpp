#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QList>
#include <QTime>
#include <QString>
#include <QStringBuilder>


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
    QMessageBox::about(this,"Autorzy","<b>Piotr Banach</b><br>Młody, przystojny, inteligentny.<br><br><b>Daniel Rynca</b><br>23885002371");
}

void MainWindow::on_actionO_algorytmach_triggered()
{
    QMessageBox::information(this,"Algorytmy","<b>Sortowanie szybkie (ang. quicksort)</b><br><br>Jeden z popularnych algorytmów sortowania<br>działających na zasadzie \"dziel i zwyciężaj\".<br>Sortowanie QuickSort zostało wynalezione w 1962 <br>przez C.A.R. Hoare'a.<br><br><b>Sortowanie bąbelkowe (ang. bubble sort)</b><br><br>Prosta metoda sortowania polegająca na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności,<br>jeżeli zaburza ona porządek, w jakim się sortuje tablicę. <br>Sortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.<br><br><b>Sortowanie Shella (ang. Shellsort)</b><br><br>Algorytm sortowania działający w miejscu i korzystający <br>z porównań elementów. Stanowi uogólnienie sortowania przez wstawianie, dopuszczające porównania i zamiany elementów położonych daleko od siebie. Jego pierwszą wersję opublikował w 1959 roku Donald Shell.");
}

void MainWindow::on_actionOtworz_triggered()
{
    fileName = QFileDialog::getOpenFileName(this,
        tr("Wybierz plik do posortowania"), "d:/", tr("Plik tekstowy (*.txt)"));

    QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

       QTextStream out(&file);
        while (!out.atEnd()) {
            QString tekst = out.readAll();
            ui->toSort->setPlainText(tekst);
        }

        file.close();
}

QString MainWindow::getTime(int ms){
    int h,m,s;
    s = ms/1000;
    m = (s/60)%60;
    h = (s/3600);
    s = s % 60;
    ms = ms % 1000;
    QString time = QString("%1:%2:%3.%4")
            .arg(h,2,10,QLatin1Char('0'))
            .arg(m,2,10,QLatin1Char('0'))
            .arg(s,2,10,QLatin1Char('0'))
            .arg(ms,3,10,QLatin1Char('0'));
    return time;
}

void MainWindow::on_buttonQuick_clicked()
{
    QList<double> temp;
    quick.setSequence(ui->toSort->toPlainText());
    QTime timer;
    timer.start();
    temp = quick.Sort();
    ui->Sorted->setPlainText(quick.listToString(temp));
    ui->quickLCD->display(getTime(timer.elapsed()));
}

void MainWindow::on_buttonBubble_clicked()
{
    QList<double> temp;
    bubble.setSequence(ui->toSort->toPlainText());
    QTime timer;
    timer.start();
    temp = bubble.Sort();
    ui->Sorted->setPlainText(bubble.listToString(temp));
    ui->bubbleLCD->display(getTime(timer.elapsed()));
}

void MainWindow::on_buttonShell_clicked()
{
    QList<double> temp;
    shell.setSequence(ui->toSort->toPlainText());
    QTime timer;
    timer.start();
    temp = shell.Sort();
    ui->Sorted->setPlainText(shell.listToString(temp));
    ui->shellLCD->display(getTime(timer.elapsed()));
}


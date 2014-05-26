#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QList>
#include <QTime>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->quickLCD->display("00:00:00.000");
    ui->bubbleLCD->display("00:00:00.000");
    ui->shellLCD->display("00:00:00.000");
    ui->heapLCD->display("00:00:00.000");
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
    QMessageBox::information(this,"Algorytmy","<a href='https://www.youtube.com/watch?v=ywWBy6J5gz8'><b>Sortowanie szybkie (ang. quicksort)</b></a><br><br>"
                             "Jeden z popularnych algorytmów sortowania<br>działających na zasadzie \"dziel i zwyciężaj\".<br>"
                             "Sortowanie QuickSort zostało wynalezione w 1962 <br>przez C.A.R. Hoare'a.<br><br>"
                             "<a href='https://www.youtube.com/watch?v=lyZQPjUT5B4'><b>Sortowanie bąbelkowe (ang. bubble sort)</b></a><br><br>"
                             "Prosta metoda sortowania polegająca na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności,<br>"
                             "jeżeli zaburza ona porządek, w jakim się sortuje tablicę. <br>"
                             "Sortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.<br><br>"
                             "<a href='https://www.youtube.com/watch?v=CmPA7zE8mx0'><b>Sortowanie Shella (ang. Shellsort)</b></a><br><br>"
                             "Algorytm sortowania działający w miejscu i korzystający <br>"
                             "z porównań elementów. Stanowi uogólnienie sortowania przez "
                             "wstawianie, dopuszczające porównania i zamiany elementów "
                             "położonych daleko od siebie. Jego pierwszą wersję opublikował w 1959 roku Donald Shell.<br><br>"
                             "<b>Sortowanie przez kopcowanie (ang. heapsort) :(</b><br><br>"
                             "Jeden z algorytmów sortowania, choć niestabilny, to jednak szybki i niepochłaniający wiele pamięci. Jest on w praktyce <br>"
                             "z reguły nieco wolniejszy od sortowania szybkiego, lecz ma lepszą pesymistyczną złożoność czasową.");
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
    if(!ui->toSort->toPlainText().isEmpty()){
        QList<double> temp;
        quick.setSequence(ui->toSort->toPlainText());
        QTime timer;
        timer.start();
        temp = quick.Sort();
        ui->Sorted->setPlainText(quick.listToString(temp));
        ui->quickLCD->display(getTime(timer.elapsed()));
    } else {
        QMessageBox::warning(this,"Błąd","Brak ciągu do sortowania!");
    }
}

void MainWindow::on_buttonBubble_clicked()
{
    if(!ui->toSort->toPlainText().isEmpty()){
        QList<double> temp;
        bubble.setSequence(ui->toSort->toPlainText());
        QTime timer;
        timer.start();
        temp = bubble.Sort();
        ui->Sorted->setPlainText(bubble.listToString(temp));
        ui->bubbleLCD->display(getTime(timer.elapsed()));
    } else {
        QMessageBox::warning(this,"Błąd","Brak ciągu do sortowania!");
    }
}

void MainWindow::on_buttonShell_clicked()
{
    if(!ui->toSort->toPlainText().isEmpty()){
        QList<double> temp;
        shell.setSequence(ui->toSort->toPlainText());
        QTime timer;
        timer.start();
        temp = shell.Sort();
        ui->Sorted->setPlainText(shell.listToString(temp));
        ui->shellLCD->display(getTime(timer.elapsed()));
    } else {
        QMessageBox::warning(this,"Błąd","Brak ciągu do sortowania!");
    }
}

void MainWindow::on_buttonHeap_clicked()
{
    if(!ui->toSort->toPlainText().isEmpty()){
        QList<double> temp;
        heap.setSequence(ui->toSort->toPlainText());
        QTime timer;
        timer.start();
        temp = heap.Sort();
        ui->Sorted->setPlainText(heap.listToString(temp));
        ui->heapLCD->display(getTime(timer.elapsed()));
    } else {
        QMessageBox::warning(this,"Błąd","Brak ciągu do sortowania!");
    }
}

void MainWindow::on_actionNowy_triggered()
{
    ui->toSort->clear();
    ui->Sorted->clear();
    ui->quickLCD->display("00:00:00.000");
    ui->bubbleLCD->display("00:00:00.000");
    ui->shellLCD->display("00:00:00.000");
    ui->heapLCD->display("00:00:00.000");
}

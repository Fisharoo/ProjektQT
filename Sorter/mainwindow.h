#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <quicksort.h>
#include <bubblesort.h>
#include <shellsort.h>

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
    void on_actionZamknij_triggered();

    void on_actionO_autorach_triggered();

    void on_actionO_algorytmach_triggered();

    void on_actionOtworz_triggered();

    void on_buttonQuick_clicked();

    void on_buttonBubble_clicked();

    void on_buttonShell_clicked();


    void on_actionNowy_triggered();

private:
    Ui::MainWindow *ui;
    QString fileName;
    QuickSort quick;
    BubbleSort bubble;
    ShellSort shell;
    QString getTime(int);
};

#endif // MAINWINDOW_H

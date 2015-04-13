/**
 * @file mainwindow.h
 * @author Damian Pobrotyn , Kamil Rostecki
 * @brief Definition of the MainWindow Class.
 */
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
    void on_pushButton_clicked();

    void on_actionZamknij_triggered();

    void on_learnButton_clicked();

    void on_addWordButton_clicked();

    void on_numbeWordsSlider_actionTriggered(int action);

    void on_numbeWordsSlider_valueChanged(int value);

    void on_exitButton_clicked();

private:
    Ui::MainWindow *ui;
    QString str;
};

#endif // MAINWINDOW_H

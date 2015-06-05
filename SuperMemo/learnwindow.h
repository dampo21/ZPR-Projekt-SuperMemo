/**
 * @file learnwindow.h
 * @author Damian Pobrotyn and Kamil Rostecki
 * @brief Definition of the class learnwindow.
 */

#ifndef LEARNWINDOW_H
#define LEARNWINDOW_H

#include <QDialog>
#include "string"

namespace Ui {
class LearnWindow;
}

class LearnWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LearnWindow(QWidget *parent = 0, int number=0);
    ~LearnWindow();

private slots:
    void on_checkButton_clicked();

    void on_correctlyButton_clicked();

    void on_incorrectlyButton_clicked();

    void on_almostButton_clicked();

    void reject();

private:
    Ui::LearnWindow *ui;
    int learnedWordsCounter;
    std::string dBase;
};

#endif // LEARNWINDOW_H

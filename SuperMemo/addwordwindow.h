/**
 * @file addwordwindow.h
 * @author Damian Pobrotyn and Kamil Rostecki
 * @brief Definition of the class addwordwindow.
 */

#ifndef ADDWORDWINDOW_H
#define ADDWORDWINDOW_H

#include <QDialog>

namespace Ui {
class addwordwindow;
}

class addwordwindow : public QDialog
{
    Q_OBJECT

public:
    explicit addwordwindow(QWidget *parent = 0);
    ~addwordwindow();

private slots:
    void on_cancelButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::addwordwindow *ui;
};

#endif // ADDWORDWINDOW_H

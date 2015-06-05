/**
 * @file addwordwindow.h
 * @author Damian Pobrotyn and Kamil Rostecki
 * @brief Definition of the class addwordwindow.
 */

#ifndef ADDWORDWINDOW_H
#define ADDWORDWINDOW_H

#include <QDialog>

namespace Ui {
class AddWordWindow;
}

class AddWordWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWordWindow(QWidget *parent = 0);
    ~AddWordWindow();

private slots:
    void on_cancelButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::AddWordWindow *ui;
};

#endif // ADDWORDWINDOW_H

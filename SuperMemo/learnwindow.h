#ifndef LEARNWINDOW_H
#define LEARNWINDOW_H

#include <QDialog>

namespace Ui {
class learnwindow;
}

class learnwindow : public QDialog
{
    Q_OBJECT

public:
    explicit learnwindow(QWidget *parent = 0);
    ~learnwindow();

private slots:
    void on_checkButton_clicked();

    void on_correctlyButton_clicked();

private:
    Ui::learnwindow *ui;
};

#endif // LEARNWINDOW_H

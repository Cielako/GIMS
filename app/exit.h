#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_exit_yes_no_accepted();

    void on_exit_yes_no_rejected();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

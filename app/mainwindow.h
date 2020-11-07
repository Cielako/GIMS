#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actioninformacje_triggered();

    void on_action_exit_app_triggered();

private:
    Ui::MainWindow *ui;
    Dialog *exitDialog;
    QSqlQueryModel *querymodel;
};
#endif // MAINWINDOW_H

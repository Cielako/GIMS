#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

#include "dialog.h"
#include "database.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString action_query;

private slots:
    void on_actioninformacje_triggered();
    void on_action_show_all_productsl_triggered();
    void on_action_delete_producy_triggered();
    void on_action_exit_app_triggered();
    void on_searchTerm_textChanged();

private:
    Ui::MainWindow *ui;
    Dialog *exitDialog;
    QSqlQueryModel *querymodel;
};
#endif // MAINWINDOW_H

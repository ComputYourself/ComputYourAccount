#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlDriver>
#include <QtCore/QtCore>
#include <QLayout>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_connection_to_db_requested ();

private slots:
    void on_infosPerso_triggered ();

private:
    Ui::MainWindow *ui;
    QStackedLayout* _layout;
    QSqlDatabase _bdd;
};

#endif // MAINWINDOW_H

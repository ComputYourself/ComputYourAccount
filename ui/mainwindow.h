#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include <QSqlDatabase>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_infosPerso_triggered ();
    void connect_to_db(QString& host, int port, QString &user, QString &pass);

private:
    Ui::MainWindow *ui;
    QStackedLayout* _layout;
    QSqlDatabase _db;
};

#endif // MAINWINDOW_H

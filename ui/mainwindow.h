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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_infosPerso_triggered ();

private:
    Ui::MainWindow *ui;
    QWidget* currentWidget;
};

#endif // MAINWINDOW_H

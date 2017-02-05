#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infosPerso.h"
#include <QSqlError>
#include <QSqlDriver>
#include <QtCore/QtCore>
#include <QLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _layout(new QStackedLayout)
{
    ui->setupUi(this);
    ui->centralWidget->setLayout(_layout);

    _layout->addWidget(new InfosPerso);
    connect(ui->actionInfos_Perso, SIGNAL(triggered(bool)), this, SLOT(on_infosPerso_triggered()));
}

void MainWindow::on_infosPerso_triggered ()
{
    _layout->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete _layout;
}

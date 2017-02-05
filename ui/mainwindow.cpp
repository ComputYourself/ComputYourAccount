#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infosPerso.h"
#include <QSqlError>
#include <QSqlDriver>
#include <QtCore/QtCore>
#include <QLayout>
#include <QStackedLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->centralWidget->setLayout(new QStackedLayout());

    this->currentWidget = new QWidget(this);

    ui->centralWidget->layout()->addWidget(currentWidget);
    QObject::connect(ui->actionInfos_Perso, SIGNAL(triggered(bool)), this, SLOT(on_infosPerso_triggered()));
}

void MainWindow::on_infosPerso_triggered () {
    if (this->currentWidget != nullptr)
        delete this->currentWidget;
    this->currentWidget = new InfosPerso();
    this->ui->centralWidget->layout()->addWidget(currentWidget);
}

MainWindow::~MainWindow() {
    delete ui;
}

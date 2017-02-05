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

    ui->centralWidget->layout()->addWidget(new InfosPerso);
    connect(ui->actionInfos_Perso, SIGNAL(triggered(bool)), this, SLOT(on_infosPerso_triggered()));
}

void MainWindow::on_infosPerso_triggered () {
    dynamic_cast<QStackedLayout*>(this->ui->centralWidget->layout())->setCurrentIndex(0);
}

MainWindow::~MainWindow() {
    delete ui;
}

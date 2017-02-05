#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infosPerso.h"
#include "dbConnection.h"
#include "accueil.h"
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

    _layout->addWidget(new Accueil(this));
    connect(ui->actionInfos_Perso, SIGNAL(triggered(bool)), this, SLOT(on_infosPerso_triggered()));
}

void MainWindow::on_infosPerso_triggered ()
{
    int i = _layout->addWidget(new dbConnection(this));
    _layout->setCurrentIndex(i);
}


MainWindow::~MainWindow() {
    delete ui;
    delete _layout;
}
/*
void plop () {
    qDebug() << QSqlDatabase::drivers();
    qDebug() << QSqlDatabase::isDriverAvailable("QMYSQL");
    this->bdd = QSqlDatabase::addDatabase("QMYSQL", "Ligue");
    qDebug() << bdd.connectionName();
    this->bdd.setHostName("localhost");
    this->bdd.setPort(3306);
    this->bdd.setDatabaseName("LigueKaladesh");
    this->bdd.setUserName("root");
    this->bdd.setPassword("root");
    if (this->bdd.open()) {
        ui->actionConnecter->setEnabled(false);
        ui->actionDeconnecter->setEnabled(true);
        ui->menuJoueurs->setEnabled(true);
        ui->menuResultats->setEnabled(true);

        switchCentralWidget(new QWidget());
    }
}
*/

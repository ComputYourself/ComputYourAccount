#include "mainWindow.h"
#include "ui_mainwindow.h"
#include "infosPerso.h"
#include "dbConnection.h"
#include "accueil.h"
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

void MainWindow::on_connection_to_db_requested (QString hostname, int port, QString user, QString password)
{
    this->_bdd = QSqlDatabase::addDatabase("QMYSQL", "ComputYourAccount");
    this->_bdd.setHostName(hostname);
    this->_bdd.setPort(port);
    this->_bdd.setDatabaseName("ComputYourAccount");
    this->_bdd.setUserName(user);
    this->_bdd.setPassword(password);
    if (this->_bdd.open()) {
        qDebug() << "Tout c'est bien passé";
    } else {
        qDebug() << "Ca c'est mal passé";
    }
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

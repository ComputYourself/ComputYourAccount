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
    _layout(new QStackedLayout),
    _db()
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


MainWindow::~MainWindow() {
    delete ui;
    delete _layout;
}

void MainWindow::connect_to_db(QString& host, int port, QString &user, QString &pass)
{
    _db = QSqlDatabase::addDatabase("QMYSQL", "ComputYourAccount");
    _db.setHostName(host);
    _db.setPort(port);
    _db.setDatabaseName("ComputYourAccount");
    _db.setUserName(user);
    _db.setPassword(pass);
    if (_db.open())
    {
        //OK
    }
    else
    {
        //FAIL
    }
}

/*void plop () {
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
}*/

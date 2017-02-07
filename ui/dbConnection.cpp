#include "dbConnection.h"
#include "ui_dbConnection.h"
#include "mainWindow.h"

#include <QDebug>

dbConnection::dbConnection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dbConnection)
{
    ui->setupUi(this);

    connect(ui->valider, SIGNAL(released()), this, SLOT(forward_connection_to_db()));
    connect(this, SIGNAL(request_connection_to_db(QString,int,QString,QString)), this->parentWidget(), SLOT(on_connection_to_db_requested(QString,int,QString,QString)));
}

void dbConnection::forward_connection_to_db()
{
    emit request_connection_to_db("localhost", 3306, ui->identifiant->text(), ui->password->text());
}

dbConnection::~dbConnection()
{
    delete ui;
}

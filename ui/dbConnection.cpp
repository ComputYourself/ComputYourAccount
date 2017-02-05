#include "dbConnection.h"
#include "ui_dbConnection.h"

dbConnection::dbConnection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dbConnection)
{
    ui->setupUi(this);
}

dbConnection::~dbConnection()
{
    delete ui;
}

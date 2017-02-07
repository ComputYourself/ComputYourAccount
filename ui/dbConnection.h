#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QWidget>

namespace Ui {
class dbConnection;
}

class dbConnection : public QWidget
{
    Q_OBJECT

public:
    explicit dbConnection(QWidget *parent = 0);
    ~dbConnection();

signals:
    void request_connection_to_db (QString hostname, int port, QString user, QString password);

private slots:
    void forward_connection_to_db();

private:
    Ui::dbConnection *ui;
};

#endif // DBCONNECTION_H

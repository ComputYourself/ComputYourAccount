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

private:
    Ui::dbConnection *ui;
};

#endif // DBCONNECTION_H

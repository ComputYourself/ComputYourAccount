#ifndef INFOSPERSO_H
#define INFOSPERSO_H

#include <QWidget>

namespace Ui {
class InfosPerso;
}

class InfosPerso : public QWidget
{
    Q_OBJECT

public:
    explicit InfosPerso(QWidget *parent = nullptr);
    ~InfosPerso();

private slots:
    void on_searchButton_released();

private:
    Ui::InfosPerso *ui;
};

#endif // INFOSPERSO_H

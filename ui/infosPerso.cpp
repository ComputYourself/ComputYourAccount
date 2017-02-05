#include "infosPerso.h"
#include "ui_infosPerso.h"

InfosPerso::InfosPerso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfosPerso)
{
    ui->setupUi(this);

    QObject::connect(ui->searchButton, SIGNAL(released()), this, SLOT(on_searchButton_released()));
}

void InfosPerso::on_searchButton_released() {

}

InfosPerso::~InfosPerso()
{
    delete ui;
}

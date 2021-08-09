#include "urunprofilekrani.h"
#include "ui_urunprofilekrani.h"

urunprofilekrani::urunprofilekrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::urunprofilekrani)
{
    ui->setupUi(this);
    ui->pushButton_4->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_5->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton_5,SIGNAL(clicked()), this, SIGNAL(add_new_user4_clicked())); //urun profil ekranına gidiş
}

urunprofilekrani::~urunprofilekrani()
{
    delete ui;
}

#include "urunkayitekrani.h"
#include "ui_urunkayitekrani.h"

UrunKayitEkrani::UrunKayitEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UrunKayitEkrani)
{
    ui->setupUi(this);

    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton,SIGNAL(clicked()),this,SIGNAL(add_new_user_clicked()));
}

UrunKayitEkrani::~UrunKayitEkrani()
{
    delete ui;
}

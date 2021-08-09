#include "kategoriekrani.h"
#include "ui_kategoriekrani.h"

KategoriEkrani::KategoriEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KategoriEkrani)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton, SIGNAL(clicked()),this, SIGNAL(push_button_clicked()));
}

KategoriEkrani::~KategoriEkrani()
{
    delete ui;
}

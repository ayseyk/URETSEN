#include "iletisimekrani.h"
#include "ui_iletisimekrani.h"

iletisimEkrani::iletisimEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::iletisimEkrani)
{
    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_3->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton_2,SIGNAL(clicked()),this,SIGNAL(button_iptal_clicked()));
}

iletisimEkrani::~iletisimEkrani()
{
    delete ui;
}

void iletisimEkrani::on_pushButton_2_clicked()
{
    ui->lineEdit_5->clear();
}

void iletisimEkrani::on_pushButton_clicked()
{

    this->close();
}


void iletisimEkrani::on_pushButton_3_clicked()
{
   QString secilen;

    secilen=ui->lineEdit_5->text();
}

#include "kayitekrani.h"
#include "ui_kayitekrani.h"

KayitEkrani::KayitEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KayitEkrani)
{
    ui->setupUi(this);
    ui->button_iptal->setStyleSheet("background-color:rgb(90,101,127)");
    ui->button_kaydet->setStyleSheet("background-color:rgb(90,101,127)");

   connect(ui->button_kaydet,SIGNAL(clicked()),this,SIGNAL(add_new_user_clicked()));
   connect(ui->button_iptal,SIGNAL(clicked()),this,SIGNAL(button_iptal_clicked()));
}

KayitEkrani::~KayitEkrani()
{
    delete ui;
}

void KayitEkrani::clear_line_edit()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
}

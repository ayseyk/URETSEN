#include "tercihekrani.h"
#include "ui_tercihekrani.h"

TercihEkrani::TercihEkrani(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TercihEkrani)
{
    ui->setupUi(this);
    ui->pushButton4->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton4, SIGNAL(clicked()),this, SIGNAL(add_user_clicked()));
}

TercihEkrani::~TercihEkrani()
{
    delete ui;
}


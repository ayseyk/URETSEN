#include "ureticiprofil.h"
#include "ui_ureticiprofil.h"

UreticiProfil::UreticiProfil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UreticiProfil)
{

    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->push_geri_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->toolButton->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->push_geri_2, SIGNAL(clicked()),this, SIGNAL(push_geri_2_clicked()));
}

UreticiProfil::~UreticiProfil()
{
    delete ui;
}

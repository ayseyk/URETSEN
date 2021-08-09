#include "tercihekrani.h"
#include "ui_tercihekrani.h"



TercihEkrani::TercihEkrani(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TercihEkrani)
{
    ui->setupUi(this);
    ui->pushButton4->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton4, SIGNAL(clicked()),this, SIGNAL(add_user_clicked()));

    new_uretici= new UreticiProfil();
    connect(new_uretici, SIGNAL(push_geri_2_clicked()),this, SLOT(kaydol_geri_slot())); //push_geri_2_clicked() sinyalini aldığında kaydol_geri_slot()'unun çalışması gerektiğini anlaması için sinyaller ve slotlar arası bağlar kurulur.
    connect(ui->check_uretici, SIGNAL(clicked()),this, SLOT(uretici_clicked_slot()));

    new_tuketici= new KategoriEkrani();
    connect(new_tuketici, SIGNAL(push_button_clicked()),this, SLOT(tercih_geri_slot()));
    connect(ui->check_tuketici, SIGNAL(clicked()),this, SLOT(tuketici_clicked_slot()));
}

TercihEkrani::~TercihEkrani()
{
    delete ui;
}

void TercihEkrani::kaydol_geri_slot()
{
    new_uretici->close();
    clear_select_fileld();
}

void TercihEkrani::uretici_clicked_slot()
{
    new_uretici->show();
}

void TercihEkrani::clear_select_fileld()
{
    ui->check_tuketici->setChecked(false);
    ui->check_uretici->setChecked(false);
}

void TercihEkrani::tercih_geri_slot()
{
     clear_select_fileld();
     new_tuketici->close();
}

void TercihEkrani::tuketici_clicked_slot()
{
    new_tuketici->show();
}

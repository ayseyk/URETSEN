#include "girisekrani.h"

#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QString dbLocation = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");//-----mobile kısmı çalışmayan.

    db.setDatabaseName(dbLocation + "/uretsen.db");

    /*if(!db.open())
       {
            return 1;
       }*/

    GirisEkrani w(&db);

    w.show();

    return a.exec();

}

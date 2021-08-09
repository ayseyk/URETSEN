#ifndef TERCIHEKRANI_H
#define TERCIHEKRANI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TercihEkrani; }
QT_END_NAMESPACE

class TercihEkrani : public QMainWindow
{
    Q_OBJECT

public:
    TercihEkrani(QWidget *parent = nullptr);
    ~TercihEkrani();


signals:
    void add_user_clicked();

private:
    Ui::TercihEkrani *ui;
};
#endif // TERCIHEKRANI_H

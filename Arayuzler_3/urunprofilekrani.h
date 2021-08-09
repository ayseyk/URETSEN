#ifndef URUNPROFILEKRANI_H
#define URUNPROFILEKRANI_H

#include <QWidget>

namespace Ui {
class urunprofilekrani;
}

class urunprofilekrani : public QWidget
{
    Q_OBJECT

public:
    explicit urunprofilekrani(QWidget *parent = nullptr);
    ~urunprofilekrani();
signals:
    void add_new_user4_clicked();

private:
    Ui::urunprofilekrani *ui;
};

#endif // URUNPROFILEKRANI_H

#ifndef KGLDTECHINIT_H
#define KGLDTECHINIT_H

#include <QDialog>
#include <QIcon>

namespace Ui {
class NavTechInit;
}

class NavTechInit : public QDialog
{
    Q_OBJECT

public:
    explicit NavTechInit(QWidget *parent = 0);
    ~NavTechInit();
    QString GetServers();
    void ShowNavtechIntro(bool exitAfter = true);

private:
    Ui::NavTechInit *ui;
};

#endif // KGLDTECHINIT_H

#ifndef BLEUTRADE_H
#define BLEUTRADE_H

#include <QWidget>

namespace Ui {
	class Bleutrade;
}
class WalletModel;

class Bleutrade : public QWidget
{
    Q_OBJECT

public:
    explicit Bleutrade(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Bleutrade();    


private:
	Ui::Bleutrade *ui;
    WalletModel *model;
};

#endif // BLEUTRADE_H

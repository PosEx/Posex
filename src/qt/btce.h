#ifndef BTCE_H
#define BTCE_H

#include <QWidget>

namespace Ui {
	class Btce;
}
class WalletModel;

class Btce : public QWidget
{
    Q_OBJECT

public:
    explicit Btce(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Btce();    


private:
	Ui::Btce *ui;
    WalletModel *model;
};

#endif // BTCE_H

#ifndef POLONIEX_H
#define POLONIEX_H

#include <QWidget>

namespace Ui {
	class Poloniex;
}
class WalletModel;

class Poloniex : public QWidget
{
    Q_OBJECT

public:
    explicit Poloniex(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Poloniex();    


private:
	Ui::Poloniex *ui;
    WalletModel *model;
};

#endif // POLONIEX_H

#ifndef BITTREX_H
#define BITTREX_H

#include <QWidget>

namespace Ui {
	class Bittrex;
}
class WalletModel;

class Bittrex : public QWidget
{
    Q_OBJECT

public:
    explicit Bittrex(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Bittrex();    


private:
	Ui::Bittrex *ui;
    WalletModel *model;
};

#endif // BITTREX_H

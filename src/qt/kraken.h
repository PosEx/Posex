#ifndef KRAKEN_H
#define KRAKEN_H

#include <QWidget>

namespace Ui {
	class Kraken;
}
class WalletModel;

class Kraken : public QWidget
{
    Q_OBJECT

public:
    explicit Kraken(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Kraken();    


private:
	Ui::Kraken *ui;
    WalletModel *model;
};

#endif // KRAKEN_H

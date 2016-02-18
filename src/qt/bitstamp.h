#ifndef BITSTAMP_H
#define BITSTAMP_H

#include <QWidget>

namespace Ui {
	class Bitstamp;
}
class WalletModel;

class Bitstamp : public QWidget
{
    Q_OBJECT

public:
    explicit Bitstamp(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Bitstamp();    


private:
	Ui::Bitstamp *ui;
    WalletModel *model;
};

#endif // BITSTAMP_H

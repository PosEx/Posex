#ifndef CCEX_H
#define CCEX_H

#include <QWidget>

namespace Ui {
	class Ccex;
}
class WalletModel;

class Ccex : public QWidget
{
    Q_OBJECT

public:
    explicit Ccex(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Ccex();    


private:
	Ui::Ccex *ui;
    WalletModel *model;
};

#endif // CCEX_H

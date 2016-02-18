#ifndef YOBIT_H
#define YOBIT_H

#include <QWidget>

namespace Ui {
	class Yobit;
}
class WalletModel;

class Yobit : public QWidget
{
    Q_OBJECT

public:
    explicit Yobit(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Yobit();    


private:
	Ui::Yobit *ui;
    WalletModel *model;
};

#endif // YOBIT_H

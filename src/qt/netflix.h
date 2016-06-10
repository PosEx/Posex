#ifndef NETFLIX_H
#define NETFLIX_H

#include <QWidget>
#include <QVideoWidget>

namespace Ui {
	class Netflix;
}
class WalletModel;

class Netflix : public QWidget
{
    Q_OBJECT

public:
    explicit Netflix(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Netflix();    


private:
	Ui::Netflix *ui;
    WalletModel *model;
};

#endif // NETFLIX_H

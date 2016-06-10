#ifndef FACEBOOK_H
#define FACEBOOK_H

#include <QWidget>

namespace Ui {
	class Facebook;
}
class WalletModel;

class Facebook : public QWidget
{
    Q_OBJECT

public:
    explicit Facebook(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Facebook();    


private:
	Ui::Facebook *ui;
    WalletModel *model;
};

#endif // FACEBOOK_H

#ifndef TWITTER_H
#define TWITTER_H

#include <QWidget>

namespace Ui {
	class Twitter;
}
class WalletModel;

class Twitter : public QWidget
{
    Q_OBJECT

public:
    explicit Twitter(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Twitter();    


private:
	Ui::Twitter *ui;
    WalletModel *model;
};

#endif // TWITTER_H

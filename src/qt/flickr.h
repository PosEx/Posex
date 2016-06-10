#ifndef FLICKR_H
#define FLICKR_H

#include <QWidget>

namespace Ui {
	class Flickr;
}
class WalletModel;

class Flickr : public QWidget
{
    Q_OBJECT

public:
    explicit Flickr(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Flickr();    


private:
	Ui::Flickr *ui;
    WalletModel *model;
};

#endif // FLICKR_H

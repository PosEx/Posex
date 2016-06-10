#ifndef INSTAGRAM_H
#define INSTAGRAM_H

#include <QWidget>

namespace Ui {
	class Instagram;
}
class WalletModel;

class Instagram : public QWidget
{
    Q_OBJECT

public:
    explicit Instagram(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Instagram();    


private:
	Ui::Instagram *ui;
    WalletModel *model;
};

#endif // INSTAGRAM_H

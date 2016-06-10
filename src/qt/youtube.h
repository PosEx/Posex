#ifndef YOUTUBE_H
#define YOUTUBE_H

#include <QWidget>

namespace Ui {
	class Youtube;
}
class WalletModel;

class Youtube : public QWidget
{
    Q_OBJECT

public:
    explicit Youtube(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Youtube();    


private:
	Ui::Youtube *ui;
    WalletModel *model;
};

#endif // BITTREX_H

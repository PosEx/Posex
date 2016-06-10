#ifndef LINKEDIN_H
#define LINKEDIN_H

#include <QWidget>

namespace Ui {
	class Linkedin;
}
class WalletModel;

class Linkedin : public QWidget
{
    Q_OBJECT

public:
    explicit Linkedin(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Linkedin();    


private:
	Ui::Linkedin *ui;
    WalletModel *model;
};

#endif // LINKEDIN_H

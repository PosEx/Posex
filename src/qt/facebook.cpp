#include "ui_facebook.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Facebook::Facebook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Facebook),
    model(0)
{
    ui->setupUi(this);
}
    void Facebook::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Facebook::~Facebook()
{
    delete ui;
}
#include "ui_btce.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Btce::Btce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Btce),
    model(0)
{
    ui->setupUi(this);
}
    void Btce::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Btce::~Btce()
{
    delete ui;
}
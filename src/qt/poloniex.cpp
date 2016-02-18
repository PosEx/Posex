#include "ui_poloniex.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Poloniex::Poloniex(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Poloniex),
    model(0)
{
    ui->setupUi(this);
}
    void Poloniex::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Poloniex::~Poloniex()
{
    delete ui;
}
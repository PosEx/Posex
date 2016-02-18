#include "ui_bitstamp.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Bitstamp::Bitstamp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bitstamp),
    model(0)
{
    ui->setupUi(this);
}
    void Bitstamp::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Bitstamp::~Bitstamp()
{
    delete ui;
}
#include "ui_bittrex.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Bittrex::Bittrex(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bittrex),
    model(0)
{
    ui->setupUi(this);
}
    void Bittrex::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Bittrex::~Bittrex()
{
    delete ui;
}
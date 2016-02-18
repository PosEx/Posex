#include "ui_kraken.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Kraken::Kraken(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Kraken),
    model(0)
{
    ui->setupUi(this);
}
    void Kraken::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Kraken::~Kraken()
{
    delete ui;
}
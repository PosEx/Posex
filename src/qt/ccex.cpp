#include "ui_ccex.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Ccex::Ccex(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ccex),
    model(0)
{
    ui->setupUi(this);
}
    void Ccex::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Ccex::~Ccex()
{
    delete ui;
}
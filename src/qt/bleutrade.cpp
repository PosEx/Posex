#include "ui_bleutrade.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Bleutrade::Bleutrade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bleutrade),
    model(0)
{
    ui->setupUi(this);
}
    void Bleutrade::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Bleutrade::~Bleutrade()
{
    delete ui;
}
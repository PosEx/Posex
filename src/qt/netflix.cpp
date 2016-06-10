#include "ui_netflix.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Netflix::Netflix(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Netflix),
    model(0)
{
    ui->setupUi(this);
}
    void Netflix::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Netflix::~Netflix()
{
    delete ui;
}
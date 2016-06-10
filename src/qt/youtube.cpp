#include "ui_youtube.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Youtube::Youtube(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Youtube),
    model(0)
{
    ui->setupUi(this);
}
    void Youtube::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Youtube::~Youtube()
{
    delete ui;
}
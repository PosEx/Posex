#include "ui_yobit.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Yobit::Yobit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Yobit),
    model(0)
{
    ui->setupUi(this);
}
    void Yobit::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Yobit::~Yobit()
{
    delete ui;
}
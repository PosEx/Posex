#include "ui_flickr.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Flickr::Flickr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flickr),
    model(0)
{
    ui->setupUi(this);
}
    void Flickr::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Flickr::~Flickr()
{
    delete ui;
}
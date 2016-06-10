#include "ui_linkedin.h"
#include "guiutil.h"
#include "posexgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Linkedin::Linkedin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Linkedin),
    model(0)
{
    ui->setupUi(this);
}
    void Linkedin::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Linkedin::~Linkedin()
{
    delete ui;
}
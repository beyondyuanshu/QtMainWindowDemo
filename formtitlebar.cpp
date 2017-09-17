#include "formtitlebar.h"
#include "ui_formtitlebar.h"

FormTitleBar::FormTitleBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTitleBar)
{
    ui->setupUi(this);
}

FormTitleBar::~FormTitleBar()
{
    delete ui;
}

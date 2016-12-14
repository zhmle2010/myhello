#include "loglatedit.h"
#include "ui_loglatedit.h"

LogLatEdit::LogLatEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogLatEdit)
{
    ui->setupUi(this);
}

LogLatEdit::~LogLatEdit()
{
    delete ui;
}

void LogLatEdit::setText(QString text)
{
    ui->label->setText(text);
}

#include "testui.h"
#include "./ui_testui.h"

TestUI::TestUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TestUI)
{
    ui->setupUi(this);
}

TestUI::~TestUI()
{
    delete ui;
}


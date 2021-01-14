#ifndef TESTUI_H
#define TESTUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TestUI; }
QT_END_NAMESPACE

class TestUI : public QMainWindow
{
    Q_OBJECT

public:
    TestUI(QWidget *parent = nullptr);
    ~TestUI();

private:
    Ui::TestUI *ui;
};
#endif // TESTUI_H

#include "notedialog.h"
#include "ui_notedialog.h"

noteDialog::noteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::noteDialog)
{
    ui->setupUi(this);
    this->setWindowOpacity(0.8);
    event = new myEvent();
}

noteDialog::~noteDialog()
{
    delete ui;
}

//关闭窗口；
void noteDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    emit passDetail(event);
    this->close();
}


//加事件
void noteDialog::on_eventLineEdit_editingFinished()
{
    event->setEventName (ui->eventLineEdit->text ());
    pass(ui->eventLineEdit->text ());
}

//加地点
void noteDialog::on_locateEdit_editingFinished()
{
    event->setLocate(ui->locateEdit->text ());
}

//加开始时间
void noteDialog::on_startComboBox_currentTextChanged(const QString &arg1)
{
    event->setStartTime (arg1);
}

//加结束时间
void noteDialog::on_endComboBox_currentTextChanged(const QString &arg1)
{
    event->setEndTime(arg1);
}

//加重复模式
void noteDialog::on_repeatComboBox_currentTextChanged(const QString &arg1)
{
    event->setRepeat(arg1);
}

//加颜色
void noteDialog::on_colorComboBox_currentTextChanged(const QString &arg1)
{
    event->setColor(arg1);
}

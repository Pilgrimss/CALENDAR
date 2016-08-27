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


void noteDialog::initNoteDialog(const myEvent *tempevent)
{
    event = new myEvent(tempevent);
    ui->eventLineEdit->setText (event->getEventName ());
    ui->locateEdit->setText (event->getLocate ());
    QString temp = event->getColor ();
    int index = ui->colorComboBox->findText (temp);
    ui->colorComboBox->setCurrentIndex (index);
    temp = event->getRepeat ();
    index = ui->repeatComboBox->findText (temp);
    ui->repeatComboBox->setCurrentIndex (index);
}

/*
//加事件
void noteDialog::on_eventLineEdit_editingFinished()
{
    event->setEventName(ui->eventLineEdit->text ());
    qDebug() << "^^^^^^^^" << endl;
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
*/
void noteDialog::on_buttonBox_accepted()
{
    //qDebug() << "********" << event->getEventName () << endl;
    event->setEventName(ui->eventLineEdit->text ());
    event->setLocate(ui->locateEdit->text ());
    event->setStartTime (ui->startTimeEdit->time ().toString ());
    event->setEndTime(ui->endTimeEdit->time ().toString ());
    event->setRepeat(ui->repeatComboBox->currentText ());
    event->setColor(ui->colorComboBox->currentText ());
    if(!ui->eventLineEdit->text().isEmpty ())
    {
        pass(ui->eventLineEdit->text ());
        qDebug() << "********" << event->getEventName () << endl;
        emit passDetail(event);
    }
    emit deleteItem ();
    this->close();
}

void noteDialog::on_buttonBox_rejected()
{
    this->close();
}

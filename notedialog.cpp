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

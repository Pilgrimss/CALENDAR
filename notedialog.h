#ifndef NOTEDIALOG_H
#define NOTEDIALOG_H

#include <QDialog>
#include <QtGui>
#include <QAbstractButton>
#include <QString>
#include <QDebug>
#include "myevent.h"
namespace Ui {
class noteDialog;
}

class noteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit noteDialog(QWidget *parent = 0);
    ~noteDialog();
    void initNoteDialog(const myEvent *tempevent);

signals:

    void pass(const QString);//传递事件名称
    void passDetail(const myEvent);//传递事件具体信息
    void deleteItem();//在编辑状态下，如果保存，就把原来的事件删掉；

private slots:
    /*
    void on_eventLineEdit_editingFinished();

    void on_locateEdit_editingFinished();

    void on_startComboBox_currentTextChanged(const QString &arg1);

    void on_endComboBox_currentTextChanged(const QString &arg1);

    void on_repeatComboBox_currentTextChanged(const QString &arg1);

    void on_colorComboBox_currentTextChanged(const QString &arg1);
    */

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::noteDialog *ui;
    myEvent *event;
};

#endif // NOTEDIALOG_H

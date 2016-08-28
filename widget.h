#ifndef WIDGET_HPP
#define WIDGET_HPP

#include <QWidget>
#include "mycalendar.h"
#include <QVector>
#include <QString>
#include <QDebug>
#include <QDate>
#include <QListWidgetItem>
#include "notedialog.h"
#include "myevent.h"
#include "QList"
#include <QDir>
#include <QFile>
#include <QTextStream>
#include "database.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //拖拽
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);

    //用todolist初始化DisplayList;
    void initDisplayList();

    void initUser();

    void saveUser();

    void initDataBase(const QDate&);

    void saveDataBase();

    bool judgeRepeat(myEvent repeatEvent);

private slots:
    //拖拽
    bool readFile(const QString &fileName);

    void on_OnRadiobutton_toggled(bool checked);

    void on_calendar_activated(const QDate &date);

    void on_calendar_clicked(const QDate &date);

    void on_clearButton_clicked();

    void on_displayList_itemActivated(QListWidgetItem *item);

    void on_deleteButton_clicked();

    void on_editButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_dateEdit_dateChanged(const QDate &date);

public slots:
    void addNote(const QString);
    void addEvent(myEvent);
private:
    Ui::Widget *ui;
    noteDialog *note;
    int index;//编辑条目
    myDataBase* dataBase;
};

#endif // WIDGET_HPP

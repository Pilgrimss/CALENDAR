/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <displaylistwidget.h>
#include <mycalendar.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *setTab;
    QWidget *widget;
    QLabel *label;
    QRadioButton *OnRadiobutton;
    QRadioButton *OffRadioButton;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *dayTab;
    QWidget *weekTab;
    QWidget *monthTab;
    myCalendar *calendar;
    QLabel *eventLabel;
    QWidget *widget_2;
    DisplayListWidget *displayList;
    QPushButton *editButton;
    QPushButton *clearButton;
    QPushButton *deleteButton;
    QWidget *yearTab;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(620, 418);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 621, 421));
        tabWidget->setMaximumSize(QSize(621, 461));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setUsesScrollButtons(false);
        setTab = new QWidget();
        setTab->setObjectName(QStringLiteral("setTab"));
        widget = new QWidget(setTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 171, 81));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 101, 16));
        OnRadiobutton = new QRadioButton(widget);
        OnRadiobutton->setObjectName(QStringLiteral("OnRadiobutton"));
        OnRadiobutton->setGeometry(QRect(20, 40, 100, 20));
        OffRadioButton = new QRadioButton(widget);
        OffRadioButton->setObjectName(QStringLiteral("OffRadioButton"));
        OffRadioButton->setGeometry(QRect(80, 40, 100, 20));
        OffRadioButton->setChecked(true);
        comboBox = new QComboBox(setTab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 130, 104, 26));
        label_2 = new QLabel(setTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(18, 100, 141, 20));
        label_3 = new QLabel(setTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 180, 59, 16));
        tabWidget->addTab(setTab, QString());
        dayTab = new QWidget();
        dayTab->setObjectName(QStringLiteral("dayTab"));
        tabWidget->addTab(dayTab, QString());
        weekTab = new QWidget();
        weekTab->setObjectName(QStringLiteral("weekTab"));
        tabWidget->addTab(weekTab, QString());
        monthTab = new QWidget();
        monthTab->setObjectName(QStringLiteral("monthTab"));
        calendar = new myCalendar(monthTab);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setGeometry(QRect(180, 0, 431, 401));
        QFont font;
        font.setPointSize(10);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStyleStrategy(QFont::PreferDefault);
        calendar->setFont(font);
        calendar->setCursor(QCursor(Qt::ArrowCursor));
        calendar->setContextMenuPolicy(Qt::DefaultContextMenu);
        calendar->setStyleSheet(QLatin1String("selection-color: rgba(128, 0, 255, 151);\n"
""));
        calendar->setInputMethodHints(Qt::ImhNone);
        calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        eventLabel = new QLabel(monthTab);
        eventLabel->setObjectName(QStringLiteral("eventLabel"));
        eventLabel->setGeometry(QRect(-2, 0, 181, 71));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        eventLabel->setFont(font1);
        eventLabel->setStyleSheet(QLatin1String("eventLabel{\n"
"background-colour:rgb(255, 255, 255),\n"
"colour: rgba(0, 128, 255, 147)\n"
"\n"
"}"));
        eventLabel->setFrameShape(QFrame::Panel);
        eventLabel->setFrameShadow(QFrame::Sunken);
        eventLabel->setLineWidth(0);
        eventLabel->setMidLineWidth(0);
        eventLabel->setTextFormat(Qt::PlainText);
        widget_2 = new QWidget(monthTab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 80, 181, 311));
        displayList = new DisplayListWidget(widget_2);
        displayList->setObjectName(QStringLiteral("displayList"));
        displayList->setGeometry(QRect(0, 0, 181, 251));
        editButton = new QPushButton(widget_2);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(0, 250, 81, 32));
        clearButton = new QPushButton(widget_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(40, 280, 91, 32));
        deleteButton = new QPushButton(widget_2);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(100, 250, 81, 32));
        tabWidget->addTab(monthTab, QString());
        yearTab = new QWidget();
        yearTab->setObjectName(QStringLiteral("yearTab"));
        tabWidget->addTab(yearTab, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "Drag And Drop", 0));
        OnRadiobutton->setText(QApplication::translate("Widget", "On", 0));
        OffRadioButton->setText(QApplication::translate("Widget", "Off", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "Monday", 0)
         << QApplication::translate("Widget", "Tuesday", 0)
         << QApplication::translate("Widget", "Wednsday", 0)
         << QApplication::translate("Widget", "Thursday", 0)
         << QApplication::translate("Widget", "Firday", 0)
         << QApplication::translate("Widget", "Saturday", 0)
         << QApplication::translate("Widget", "Sunday", 0)
        );
        label_2->setText(QApplication::translate("Widget", "First Day of the Week", 0));
        label_3->setText(QApplication::translate("Widget", "Language", 0));
        tabWidget->setTabText(tabWidget->indexOf(setTab), QApplication::translate("Widget", "Settings", 0));
        tabWidget->setTabText(tabWidget->indexOf(dayTab), QApplication::translate("Widget", "Day", 0));
        tabWidget->setTabText(tabWidget->indexOf(weekTab), QApplication::translate("Widget", "Week", 0));
        eventLabel->setText(QApplication::translate("Widget", "   MyEvent", 0));
        editButton->setText(QApplication::translate("Widget", "edit", 0));
        clearButton->setText(QApplication::translate("Widget", "clear", 0));
        deleteButton->setText(QApplication::translate("Widget", "delete", 0));
        tabWidget->setTabText(tabWidget->indexOf(monthTab), QApplication::translate("Widget", "Month", 0));
        tabWidget->setTabText(tabWidget->indexOf(yearTab), QApplication::translate("Widget", "Year", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

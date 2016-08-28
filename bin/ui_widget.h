/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <displaylistwidget.h>
#include <mycalendar.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
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
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDateEdit *dateEdit;
    DisplayListWidget *displayList;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    myCalendar *calendar;
    QWidget *yearTab;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(765, 585);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        horizontalLayout_4 = new QHBoxLayout(monthTab);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        label_4 = new QLabel(monthTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(27);
        font.setItalic(true);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        dateEdit = new QDateEdit(monthTab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setDate(QDate(1900, 1, 1));

        verticalLayout->addWidget(dateEdit);

        displayList = new DisplayListWidget(monthTab);
        displayList->setObjectName(QStringLiteral("displayList"));

        verticalLayout->addWidget(displayList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearButton = new QPushButton(monthTab);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        editButton = new QPushButton(monthTab);
        editButton->setObjectName(QStringLiteral("editButton"));

        horizontalLayout->addWidget(editButton);


        verticalLayout->addLayout(horizontalLayout);

        deleteButton = new QPushButton(monthTab);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        verticalLayout->addWidget(deleteButton);


        horizontalLayout_4->addLayout(verticalLayout);

        widget_2 = new QWidget(monthTab);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        horizontalLayout_4->addWidget(widget_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        calendar = new myCalendar(monthTab);
        calendar->setObjectName(QStringLiteral("calendar"));
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        calendar->setFont(font1);
        calendar->setCursor(QCursor(Qt::ArrowCursor));
        calendar->setContextMenuPolicy(Qt::DefaultContextMenu);
        calendar->setStyleSheet(QLatin1String("selection-color: rgba(128, 0, 255, 151);\n"
""));
        calendar->setInputMethodHints(Qt::ImhNone);
        calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

        verticalLayout_2->addWidget(calendar);


        horizontalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(monthTab, QString());
        yearTab = new QWidget();
        yearTab->setObjectName(QStringLiteral("yearTab"));
        tabWidget->addTab(yearTab, QString());

        horizontalLayout_5->addWidget(tabWidget);


        verticalLayout_3->addLayout(horizontalLayout_5);


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
        label_4->setText(QApplication::translate("Widget", "Turn To", 0));
        dateEdit->setDisplayFormat(QApplication::translate("Widget", "yy/M/d", 0));
        clearButton->setText(QApplication::translate("Widget", "clear", 0));
        editButton->setText(QApplication::translate("Widget", "edit", 0));
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

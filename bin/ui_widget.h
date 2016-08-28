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
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
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
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDateEdit *dateEdit;
    DisplayListWidget *displayList;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QWidget *yearTab;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(765, 585);
        horizontalLayout_3 = new QHBoxLayout(Widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        calendar->setGeometry(QRect(230, 0, 431, 391));
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
        widget_2 = new QWidget(monthTab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(230, 40, 181, 311));
        verticalLayoutWidget_2 = new QWidget(widget_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 11, 231, 435));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(monthTab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 229, 433));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(27);
        font1.setItalic(true);
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        dateEdit = new QDateEdit(verticalLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCurrentSectionIndex(0);
        dateEdit->setDate(QDate(1900, 1, 1));

        verticalLayout->addWidget(dateEdit);

        displayList = new DisplayListWidget(verticalLayoutWidget);
        displayList->setObjectName(QStringLiteral("displayList"));

        verticalLayout->addWidget(displayList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearButton = new QPushButton(verticalLayoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        editButton = new QPushButton(verticalLayoutWidget);
        editButton->setObjectName(QStringLiteral("editButton"));

        horizontalLayout->addWidget(editButton);


        verticalLayout->addLayout(horizontalLayout);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        tabWidget->addTab(monthTab, QString());
        yearTab = new QWidget();
        yearTab->setObjectName(QStringLiteral("yearTab"));
        tabWidget->addTab(yearTab, QString());

        horizontalLayout_2->addWidget(tabWidget);


        horizontalLayout_3->addLayout(horizontalLayout_2);


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

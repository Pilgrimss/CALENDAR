/********************************************************************************
** Form generated from reading UI file 'notedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEDIALOG_H
#define UI_NOTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_noteDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QComboBox *repeatComboBox;
    QLineEdit *eventLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *locateEdit;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QComboBox *colorComboBox;
    QTimeEdit *startTimeEdit;
    QTimeEdit *endTimeEdit;

    void setupUi(QDialog *noteDialog)
    {
        if (noteDialog->objectName().isEmpty())
            noteDialog->setObjectName(QStringLiteral("noteDialog"));
        noteDialog->resize(626, 424);
        groupBox = new QGroupBox(noteDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 371, 261));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 62, 59, 16));
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);
        repeatComboBox = new QComboBox(groupBox);
        repeatComboBox->setObjectName(QStringLiteral("repeatComboBox"));
        repeatComboBox->setGeometry(QRect(90, 120, 121, 26));
        repeatComboBox->setFont(font);
        eventLineEdit = new QLineEdit(groupBox);
        eventLineEdit->setObjectName(QStringLiteral("eventLineEdit"));
        eventLineEdit->setGeometry(QRect(90, 30, 261, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 91, 59, 16));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 123, 59, 16));
        label_4->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 59, 16));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("QLable{\n"
"\n"
"rgba(128, 0, 255, 143)\n"
"}"));
        locateEdit = new QLineEdit(groupBox);
        locateEdit->setObjectName(QStringLiteral("locateEdit"));
        locateEdit->setGeometry(QRect(90, 90, 261, 21));
        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-10, 190, 341, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(12, 153, 59, 16));
        colorComboBox = new QComboBox(groupBox);
        colorComboBox->setObjectName(QStringLiteral("colorComboBox"));
        colorComboBox->setGeometry(QRect(90, 150, 121, 26));
        startTimeEdit = new QTimeEdit(groupBox);
        startTimeEdit->setObjectName(QStringLiteral("startTimeEdit"));
        startTimeEdit->setGeometry(QRect(90, 60, 118, 24));
        endTimeEdit = new QTimeEdit(groupBox);
        endTimeEdit->setObjectName(QStringLiteral("endTimeEdit"));
        endTimeEdit->setGeometry(QRect(230, 60, 118, 24));

        retranslateUi(noteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), noteDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(noteDialog);
    } // setupUi

    void retranslateUi(QDialog *noteDialog)
    {
        noteDialog->setWindowTitle(QApplication::translate("noteDialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("noteDialog", "GroupBox", 0));
        label_2->setText(QApplication::translate("noteDialog", "Time", 0));
        repeatComboBox->clear();
        repeatComboBox->insertItems(0, QStringList()
         << QApplication::translate("noteDialog", "OnlyOnce", 0)
         << QApplication::translate("noteDialog", "EveryDay", 0)
         << QApplication::translate("noteDialog", "EveryWeek", 0)
         << QApplication::translate("noteDialog", "EveryMonth", 0)
         << QApplication::translate("noteDialog", "EveryYear", 0)
        );
        label_3->setText(QApplication::translate("noteDialog", "Locate", 0));
        label_4->setText(QApplication::translate("noteDialog", "Repeat", 0));
        label->setText(QApplication::translate("noteDialog", "Event", 0));
        label_5->setText(QApplication::translate("noteDialog", "Color", 0));
        colorComboBox->clear();
        colorComboBox->insertItems(0, QStringList()
         << QApplication::translate("noteDialog", "Red(Urgent)", 0)
         << QApplication::translate("noteDialog", "Blue(LIfe)", 0)
         << QApplication::translate("noteDialog", "Cyan(Work)", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class noteDialog: public Ui_noteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEDIALOG_H

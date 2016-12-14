/********************************************************************************
** Form generated from reading UI file 'loglatedit.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGLATEDIT_H
#define UI_LOGLATEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogLatEdit
{
public:
    QLabel *label;

    void setupUi(QWidget *LogLatEdit)
    {
        if (LogLatEdit->objectName().isEmpty())
            LogLatEdit->setObjectName(QStringLiteral("LogLatEdit"));
        LogLatEdit->resize(200, 80);
        label = new QLabel(LogLatEdit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 151, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(LogLatEdit);

        QMetaObject::connectSlotsByName(LogLatEdit);
    } // setupUi

    void retranslateUi(QWidget *LogLatEdit)
    {
        LogLatEdit->setWindowTitle(QApplication::translate("LogLatEdit", "Form", 0));
        label->setText(QApplication::translate("LogLatEdit", "hello world", 0));
    } // retranslateUi

};

namespace Ui {
    class LogLatEdit: public Ui_LogLatEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGLATEDIT_H

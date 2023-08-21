/********************************************************************************
** Form generated from reading UI file 'AddressBook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookClass
{
public:

    void setupUi(QWidget *AddressBookClass)
    {
        if (AddressBookClass->objectName().isEmpty())
            AddressBookClass->setObjectName(QString::fromUtf8("AddressBookClass"));
        AddressBookClass->resize(600, 400);

        retranslateUi(AddressBookClass);

        QMetaObject::connectSlotsByName(AddressBookClass);
    } // setupUi

    void retranslateUi(QWidget *AddressBookClass)
    {
        AddressBookClass->setWindowTitle(QCoreApplication::translate("AddressBookClass", "AddressBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookClass: public Ui_AddressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H

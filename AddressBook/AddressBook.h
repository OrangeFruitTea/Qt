#pragma once

#include <QtWidgets/QWidget>
#include "ui_AddressBook.h"

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = nullptr);
    ~AddressBook();

private:
    Ui::AddressBookClass ui;
};

#ifndef TESTPHONEBOOK_H
#define TESTPHONEBOOK_H

#pragma once
#include "phoneBook.h"
#include <QObject>

class TestPhoneBook : public QObject {
    Q_OBJECT

private slots:

    void addRecord();
    void getRecord();
    void filter();
};


#endif // TESTPHONEBOOK_H

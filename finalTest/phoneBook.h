//
// Created by burma on 04.04.2022.
//


#pragma once
#include <QString>
#include <QList>

#ifndef MAIN_CPP_PHONEBOOK_H
#define MAIN_CPP_PHONEBOOK_H

struct Record {
    QString name;
    QString secondName;
    QString number;

    Record(QString n, QString sN, QString num) : name(n), secondName(sN), number(num) {}
};

class PhoneBook {
private:
    QList<Record> list;

public:
    int size();
    void add(Record rec);
    Record getRecord(int i);
    QList<Record> filter(QString part);


};


#endif //MAIN_CPP_PHONEBOOK_H

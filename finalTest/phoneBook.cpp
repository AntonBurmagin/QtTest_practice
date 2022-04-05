#include <QTextStream>
#include "phoneBook.h"

void PhoneBook::add(Record rec) {
    list.append(rec);
}
Record PhoneBook::getRecord(int i) {
    if(i>=0 && i<list.size())
        return list[i];
    else
        return Record(nullptr, nullptr, nullptr);
}
QList<Record> PhoneBook::filter(QString part) {
    QList<Record> recordsFind;
    for (auto i : list)
        if (i.name.contains(part) || i.secondName.contains(part) || i.number.contains(part))
            recordsFind.append(i);
    return recordsFind;
}

int PhoneBook::size() {
    return list.size();
}


#include "phoneBook.h"
#include <iostream>
#include <QTextStream>


int main() {
    PhoneBook book;
    book.add(Record("Anton", "Burmagin", "89218281439"));
    book.add(Record("Alina", "Shakirova", "89110991188"));
    QTextStream out(stdout);

    QList<Record> recordMatch = book.filter("a");

    auto find = book.getRecord(1);
    if(find.name!=nullptr)
        out << find.name << " " << find.number << " " << find.secondName << Qt::endl;
    out.flush();

    for(auto rec : recordMatch)
        out << rec.name << " " << rec.number << " " << rec.secondName << Qt::endl;
    out.flush();

}

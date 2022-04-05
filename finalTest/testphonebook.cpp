#include "testphonebook.h"
#include <QtTest>


void TestPhoneBook::addRecord() {
    PhoneBook book;
    book.add(Record("Anton", "Burmagin", "89818285439"));
    book.add(Record("Alina", "Shakirova", "89019530867"));
    book.add(Record("Bruce", "Wayne", "77777777777"));
    QVERIFY2(book.size()==3, "chek add() and size()");
}

void TestPhoneBook::getRecord() {
    PhoneBook book;
    book.add(Record("Barry", "Allen", "01010110101"));
    book.add(Record("Alfred", "Pennyworth", "89019530867"));
    QVERIFY2(book.getRecord(2).name == nullptr && book.getRecord(2).secondName == nullptr &&
                     book.getRecord(2).number == nullptr, "get record out of array");
    Record barry = book.getRecord(0);
    QVERIFY2(barry.name == "Barry" && barry.secondName == "Allen" &&
                     barry.number == "01010110101", "get record out of array");
}

void TestPhoneBook::filter() {
    PhoneBook book;
    book.add(Record("Barry", "Allen", "01010110101"));
    book.add(Record("Alfred", "Pennyworth", "89019530867"));
    QVERIFY2(book.filter("r")[0].name=="Barry" && book.filter("r")[1].number=="89019530867" &&
             book.filter("r").size()==2 && book.filter("9").size()==1, "filter chek");
}


QTEST_APPLESS_MAIN(TestPhoneBook)

#include "testphonebook.moc"



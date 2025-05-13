#include "Reminder.h"
#include <iostream>
using namespace std;

Reminder::Reminder() : activityNumber(0), metadata("unknown", "N/A") {
    cout << "Reminder constructed (default)\n";
}

Reminder::Reminder(int number, const string& author, const string& date)
        : activityNumber(number), metadata(author, date) {
    cout << "Reminder constructed with metadata\n";
}

Reminder::~Reminder() {
    cout << "Reminder destructed" << endl;
}

int Reminder::getValue() const {
    return activityNumber;
}

void Reminder::show() const {
    cout << "Reminder: Don't forget Project #" << activityNumber << endl;
    metadata.print();
}

#ifndef DELETEME_REMINDER_H
#define DELETEME_REMINDER_H

#include "Widget.h"
#include "Metadata.h"
#include <string>

class Reminder : public Widget {
public:
    Reminder(); // default
    Reminder(int number, const std::string& author, const std::string& date);
    ~Reminder() override;

    void show() const override;
    int getValue() const;

private:
    int activityNumber;
    Metadata metadata;
};

#endif

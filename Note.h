#ifndef DELETEME_NOTE_H
#define DELETEME_NOTE_H

#include <string>
#include "Widget.h"
#include "Metadata.h"


class Note : public Widget{
public:
    Note();
    explicit Note(const std::string& value);
    Note(const string& value, const string& author, const string& date);
    ~Note() override;
    void show()const override;
    std::string getValue();
    void setValue(const std::string& value);

private:
    std::string value;
    Metadata metadata; // has -a Metadata
};

#endif
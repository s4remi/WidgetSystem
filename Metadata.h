//
// Created by 45 on 5/12/25.
//

#ifndef DELETEME_METADATA_H
#define DELETEME_METADATA_H

#include <string>
using namespace std;


class Metadata {
public:
    Metadata();
    Metadata(const string& author, const string& date);
    void print() const;
private:
    string author;
    string date;


};


#endif //DELETEME_METADATA_H

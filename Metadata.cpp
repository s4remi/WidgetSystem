

#include "Metadata.h"
#include <iostream>
using namespace std;

Metadata::Metadata() :author{"unknowm"},date("n/a"){}
Metadata::Metadata(const std::string &author, const std::string &date):author{author},date(date) {}


void Metadata::print() const{
    cout<< "auther: "<< author<< ", Date: " << date<< endl;
}



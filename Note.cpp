#include "Note.h"
#include <iostream>
using  namespace std;
//Note::Note(bool enabled) :Widget(enabled){
//    cout<< "Note constructed"<<endl;
//}
Note::~Note() {
    cout<<"Note destructed" << endl;
}
string Note::getValue() {
    this->width= 30;

    return value;
}
void Note::setValue(const std::string &value) {
    this->value=value;
}

Note::Note( const std::string &value) :  value {value}{
    cout<< "Note"<< value<<endl;

}
void Note::show() const {
    cout<<"Note: "<<value<< endl;
    metadata.print();
}

Note::Note(const string& value, const string& author, const string& date) : value{value}, metadata(author,date){

}
Note::Note():metadata(){
    cout<< "Note constructed"<< endl;
};
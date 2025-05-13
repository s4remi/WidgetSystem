
#include "Widget.h"
#include <iostream>



Widget::~Widget() {

    std::cout<<"widget destructed" << std::endl;
}

void Widget::disable() {
    enabled= false;
}
void Widget::enable() {
    enabled= true;
}
bool Widget::isEnable() const {
    return enabled;
}

void Widget::show() const {
    std::cout<<"showing a widget"<<std::endl;
}

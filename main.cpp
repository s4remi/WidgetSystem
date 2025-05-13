#include <iostream>
#include "Rectangle.h"
#include "Person.h"
#include "Widget.h"
#include "Note.h"
#include <vector>
#include "Reminder.h"
#include "Metadata.h"

using namespace std;


void showWidget(Widget& widget){
    widget.show();

}

int main() {

    vector<Widget*> widgets;
    widgets.push_back(new Note("pay attention!","michel jackon","2025-05-12"));

    widgets.push_back(new Reminder{});
    widgets.push_back(new Reminder(3, "Dr. Saremi", "2025-05-13"));



    for(const auto& widget: widgets)
        widget->show();


    Widget* w= new Note("live you life","dalai lama", "2025-05-12");
    w->show();




    for (auto& widget : widgets)
        delete widget;

    return 0;
}


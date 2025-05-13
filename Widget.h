

#ifndef DELETEME_WIDGET_H
#define DELETEME_WIDGET_H


class Widget {
public:
    Widget()=default;
//    explicit Widget(bool enabled);
    virtual ~Widget();
    void enable();
    void disable();
    bool isEnable() const;
    virtual void show()const=0;
private:
    bool enabled;

protected:
    int width;


};


#endif
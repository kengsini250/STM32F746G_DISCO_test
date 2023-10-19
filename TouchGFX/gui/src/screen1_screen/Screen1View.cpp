#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::functionUP()
{
    Screen1ViewBase::functionUP();
    presenter->up();
    get();
}

void Screen1View::functionDOWN()
{
    Screen1ViewBase::functionDOWN();
    presenter->down();
    get();
}

void Screen1View::get()
{
    Unicode::snprintf(textArea1Buffer,TEXTAREA1_SIZE,"%d",presenter->get());
    textArea1.invalidate();
}

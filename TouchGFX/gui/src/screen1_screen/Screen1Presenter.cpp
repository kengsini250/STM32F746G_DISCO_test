#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}

void Screen1Presenter::up()
{
    model->up();
}

void Screen1Presenter::down()
{
    model->down();
}

int Screen1Presenter::get()
{
    return model->get();
}


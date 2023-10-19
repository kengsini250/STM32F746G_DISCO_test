#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

void Model::up()
{
    count++;
    if(count >=99)
    {
        count = 99;
    }
}

void Model::down()
{
    count--;
    if(count <=0)
    {
        count =0;
    }
}

int Model::get()
{
    return count;
}



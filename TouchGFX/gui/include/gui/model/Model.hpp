#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void up();
    void down();
    int get();
protected:
    ModelListener* modelListener;

    int count = 0;
};

#endif // MODEL_HPP

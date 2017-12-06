#include "counter.h"

Counter::Counter() : _current(0)
                   , _max(9999)
                   , _min(0)
                   , _step(0)
{

}

Counter::Counter(int max) : _current(0)
                          , _max(max)
                          , _min(0)
                          , _step(0)
{

}

Counter::Counter(int max, int current) : _current(current)
                                       , _max(max)
                                       , _min(0)
                                       , _step(0)
{

}

Counter::Counter(int max, int current, int step) : _current(current)
                                                 , _max(max)
                                                 , _min(0)
                                                 , _step(step)
{

}

void Counter::increaseByOneStep()
{
    _current += _step;
    checkForMaximumValue();
}

void Counter::setIncreaseStep(int step)
{
    _step = step;
}

void Counter::resetCounter()
{
    _current = 0;
}

void Counter::setMinimumValue(int min)
{
    _min = min;
}

void Counter::setMaximumValue(int max)
{
    _max = max;
}

void Counter::checkForMaximumValue()
{
    if(_current > 9999)
    {
        _current = 0;
    }
}

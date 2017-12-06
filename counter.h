#ifndef COUNTER_H
#define COUNTER_H


class Counter
{

public:
    Counter();
    Counter(int max);
    Counter(int max, int current);
    Counter(int max, int current, int step);

    void increaseByOneStep();
    void setIncreaseStep(int step);
    void resetCounter();
    void setMinimumValue(int min);
    void setMaximumValue(int max);

private:

    void checkForMaximumValue();

    int _current;
    int _max;
    int _min;
    int _step;
};

#endif // COUNTER_H

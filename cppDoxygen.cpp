#include <iostream>
#include "calculator.h"

int main()
{
    Summator *summ = new Summator();
    summ->setNums(1, 2);

    std::cout << summ->sum();
}

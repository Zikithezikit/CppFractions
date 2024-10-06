#include "FractionsClass.hpp"

int main()
{
    Fractions f1(1, 3);
    Fractions f2(1, 6);
    f1.Print();
    f2.Print();
    (f1 / f2).Print();
    (3 / f1).Print();
    (f1 / 3).Print();
    return 0;
}
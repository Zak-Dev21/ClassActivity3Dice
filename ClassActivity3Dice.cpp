// generates 2 random values between 1 - 6
#include <iostream>

int main()
{
    int minValue = 1;
    int maxValue = 6;

    int firstValue = (rand() % (maxValue – minValue + 1)) + minValue;

    int secondValue = [rand() % (maxValue – minValue + 1)] + minValue;
}

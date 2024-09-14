// generates 2 random values between 1 - 6
#include <iostream>

int main()
{
    long ElapsedSeconds = time(0);

	srand(ElapsedSeconds);
    int minValue = 1;
    int maxValue = 6;

    int firstValue = (rand() % (maxValue - minValue + 1)) + minValue;

    int secondValue = (rand() % (maxValue - minValue + 1)) + minValue;

	std::cout << "First dice value: " << firstValue << std::endl;
	std::cout << "Second dice value: " << secondValue << std::endl;

	return 0;
}

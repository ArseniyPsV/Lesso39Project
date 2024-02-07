#include <cmath>

bool is_prime_number1(int number) {
	for (int i = 2; i < number / 2; i++)
	{
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

bool is_prime_number2(int number) {
	for (int i = 2; i < number / 2; i++)
	{
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

bool is_prime_number3(int number) {
	int num = sqrt(number);

	for (int i = 2; i < num / 2; i++)
	{
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}
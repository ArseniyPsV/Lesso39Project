#include <iostream>
#include <ctime>

using namespace std;

bool is_prime_number1(int);
bool is_prime_number2(int);
bool is_prime_number3(int);

int main() {
	int number = 2147483647;

	long startTime = time(0);
	cout << is_prime_number1(number) << endl;
	long endTime = time(0);
	cout << "first time is " << (endTime - startTime) << endl;

	startTime = time(0);
	cout << is_prime_number2(number) << endl;
	endTime = time(0);
	cout << "second time is " << (endTime - startTime) << endl;

	startTime = time(0);
	cout << is_prime_number3(number) << endl;
	endTime = time(0);
	cout << "third time is " << (endTime - startTime) << endl;

	return 0;
}

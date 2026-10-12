// This program generates the six-digit winning lottery ticket number 


#include <iostream>
#include <string>
#include <random>

using namespace std;
int main()
{
	cout << "LOTTERY TICKET WINNER!" << endl << endl;

	//	Variables:

	const int MIN = 1;
	const int MAX = 9;

	random_device engine;
	uniform_int_distribution<int> randomNumber(MIN, MAX);

	int number1 = randomNumber(engine);
	int number2 = randomnumber(engine);
	int number3 = randomnumber(engine);
	int number4 = randomnumber(engine);
	int number5 = randomnumber(engine);
	int number6 = randomnumber(engine);







}

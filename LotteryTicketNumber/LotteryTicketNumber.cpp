// This program generates the six-digit winning lottery ticket number 


#include <iostream>
#include <string>
#include <random>

using namespace std;
int main()
{
	cout << "\t\tLOTTERY TICKET WINNER!" << endl;

	//	Variables:

	const int MIN = 1;
	const int MAX = 9;

	random_device engine;
	uniform_int_distribution<int> randomNumber(MIN, MAX);

	int number1 = randomNumber(engine);
	int number2 = randomNumber(engine);
	int number3 = randomNumber(engine);
	int number4 = randomNumber(engine);
	int number5 = randomNumber(engine);
	int number6 = randomNumber(engine);

	// Converting numbers to string

	string first = to_string(number1);
	string second = to_string(number2);
	string third = to_string(number3);
	string fourth = to_string(number4);
	string fifth = to_string(number5);
	string sixth = to_string(number6);

	// Combining strings to display

	cout << "\t\tWinning Number: " << first << second << third << fourth << fifth << sixth << endl;

	// Testing purposes and making sure numbers match the order. 
	//cout << first << endl;
	//cout << second << endl;
	//cout << third << endl;
	//cout << fourth << endl;
	//cout << fifth << endl;
	//cout << sixth << endl;


	return 0;



}

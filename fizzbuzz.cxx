#include <iostream>

using namespace std;

int main()
{
	int numOfFizz;
	
	cout << "Enter how many Fizzes you want to Buzz: ";
	cin >> numOfFizz;

	for (int i = 1; i <= numOfFizz; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			cout << "Fizz" << endl;
		else if ((i % 3 != 0) && (i % 5 == 0))
			cout << "Buzz" << endl;
		else if ((i % 3 == 0) && (i % 5 == 0))
			cout << "FizzBuzz" << endl;
		else
			cout << i << endl;
	}
	cout << "Did I fizz your buzz /g/?" << endl;
	return 0;
}

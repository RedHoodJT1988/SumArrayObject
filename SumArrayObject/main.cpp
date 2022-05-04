#include <iostream>
#include <array>
using namespace std;

int sumArray(array<int, 10> myArray);

int main()
{
	array<int, 10> primeArray{ 3, 6, 9, 12, 18, 21, 24, 27, 30, 33 };
	int result = sumArray(primeArray);
	cout << "The result is " << result << endl;
	return 0;
}

int sumArray(array<int, 10> myArray)
{
	int sum = 0;
	for (int item : myArray)
	{
		sum += item;
	}

	return sum;
}
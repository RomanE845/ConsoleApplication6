#include <iostream>
using namespace std;

int posN = 0;
int negN = 0;
float* farr;
int size = nullptr;


float fArray()
{
	
	cin >> size;
	farr = new (nothrow) float[size];
	for (int i = 0; i < size; i++)
	{
		farr[i] = rand() % 201 + (-100);
		
	}
	delete[] farr;
	farr = nullptr;
	return 0;
}

int counting_numbers()
{

	for (int j; j < size; j++)
	{
		if (farr[j] > 0)
			posN++;
		else if (farr[j] < 0)
			negN++;
	}
	return 0;
}

int printArray()
{
	cout << "Array" << farr << endl;
	cout << "Positive" << posN << endl;
	cout << "Negative" << negN << endl;

	return 0;
}
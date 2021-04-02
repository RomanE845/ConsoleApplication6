// task 1(5) user namespace
#include <iostream>
using namespace std;
namespace MySpace
{
	int posN = 0;
	int negN = 0;
	float* farr;
	int szt;
#define cycle for (int i = 0; i < szt; i++)

	float fArray()
	{
		cout << "input size of Array : " << endl;
		cin >> szt;
		farr = new (nothrow) float[szt];
		cycle
		{
			farr[i] = rand() % 201 + (-100);

		}

		return 0;
	}

	int counting_numbers()
	{

		cycle
		{
			if (farr[i] > 0) posN++;
			else if (farr[i] < 0) negN++;
		}
		return 0;
	}

	int printArray()
	{
		cout << "Array : " << endl << endl;
		cycle{ cout << farr[i] << " "; }
		cout << endl << endl << "Positive : " << posN << endl << endl;
		cout << "Negative : " << negN << endl;
		delete[] farr;
		farr = nullptr;
		return 0;
	}
}
//task 3

#include <iostream>
#include <iomanip>
using namespace std;


#define sz 10
#define cycle for (int i = 0; i < sz; i++)
#define SwapINT  int temp = arraySort[r];\
                 arraySort[r] = arraySort[r + 1];\
                 arraySort[r + 1] = temp
bool choiseSort = true;
int bubbleSort() 
{
    // ������ ������
    int arraySort[sz];

    // ��������� ������ � ����������
	cout << "enter 10 numbers of array : "<< endl;
    cycle       // ������ �����
    {
        cout << "[" << i+1 << "] = ";
        cin >> arraySort[i];
    }

    // ������� ������ �� �����
    cout << "[";
    cycle
    {
        cout << setw(4) << arraySort[i];
    }
    cout << " ]";
    cout << endl;

    cout << "select sorting option" \
        << endl << "descending = 0" \
        << endl << "Ascending = 1" \
        << endl << "select =";
        cin >> choiseSort;
    if (choiseSort == false)
    {
        for (int i = 1; i < sz; ++i)        // ���������� ������� �� ��������
        {
            for (int r = 0; r < sz - i; r++)
            {
                if (arraySort[r] < arraySort[r + 1])
                {
                    // ����� �������
                    SwapINT;
                }
            }
        }
    }
    else 
    {
        for (int i = 1; i < sz-1; ++i)        // ���������� ������� �� �����������
        {
            for (int r = 0; r < sz - i; r++)
            {
                if (arraySort[r] > arraySort[r + 1])
                {
                    // ����� �������
                    SwapINT;
                }
            }
        }
    }
    // ������� �� ����� ��������������� ������
    cout << "Sorted array : [";
    cycle
    {
        cout << setw(4) << arraySort[i];
    }
    cout << " ]";
    cout << endl;
   

    return 0;
}
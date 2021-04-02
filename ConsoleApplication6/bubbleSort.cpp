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
    // Создаём массив
    int arraySort[sz];

    // Заполняем массив с клавиатуры
	cout << "enter 10 numbers of array : "<< endl;
    cycle       // макрос цикла
    {
        cout << "[" << i+1 << "] = ";
        cin >> arraySort[i];
    }

    // Выводим массив на экран
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
        for (int i = 1; i < sz; ++i)        // Сортировка массива по убыванию
        {
            for (int r = 0; r < sz - i; r++)
            {
                if (arraySort[r] < arraySort[r + 1])
                {
                    // Обмен местами
                    SwapINT;
                }
            }
        }
    }
    else 
    {
        for (int i = 1; i < sz-1; ++i)        // Сортировка массива по возрастанию
        {
            for (int r = 0; r < sz - i; r++)
            {
                if (arraySort[r] > arraySort[r + 1])
                {
                    // Обмен местами
                    SwapINT;
                }
            }
        }
    }
    // Выводим на экран отсортированный массив
    cout << "Sorted array : [";
    cycle
    {
        cout << setw(4) << arraySort[i];
    }
    cout << " ]";
    cout << endl;
   

    return 0;
}
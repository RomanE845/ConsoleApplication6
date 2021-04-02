// task 2
#include <iostream>
using namespace std;
#define check_condition if ((num >= 0 && num < end_range) ||( num <= 0 && num > end_range)) \
							flag = true; else flag = false
#define printText cout << "is it really in the range : "; \
							if (flag ==1) cout << "True"; \
							else cout << "False"; cout <<endl<<endl
int checking_numbers()
{
	int num, end_range;
	bool flag = true;
	cout << "enter check numbers : ";
	cin >> num;
	cout << "enter end of range number : ";
	cin >> end_range;
	check_condition;			//условие проверки
	printText;					// печать
	return 0;
}

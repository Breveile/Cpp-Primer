#include <iostream>
using namespace std;

int main()
{
	int sum = 0, val = 0;
	cout << "Please enter a set of numbers:" << endl;
	// 自己又遇到文件结束符（ctrl+Z+Enter）或者非整数（如a）时，才会结束输入
	while (cin >> val)
		sum += val;
	cout << "The sum of these numbers is " << sum << endl;

	system("pause");
	return 0;
}
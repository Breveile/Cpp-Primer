#include <iostream>
using namespace std;

int main()
{
	int sum = 0, val = 0;
	cout << "Please enter a set of numbers:" << endl;
	// �Լ��������ļ���������ctrl+Z+Enter�����߷���������a��ʱ���Ż��������
	while (cin >> val)
		sum += val;
	cout << "The sum of these numbers is " << sum << endl;

	system("pause");
	return 0;
}
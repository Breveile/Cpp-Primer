#include <iostream>
using namespace std;

// 用for循环实现练习1.9
//int main()
//{
//	int sum = 0;
//	for (int i = 50; i <= 100; i++)
//		sum += i;
//	cout << "The sum of 50 to 100 inclusive is " << sum << endl;
//
//	system("pause");
//	return 0;
//}

// 用for循环实现练习1.10
//int main()
//{
//	for (int i = 10; i >= 0; i--)
//		cout << i << " ";
//
//	system("pause");
//	return 0;
//}

// 用for循环实现练习1.11
int main()
{
	int v1 = 0, v2 = 0;
	cout << "Please enter two numbers:" << endl;
	cin >> v1 >> v2;
	if (v1 > v2)
	{
		for (int i = v1; i >= v2; i--)
			cout << i << " ";
	}
	else if (v1 < v2)
	{
		for (int j = v1; j <= v2; j++)
			cout << j << " ";
	}
	else
	{
		cout << v1 << endl;
	}

	system("pause");
	return 0;
}
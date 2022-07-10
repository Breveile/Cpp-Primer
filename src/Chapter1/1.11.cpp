#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;

	//简单形式
	//while (v1 <= v2)
	//{
	//	cout << v1 << " ";
	//	++v1;
	//}

	// 改进形式
	if (v1 > v2) {
		while (v1 >= v2)
		{
			cout << v1 << " ";
			--v1;
		}
	}
	else if (v1 < v2) {
		while (v1 <= v2)
		{
			cout << v1 << " ";
			++v1;
		}
	}
	else
	{
		cout << v1 << endl;
	}

	system("pause");
	return 0;

}


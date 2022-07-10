#include <iostream>
using namespace std;

int main()
{
	int currVal = 0, val = 0;
	if(cin >> currVal)
	{
		int cnt = 1;
		// 与上一个程序需要注意的问题一样，当结束输入时，要ctrl+Z+enter
		while (cin >> val)
		{
			if (val == currVal)
				cnt++;
			else
			{
				cout << currVal << " occurs " << cnt << " times " << endl;
				currVal = val;
				cnt = 1;
			}
		}
		cout << currVal << " occurs " << cnt << " times " << endl;
	}

	system("pause");
	return 0;
}
#include <iostream>
#include "Sales_item.h"

using namespace std;

// 与1.17对比 文件结束符到底怎么使用？？？
int main()
{
	Sales_item curbook, book;
	if (cin >> curbook)
	{
		int cnt = 1;
		while (cin >> book)
		{
			if (book.isbn() == curbook.isbn())
				cnt++;
			else
			{
				cout << curbook.isbn() << " occurs " << cnt << " times " << endl;
				curbook = book;
				cnt = 1;
			}
		}
		cout << curbook.isbn() << " occurs " << cnt << " times " << endl;
	}

	system("pause");
	return 0;

}
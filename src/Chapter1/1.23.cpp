#include <iostream>
#include "Sales_item.h"

using namespace std;

// ��1.17�Ա� �ļ�������������ôʹ�ã�����
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
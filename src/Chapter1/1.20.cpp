#include <iostream>
#include "Sales_item.h"
using namespace std;

// 1.20
//int main()
//{
//	Sales_item book;// ����һ��Sales_item ��
//	cin >> book;// ����ISBN�ţ��۳�����������
//	cout << book;// ���ISBN�ţ��۳������������۶��ƽ���ۼ�
//	system("pause");
//	return 0;
//
//}

// 1.21
//int main()
//{
//	Sales_item book1, book2;
//	cin >> book1 >> book2;
//	cout << book1 + book2 << endl;
//	system("pause");
//	return 0;
//}

// 1.22
int main()
{
	Sales_item book, books;
	while (cin >> book)
		books += book;
	cout << books << endl;

	system("pause");
	return 0;
}


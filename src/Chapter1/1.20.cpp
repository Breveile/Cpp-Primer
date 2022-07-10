#include <iostream>
#include "Sales_item.h"
using namespace std;

// 1.20
//int main()
//{
//	Sales_item book;// 声明一个Sales_item 类
//	cin >> book;// 输入ISBN号，售出册数，单价
//	cout << book;// 输出ISBN号，售出册数，总销售额和平均售价
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


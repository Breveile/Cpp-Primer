#include <iostream>
using namespace std;


int main()
{
	struct Sales_data {
		string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
	};

	Sales_data book1, book2;
	double price1, price2;
	cout << "Please enter the information of the books:" << endl;
	cin >> book1.bookNo >> book1.units_sold >> price1;
	cin >> book2.bookNo >> book2.units_sold >> price2;

	if (book1.bookNo == book2.bookNo)
	{
		unsigned totalCnt = book1.units_sold + book2.units_sold;
		double totalRen = book1.units_sold * price1 + book2.units_sold * price2;
		cout << "ISBN:" << book1.bookNo << "  total_Revenue:" << totalRen;
		if (totalCnt != 0)
		{
			cout << "  average_Price:" << totalRen / totalCnt << endl;
		}
		else
		{
			cout << "The sales is none!" << endl;
		}
	}
	else
	{
		cerr << "The data must refer to same ISBN!" << endl;
		return -1;
	}
	
	system("pause");
	return 0;
}
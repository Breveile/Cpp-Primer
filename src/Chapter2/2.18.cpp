#include <iostream>
using namespace std;

int main()
{
	int i = 0,j=1;
	int* p = &i;
	cout << p << endl;
	p = &j;
	cout << p << endl;
	cout << *p << endl;
	*p = 10;
	cout << *p << endl;

	system("pause");
	return 0;
}
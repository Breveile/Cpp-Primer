#include <iostream>
using namespace std;

int main()
{
	//int i = 0,j=1;
	//int* p = &i;
	//cout << p << endl;
	//p = &j;
	//cout << p << endl;
	//cout << *p << endl;
	//*p = 10;
	//cout << *p << endl;

	int i = 42;
	int& r1 = i;
	const int& r2 = i;
	cout << r1 << " " << r2 << endl;
	r1 = 32;
	cout << i<<" "<< r1 << " " << r2 << endl;
	i = 22;
	cout << i << " " << r1 << " " << r2 << endl;




	system("pause");
	return 0;
}
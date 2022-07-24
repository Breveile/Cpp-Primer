#include <iostream>
using namespace std;

int main()
{
	//const int v2 = 0; // v2是一个常变量
	//int v1 = v2;		// 可以将v2赋值给一个普通变量v1
	//int& r1 = v1;		// r1是一个int类型的引用，引用在定义时必须初始化，
	// 且必须和指向的对象类型一致(例外：const int 的引用可以指向int类型的对象,但是反过来不行，
	// 比如此处若是int& r1 = v2;就是错误的，因为v2定义为一个常量，我们不希望v2的值被改变，
	// 如果用一个int引用与v2进行绑定，相当于试图通过r1去改变v2的值)，因此将r1指向v1
	// 这样，r1和v1进行了绑定
	//r1 = v2;			// 将v2的值赋值给r1，此时r1和v1的值都为0
	//cout << r1 << " " << v2 << endl;
	//r1 = 10;
	//cout << r1 << " " << v2 << endl;

	// 此段代码同理，！！！引用就是个别名！！！引用的初始化和赋值具有完全不同的意义！！！
	int v1 = 1;
	int v2 = 2;
	int& r1 = v1;
	cout << r1 << " " << v2 << endl;
	r1 = v2;
	cout << r1 << " " << v2 << endl;

	system("pause");
	return 0;
}



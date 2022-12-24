#include<iostream>
using namespace std;


void Foo(int *pa, int *pb)
{
	int buffer = *pa;
	*pa = *pb;
	*pb = buffer;
}
template <typename T>
T Foo2(T& pa, T& pb)
{
	T buffer = pa;
	pa = pb;
	pb = buffer;
	return 0;
}

void main()
{
	setlocale(LC_ALL, "");
	double a = 20.3;
	double b = 30.2;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
	Foo2(a, b);
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
}
#include <iostream>

using namespace std;
//#define ARITHMETIC
//#define NUMBERS
//#define CHANGE_VAR
//#define SWITCH
//#define PROGRAM
//#define SUM
//#define RECTANGLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARITHMETIC
	int a, b, c;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ������ �����: ";
	cin >> c;
	cout <<"����� �����: " << a + b + c <<endl<<"������������ �����: " << a * b * c <<endl <<"������� �������������� �����: " <<(double)(a + b + c) / 3;
#endif

#ifdef NUMBERS
	int number;
	cout << "������� �����: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "��� ������ �����" << endl;
	}
	else
	{
		cout << "��� �������� �����" << endl;
	}
#endif


#ifdef CHANGE_VAR
	int a = 2;
	int b = 3;

	cout << a << "\t" << b << endl;

	int c = a;
	a = b;
	b = c;
	cout << a << "\t" << b<< endl;
#endif


#ifdef SWITCH
	int a, b, c;
	cout << "������� ������ �����: "; cin >> a;
	cout << "\n������� ������ �����: "; cin >> b;
	cout << "������� 1 ���� ����� ���������� �������, 2 - �������, 3 - ��������, 4 - ���������: ";
	cin >> c;
	switch (c)
	{
	case 1: cout << a << " + " << b <<" = "<< a + b << endl;
		break;
	case 2: cout << a << " - " << b << " = " << a - b << endl;;
		break;
	case 3: cout << a << " * " << b << " = " << a * b << endl;
		break;
	case 4: 
		if (b != 0) 
		{
			cout << a << " / " << b << " = " << (double)a / b << endl;
		}
		else
		{
			cout << "�� ���� ������ ������!"<< endl;
		}
		break;
	default:
		cout << "��� ����� �������!"<< endl;
	}
#endif

#ifdef PROGRAM
	char a;
	int b, c;
	cout << "������� ������, ������� ��������� �������: "; cin >> a;
	cout << "\n������� ���������� ��������, ������� ����� �������: "; cin >> b;
	cout << "������� 1 - ���� ����� ������ ���� �������������� � 2 - ���� ������������: "; cin >> c;
	int count = 0;
	if (c == 1)
	{
		while (count < b)
		{
			cout << a << "\t";
			count++;
		}
	}
	else if(c == 2)
	{
		while (count < b)
		{
			cout << a << endl;
			count++;
		}
	}
	else 
	{
		cout << "����� ���� ������ 1 ��� 2!" << endl;
	}
#endif

#ifdef SUM
	int start, end, sum = 0;
	cout << "������� ������ ����������: "; cin >> start;
	cout << "������� ����� ����������: "; cin >> end;
	do
	{
		if (start % 2 != 0)
		{
			sum = sum+start;
			
		}
		start++;
	} while (end >= start);
	cout << "����� ���� ����� �������� ����� � �������� ���������� �����: " << sum;
#endif

#ifdef RECTANGLE
	int height, width;
	cout << "������� ������ �������������: "; cin >> height;
	cout << "������� ����� �������������: "; cin >> width;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif



	system("pause");
}
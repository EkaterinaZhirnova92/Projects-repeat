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
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	cout <<"Сумма чисел: " << a + b + c <<endl<<"Произведение чисел: " << a * b * c <<endl <<"Среднее арифметическое чисел: " <<(double)(a + b + c) / 3;
#endif

#ifdef NUMBERS
	int number;
	cout << "Введите число: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "Это четное число" << endl;
	}
	else
	{
		cout << "Это нечетное число" << endl;
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
	cout << "Введите первое число: "; cin >> a;
	cout << "\nВведите второе число: "; cin >> b;
	cout << "Введите 1 если числа необходимо сложить, 2 - вычесть, 3 - умножить, 4 - разделить: ";
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
			cout << "На ноль делить нельзя!"<< endl;
		}
		break;
	default:
		cout << "Нет такой команды!"<< endl;
	}
#endif

#ifdef PROGRAM
	char a;
	int b, c;
	cout << "Введите символ, который требуется вывести: "; cin >> a;
	cout << "\nВведите количество символов, которое нужно вывести: "; cin >> b;
	cout << "Нажмите 1 - если линия должна быть горизонтальной и 2 - если вертикальной: "; cin >> c;
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
		cout << "Нужно было ввести 1 или 2!" << endl;
	}
#endif

#ifdef SUM
	int start, end, sum = 0;
	cout << "Введите начало промежутка: "; cin >> start;
	cout << "Введите конец промежутка: "; cin >> end;
	do
	{
		if (start % 2 != 0)
		{
			sum = sum+start;
			
		}
		start++;
	} while (end >= start);
	cout << "Сумма всех целых нечетных чисел в заданном промежутке равна: " << sum;
#endif

#ifdef RECTANGLE
	int height, width;
	cout << "Введите высоту прямогульника: "; cin >> height;
	cout << "Введите длину прямогульника: "; cin >> width;
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
#include <iostream>
#include <ctime>
using namespace std;

//#define PALINDROM
//#define TICKET
//#define FACTORIAL
//#define STEP
//#define ASCII
//#define PIFAGOR
//#define UMN
//#define TRIANGLE
//#define CHESS
#define  ARRAY
void main()
{
	setlocale(LC_ALL, "");

#ifdef PALINDROM
	int number, buffer, reverse=0;
	cout << "������� �����: "; cin >> number;
	buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	if (number == reverse)
	{
		cout << "��� ����� -���������!";
	}
	else
	{
		cout << "��� ����� - �� ���������!";
	}
#endif

#ifdef TICKET
	char a, b, c, d, e, f;
	cout << "������� ����� ������: "; cin >> a >> b >> c >> d >> e >> f;
	cout << endl;
	if (a + b + c == d + e + f)
	{
		cout << "��� ���������� �����" << endl;
	}
	else
	{
		cout << "��� ������������ �����" << endl;
	}
#endif

#ifdef FACTORIAL
	int number, factorial = 1;
	cout << "������� �����: "; cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	cout <<"��������� ����� "<< number << " = "<<  factorial;
#endif

#ifdef STEP
	int number, step;
	cout << "������� �����: "; cin >> number;
	cout << "������� �������: "; cin >> step;
	int result = number;
	for (int i = 1; i < step; i++)
	{
		result *= number;
	}
	cout <<"����� " << number << " � ������� " << step << " = "<< result;
#endif

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{

		std::cout << char(i)<< "\t";
		if (i % 16 == 0) 
		{
			cout << endl;
		}
	}
#endif

#ifdef PIFAGOR
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " + " << j << " = " << i + j << "\t";
		}
		cout << endl;
}
#endif

#ifdef UMN
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE
	int n;
	cout << "������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef CHESS
	int number;
	cout << "������� �����: "; cin >> number;
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			(j + i) % 2 == 0 ? cout << " **** " : cout << " ---- ";
	   }
		cout << endl;
    }

#endif 

#ifdef ARRAY
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	bool val;

	for (int i = 0; i < SIZE; )	
	{
		val = false;
		int newItem = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			
			if (newItem == arr[j])
			{
				val = true;
				break;
			}
			
		}
		if (!val)
		{
			arr[i] = newItem;
			i++;
		}
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}

	}
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << "\t";
	}
	cout << "\n������������ ����� � �������: " << max << endl;
	cout << "����������� �������� � �������: " << min << endl;

#endif
}
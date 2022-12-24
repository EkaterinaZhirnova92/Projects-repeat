#include <iostream>
#include<ctime>
using namespace std;

int Fact( int number)
{
	if (number == 0) return 0;
	if (number == 1) return 1;
	return  number * Fact(number - 1);
}

//#define SORT
//#define DECIMAL
void main()
{
	setlocale(LC_ALL, "");

#ifdef SORT
	const int SIZE = 10;
	int arr[SIZE];


	srand(time(NULL));
	bool isItem;
	int newItem;
	for (int i = 0; i < SIZE;)
	{
		isItem = false;
		newItem = rand() % 100;
		for (int j = 0; j < i; j++)
		{
			if (newItem == arr[j])
			{
				isItem = true;
				break;
			}
		}
		if (!isItem)
		{
			arr[i] = newItem;
			i++;
		}
	}
	cout << "Массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
#endif

#ifdef DECIMAL
	const int SIZE = 32;
	bool arr[SIZE];
	int decimal;
	cout << "Введите число для перевода в двоичную систему: "; cin >> decimal;
	int i = 0;
	while (decimal)
	{
			arr[i] = decimal % 2;
			decimal /= 2;
			i++;
	}
	for (i--; i >= 0; i--)
	{
		cout << arr[i];
		if (i % 4 == 0)
		{
			cout << " ";
		}
	}
#endif

	cout << "Результат: " << Fact(5);

}
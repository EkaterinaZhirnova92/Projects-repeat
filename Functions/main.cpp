#include <iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE);
void PrintArray(int arr[], const int SIZE);
int MaxValue(int arr[], const int SIZE);
void ShiftArrayRight(int arr[], const int SIZE, int shift_right);
void ShiftArrayLeft(int arr[], const int SIZE, int shift_left);

int main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int shift_right, shift_left;
	cout << "Введите количество сдвигов вправо: "; cin >> shift_right;
	cout << "Введите количество сдвигов вправо: "; cin >> shift_left;
	FillArray(arr, SIZE);
	cout << "Массив чисел: ";
	PrintArray(arr, SIZE);
	cout << "Максимальное значение в массиве: " << MaxValue(arr, SIZE) << endl;
	cout << "Сдвинутый вправо массив: ";
	ShiftArrayRight(arr, SIZE, shift_right);
	cout << "\nСдвинутый вправо массив: ";
	ShiftArrayLeft(arr, SIZE, shift_left);
	return 0;
}

void FillArray(int arr[], const int SIZE)
{
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
			}
		}
		if (!isItem)
		{
			arr[i] = newItem;
			i++;
		}
	}
}

void PrintArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int MaxValue(int arr[], const int SIZE)
{
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

void ShiftArrayRight(int arr[], const int SIZE, int shift_right)
{
	for (int i = shift_right; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 0; i < shift_right; i++)
	{
		cout << arr[i] << "\t";
	}
}

void ShiftArrayLeft(int arr[], const int SIZE, int shift_left)
{
	for (int i = shift_left; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 0; i < shift_left; i++)
	{
		cout << arr[i] << "\t";
	}




}
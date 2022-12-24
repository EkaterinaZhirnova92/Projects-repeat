#include <iostream>
#include<ctime>
#include<stdlib.h>
#include<conio.h>
#include<string>
using namespace std;


//#define ARR
//#define DINAMIC_ARR
//#define DINAMIC_ARR_2D
//#define COPY_DINAMIC_ARR
//#define PUSH_ITEM
#define STRING

void FillArray(int* const arr, const int size);
void ShowArray(int* const arr, const int size);
void Push_back(int *&arr,int &size, const int value);
void Pop_back(int*& arr, int& size);
void Foo(char* str);

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARR
	const int ROW = 5;
	const int COL = 6;

	int arr[ROW][COL]{};

	srand(time(NULL));
	for (int i = 0; i < ROW;i++)
	{
		for (int j = 0; j < COL; )
		{
			bool flag = false;
			int newItem = rand() % 100;
			if (newItem == arr[i][j])
			{
				flag = true;
				break;
			}
			if (!flag)
			{
				arr[i][j] = newItem;
				j++;
			}
		}
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif

#ifdef DINAMIC_ARR
	int size = 0;
	cout << "Введите количество элементов в массиве: "; cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}

	delete[] arr;

#endif

#ifdef DINAMIC_ARR_2D
	int rows = 0;
	int cols = 0;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество столбцов: "; cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand()%100;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<< arr[i][j]<< "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
#endif

#ifdef COPY_DINAMIC_ARR
	int size = 0; 
	cout << "Введите количество элементов в массиве: "; cin >> size;
	int* arr_one = new int[size];
	int* arr_two = new int[size];

	cout << "Массив 1: " << endl;
	FillArray(arr_one, size);
	ShowArray(arr_one, size);
	cout << "\nМассив 2: " << endl;
	FillArray(arr_two, size);
	ShowArray(arr_two, size);
	delete[] arr_one;
	arr_one = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr_one[i] = arr_two[i];
	}
	cout << "\nМассив 1: " << endl;
	ShowArray(arr_one, size);
	cout << "\nМассив 2: " << endl;
	ShowArray(arr_two, size);

	delete[]arr_one;
	delete[]arr_two;
#endif

#ifdef PUSH_ITEM
	int size = 0;
	cout << "Введите количество элементов в массиве: "; cin >> size;
	int* arr = new int[size];
	FillArray(arr, size);
	cout << "Исходный массив: " << endl;
	ShowArray(arr, size);
	int value;
	do {
		cout << "\nВведите дополнительный элемент для добавления в массив: "; cin >> value;
		if (value == 123) break;
		if (value == 321)
		{
			Pop_back(arr, size);
			cout << "\nНовый массив: " << endl;
			ShowArray(arr, size);
			cout << "\n=================================================\n";
			cout << "\n\nДля выхода введите 123\n";
			cout << "Для удаления последнего элемента введите 321\n";
		}
		else 
		{
			Push_back(arr, size, value);
			cout << "\nНовый массив: " << endl;
			ShowArray(arr, size);
			cout << "\n=================================================\n";
			cout << "\n\nДля выхода введите 123\n";
			cout << "Для удаления последнего элемента введите 321\n";
		}
	} while (value != 000);
	delete[] arr;

#endif

#ifdef STRING
	char str[] = "Hello";
	Foo(str);

#endif

}

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

};

void ShowArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
};

void Push_back(int *&arr,int &size, const int value)
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i]=arr[i];

	}
	newArr[size] = value;
	size++;
	delete[] arr;
	arr = newArr;
};

void Pop_back(int*& arr, int& size)
{
	size--;
	int* newArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
};
void Foo(char* str)
{
	cout << strlen(str)<< endl;
}
;
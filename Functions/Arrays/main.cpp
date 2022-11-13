#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int  Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << AVG(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)	//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)//Счетчик 'j' перебирает оставшиеся элементы массива.
		{//перебор начинает с элемента, следующего за выбранным
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)//Счетчик 'j' перебирает оставшиеся элементы массива.
		{//перебор начинает с элемента, следующего за выбранным
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double AVG(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double AVG(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

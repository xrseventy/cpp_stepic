//
// Created by alfa on 05.04.2020.
//


//Найдите индексы первого вхождения максимального элемента.
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int m = 0;
	int max = -2147483648;
	int x = 0;
	int y = 0;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j<m; j++)
		{

			if (a[i][j] > max)
			{
				x = i;
				y = j;
				max = a[i][j];
			}
		}
	}

	cout << x << " " << y;
	return 0;
}



///Слишком маленький процент успешных решений у данной задачи, поэтому поясню условие: задача сводится к поиску индекса первого максимального элемента в двумерном массиве, где i - номер строки, j - номер столбца, вот и все.
//
//max=A[0][0] - первый элемент массива
//цикл по i и j
//если A(i,j)>max, то max=A(i,j) и запоминаем индексы i,j максимального элемента: ind_x=i; ind_y=j;
//завершаем цикл по j и i
//Выводим ind_x и ind_y




//Дано нечетное число n, не превосходящее 15. Создайте двумерный
// массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива, средний
// столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение
// звездочки. Выведите полученный массив на экран, разделяя
// элементы массива пробелами.
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int m = 0;
	int max = -2147483648;
	int x = 0;
	int y = 0;

	//считывание
	cin >> n;
	m = n;
	int a[100][100];

	//обработка
	for (int i = 0; i <= n; i++) //строки
	{
		for (int j = 0; j<= m; j++) //стобцы
		{
			a[i][j] = 0;
			if( i == j)
				a[i][j] = 1; //слева направо
			else if (i == (n / 2) + 1) //середина строк
				a[i][j] = 1;
			else if (j == (m / 2) + 1) //середина столбцов
				a[i][j] = 1;
			else if (i + j == n + 1) //справа налево
				a[i][j] = 1;
		}
	}

//вывод
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] == 1)
				cout << "*" << " " ;
			else
				cout << "." << " ";
		}
		cout << endl;
	}
	//cout << x << " " << y;
	return 0;
}

//Дано число n, не превышающее 100. Создайте массив размером
// n×n и заполните его по следующему правилу. На главной диагонали
// должны быть записаны числа 0. На двух диагоналях, прилегающих к
// главной, числа 1. На следующих двух диагоналях числа 2, и т.д.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int m = 0;

	//считывание
	cin >> n;
	m = n;
	int a[100][100];

	//обработка
	for (int i = 0; i <= n; i++) //строки
	{
		for (int j = 0; j <= m; j++) //стобцы
		{
			if (i < j )
				a[i][j] = j - i; //ниже диагонали
			if (i > j)
				a[i][j] = i - j; //выше диагонали
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


//Дан двумерный массив и два числа: i и j. Поменяйте в
// массиве столбцы с номерами i и j

#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int m = 0;
	int num = 0;
	int first = 0;
	int second = 0;


	//считывание
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> num;
			a[i][j] = num;
		}
	}
	cin >> first >> second;
	//обработка
	for (int i = 0; i <= n; i++) //строки
	{
		for (int j = 0; j<= m; j++) //стобцы
		{
			swap(a[i][first], a[i][second]);
		}
	}

	//вывод
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " " ;
		}
		cout << "\n";
	}
	//cout << x << " " << y;
	return 0;
}


#include <iostream>
using namespace std;
int main() {
	int str = 0;
	int row = 0;
	int num = 0;
	int first = 0;
	int second = 0;
	int temp = 0;


	//считывание
	cin >> str >> row;
	int a[100][100];
	for (int i = 0; i <= str; i++)
	{
		for (int j = 0; j <= row; j++)
		{
			cin >> num;
			a[i][j] = num;
		}
	}
	cin >> first >> second;
	//обработка
	if (str < row)
	{
		for (int i = 0; i <= str; i++) //строки
		{
			for (int j = 0; j<= row; j++) //стобцы
			{
				swap(a[i][first], a[i][second]);
			}
		}
	}
	else if (str > row)
	{
		for (int i = 0; i < str; i++) //строки
		{
			for (int j = 0; j < row; j++) //стобцы
			{
				swap(a[i][first], a[i][second]);
			}
		}
	}

	//вывод

	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << a[i][j] << " " ;
		}
		cout << "\n";
	}
	return 0;
}


#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin>>n>>m;
	int arr[n][m];
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	int first, second;
	cin >> first >> second;
	for(int i = 0;i < n;i++)
	{
		int k = arr[i][first];
		arr[i][first] = arr[i][second];
		arr[i][second] = k;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << arr[i][j]<< ' ';
		}
		cout << "\n";
	}
}
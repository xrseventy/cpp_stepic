//
// Created by alfa on 05.04.2020.
//


//Найдите индексы первого вхождения максимального элемента.
#include <iostream>
using namespace std;
int main ()
{
	int n, m, max, ind_x, ind_y;
	cin >> n >> m;
	int arr[n][m];

// чтение
	max = arr[0][0];
	ind_x = 0;
	ind_y = 0;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int i = 0;
	int j = 0;
	for (int i = 0; i <= n; i++) //перебор строк
	{
		for (int j = 0; j <= n; j++) //вывод одной строки
		{
			cout << arr[i][j] << " ";
		}
		cout << endl; //перевод строки после того, как выведены все элементы
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0 ; j <= m; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				ind_x = i;
				ind_y = j;
			}

		}
	}
	cout << ind_x << " " << ind_y << endl;;
	cout << max;
	return 0;
}


///Слишком маленький процент успешных решений у данной задачи, поэтому поясню условие: задача сводится к поиску индекса первого максимального элемента в двумерном массиве, где i - номер строки, j - номер столбца, вот и все.
//
//max=A[0][0] - первый элемент массива
//цикл по i и j
//если A(i,j)>max, то max=A(i,j) и запоминаем индексы i,j максимального элемента: ind_x=i; ind_y=j;
//завершаем цикл по j и i
//Выводим ind_x и ind_y
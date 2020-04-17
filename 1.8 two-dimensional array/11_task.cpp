//
// Created by alfa on 11.04.2020.
//

//По данным числам n и m заполните двумерный массив
// размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
//Формат входных данных
//Вводятся два числа n и m, не превышающие 100.
//Формат выходных данных
//Выведите полученный массив, отводя на вывод
// каждого элемента ровно 4 символа.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, m, count;
	//cin >> n >> m;
	n = 3;
	m = 5;
	int arr[n][m];
	count = 1;

	//считывание
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		cin >> arr[i][j];
	//	}
	//}
	//обработка
	for (int d = 0; d < (m + n - 1); d++) //цикл до кол-ва диaгоналей
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if ((i == d - j) || (j == d - i)) {
					arr[i][j] = count;
					count++;
				}

			}
		}
	}

	//вывод
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
}
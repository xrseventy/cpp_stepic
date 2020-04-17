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


//СЧИТЫВАЕТ И ВЫВОДИТ МАССИВ
#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	m = n;
	int arr[n][m];
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0; j < m; j++)
		{

		}
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

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, m, count, str, k;
//	cin >> n >> m;
//	int arr[n][m];
//    //считывание
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//    //обработка
//    cin >> k;
//    count = 0;
//    str = 0;
//
//
//     if(k > m) //проверка влезет ли кол-во мест в ряд
//    {
//        cout << str;
//        return 0;
//    }
//	for(int i = 0; i < n;i++)
//	{
//        for(int j = 1; j < m; j++)
//		{
//
//           if (arr[i][j] == 0)
//           {
//               if(arr[i][j] == 0 && arr[i][j - 1] == 0)
//                   count++;
//               else
//                   count = 1;
//           }
//
//           if (count >= k)
//           {
//               str = i + 1;
//               //cout << str;
//               break;
//           }
//        }
//        if (count >= k)
//           {
//               str = i + 1;
//               break;
//           }
//    }
//
////вывод
//    (count >= k) ? cout << str : cout << count;
//
//	return 0;
//}



#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	m = n;
	int arr[n][m];
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	int i = 0;
	int j = 0;
	int count_no = 0;
	for(i = 0;i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if (arr[i][j] == arr[j][i])
			{
				//cout << arr[i][j] << "=" << arr[j][i] << "\n";
				//cout << "YES";
			}
			else
			{
				count_no++;
			}
		}

	}

	if (count_no == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}



//Дан квадратный двумерный массив размером n × n
// и число k. Выведите элементы k-й по счету
// диагонали ниже главной диагонали
// (т.е. если k = 1, то нужно вывести элементы
// первой диагонали, лежащей ниже главной,
// если k = 2, то второй диагонали и т.д.).
//
//Значение k может быть отрицательным, например, если k = −1,
// то нужно вывести значение первой диагонали лежащей выше
// главной. Если k = 0, то нужно вывести элементы главной
// диагонали.
//
//Программа получает на вход число n,
// не превосходящие 10, затем массив размером n × n,
// затем число k.
#include <iostream>
using namespace std;
int main() {
	int n, m, k;
	cin >> n;
	m = n;
	int arr[n][m];
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> k;
	int zero_i = 0;
	int zero_j = 0;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if (i - j == k)
				cout << arr[i][j] << " ";
		}
	}
}




//Дан двумерный массив размером n×m
// (n и m не превосходят 1000).
// Симметричный ему относительно
// главной диагонали массив называется
// транспонированным к данному. Он имеет размеры m×n:
// строки исходного массива становятся столбцами
// транспонированного, столбцы исходного массива
// становятся строками транспонированного.
#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[j][i] << ' ';
		}
		cout << "\n";
	}
}


//Дан прямоугольный массив размером n×m. П
// оверните его на 90 градусов по часовой
// стрелке, записав результат
// в новый массив размером m×n.

#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for(int j = n - 1; j >= 0; j--)
		{
			cout << arr[j][i] << ' ';
		}
		cout << "\n";
	}
}




//По данным числам n и m заполните двумерный массив размером n×m числами от
// 1 до n×m “змейкой”, как показано в примере.
//
//Формат входных данных
//Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
	int n, m, num;
	cin >> n >> m;
	int arr[n][m];
	num = 1;
	//считывание
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}

	//обработка
	if (num <= (n * m))
	{
		for(int i = 0; i < n;i++)
		{
			for(int j = 0; j < m; j++)
			{
				arr[i][j] = num;
				num++;
			}
		}
	}

	//вывод
	for(int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for(int j = 0; j < m; j++)
			{
				if (arr[i][j] < 10)
					cout << setw(4) << arr[i][j];
				else if(arr[i][j] >= 10)
					cout << setw(4)  << arr[i][j];
			}
			cout << "\n";
		}
		else if (i % 2 == 1)
		{
			for(int j = m - 1; j >= 0; j--)
			{
				if (arr[i][j] < 10)
					cout << setw(4)  << arr[i][j];
				else if(arr[i][j] >= 10)
					cout << setw(4) << arr[i][j];
			}
			cout << "\n";
		}
	}
}



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
int main()
{
	int n, m, count;
	cin >> n >> m;
	int arr[n][m];
	count = 1;

	//считывание
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	//обработка
	for(int d = 0; d < (m + n - 1); d++) //цикл до кол-ва диагоналей
	{
		for(int i = 0; i < n;i++)
		{
			for(int j = 0; j < m; j++)
			{
				if((i == d - j) || (j == d - i))
				{
					arr[i][j] = count;
					count++;
				}

			}
		}
	}

	//вывод
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
}

//Даны числа n и m. Заполните массив размером n × m
// в шахматном порядке: клетки одного цвета заполнены
// нулями, а другого цвета - заполнены числами
// натурального ряда сверху вниз, слева направо.
// В левом верхнем углу записано число 1.
//Формат входных данных
//Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//Выведите полученный массив, отводя на вывод
// каждого элемента ровно 4 символа.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, m, count;
	cin >> n >> m;
	int arr[n][m];


	//считывание
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m;j++)
		{
			cin >> arr[i][j];
		}
	}
	//обработка
	count = 1;
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(j % 2 == 0 && i % 2 == 0) // для четных строк, начиная с 0
			{
				arr[i][j] = count;
				count++;
			}
			else if (j % 2 == 1 && i % 2 == 1) // для нечетных, начиная с 1
			{
				arr[i][j] = count;
				count++;
			}
			else
				arr[i][j] = 0;

		}
	}
	//вывод
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
}

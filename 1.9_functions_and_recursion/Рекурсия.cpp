//
// Created by alfa on 14.04.2020.
//

//Дано действительное положительное число a и целоe число n.
//
//Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).
//
//Формат входных данных
//Вводится действительное положительное число a и целоe число n.
#include <iostream>
#include <cmath>
using namespace std;
double power (double a, double n)
{
	double t = a;
	int m;
	m = abs(n);
	if (n > 0)
	{
		for (int i = n; i > 1; i--)
		{
			t = a * t;
			//cout << "t= "<< t << "\n";
		}
	}
	if (n == 1)
		return(a);
	else if (n == 0)
		t = 1;

	else if (n < 0)
	{
		return (1 / a) * power(a, ++n);
	}
	return (t);
}


int main() {
	double a, n;
	cin >> a >> n;
	cout << power(a, n);
	return 0;
}


//Возводить в степень можно гораздо быстрее, чем за n умножений!
// Для этого нужно воспользоваться следующими рекуррентными соотношениями:
//an = (a2)n/2  при четном n,
//an = a × an−1 при нечетном n.
//Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.
#include <iostream>
#include <cmath>
using namespace std;

//an = (a2)n/2  при четном n,

//an = a × an−1 при нечетном n.
double power (double a, int n)
{
	if (n == 0)
		return(1);

	if (n % 2 == 0)
	{
		// cout << "четнное a= " << a << "\n";
		//cout << "четнное n= " << n << "\n";
		return (power(a * a, (n / 2)));
	}
	else
	{
		//cout << "нечетнное a= " << a << "\n";
		// cout << "нечетнное n= " << n << "\n";
		return (a * power(a, n - 1));
	}
	return (a);
}

int main()
{
	double a;
	int n;
	cin >> a >> n;
	cout << power(a, n);
	return 0;
}
//знаете, могу: при чётной степени следует
// возвращать квадрат в степени, равной половине аргумента.
//#include <iostream>


//Дана последовательность чисел,
// завершающаяся числом 0. Найдите
// сумму всех этих чисел, не используя цикл.
#include <iostream>
using namespace std;

int rec()
{
	int n;
	cin >> n;
	if (n != 0)
		return(n + rec());

	return (0);
}
int main()
{
	cout << rec();
	return(0);
}
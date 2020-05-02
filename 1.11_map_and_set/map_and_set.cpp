//
// Created by alfa on 01.05.2020.
//
//Дан список целых чисел, который может
// содержать до 100000 чисел. Определите,
// сколько в нем встречается различных чисел.
#include <iostream>
#include <set>

using namespace std;

int main() {
	set <int> s;
	int n;
	cin >> n;
	int x;
	for (int i = 0; i <= n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	cout << s.size();
	return 0;
}


//Во входной строке записана последовательность чисел через пробел.
// Для каждого числа выведите слово YES (в отдельной строке),
// если это число ранее встречалось в последовательности или NO,
// если не встречалось.
#include <iostream>
#include <set>

using namespace std;

int main() {
	multiset <int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
		//if (s.find(x) == s.)
		int cnt = 0;
		for (auto now = s.lower_bound(x); now != s.upper_bound(x); now++) {
			cnt++;
		}
		if (cnt == 1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}



//                  ИЛИ

#include <iostream>
#include <set>

using namespace std;

int main() {
	set <int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		int before = s.size();
		cin >> x;
		s.insert(x);
		int after = s.size();
		if (before < after)
			cout << "NO\n";
		else if (before == after)
			cout << "YES\n";
	}
	return 0;
}


//Даны два списка чисел, которые могут содержать до 100000 чисел каждый.
// Посчитайте, сколько чисел содержится одновременно
// как в первом списке, так и во втором.

//Можно так: закидываем числа списков M и N в один список Z,
// затем выводим сумму M и N минус размер списка Z
#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	int m;

	set <int> n_num;
	// set <int> m_num;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		n_num.insert(x);
	}
	cin >> m;

	for (int i = 0; i < m ; i++)
	{
		int y;
		cin >> y;
		n_num.insert(y);
	}
	cout << (n + m) - n_num.size();
	return 0;
}


//Во время проведения олимпиады каждый из участников
// получил свой идентификационный номер
// – натуральное число.
// Необходимо отсортировать список участников
// олимпиады по количеству набранных ими баллов
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n;
	int id, score;
	vector <pair <int, int>> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> id >> score;
		a[i] = {score, (id * (-1))}; // создание пары значение - номер
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for (auto now : a) {
		cout << (now.second * (-1)) << " " << now.first;
		cout << "\n";
	}
	cout << "\n";
	return 0;
}

//305 90
//101 80
//200 14
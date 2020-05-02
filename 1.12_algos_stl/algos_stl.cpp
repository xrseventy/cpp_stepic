//
// Created by alfa on 02.05.2020.
//
//Первая строка входных данных содержит количество элементов
// в массиве N ≤ 105. Далее идет N целых чисел,
// не превосходящих по абсолютной величине 109.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (auto now : a) {

		cout << now << " ";
	}
	return 0;
}

//В обувном магазине продается обувь разного размера.
// Известно, что одну пару обуви можно надеть на другую,
// если она хотя бы на три размера больше. В магазин пришел покупатель.
// Требуется определить, какое наибольшее количество пар обуви сможет
// предложить ему продавец так, чтобы он смог надеть их все одновременно.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int size,n;
	cin >> size >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i <= n; i++)
	{
		for (auto now : a)
		{
			if (size > now)
				now++;
			else if (now >= (size + 3))
			{
				//cout << now << " ";
				size = now;
				count++;
				break;
			}

		}
	}
	cout << count;
	return 0;
}

//В обувном магазине продается обувь разного размера.
// Известно, что одну пару обуви можно надеть на другую,
// если она хотя бы на три размера больше. В магазин пришел покупатель.
// Требуется определить, какое наибольшее количество пар обуви
// сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int size,n;
	cin >> size >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i <= n; i++)
	{
		for (auto now : a)
		{

			if (now >= size) {
				count++;
				size = now + 3;
			}

		}
	}
	cout << count;
	return 0;
}
//
// Created by alfa on 05.04.2020.
//

#include <iostream>
using namespace std;
int main ()
{
	int n, m;
	cin >> n >> m;
	int mines[102][102];

	for (int i = 0; i <= n + 1; i++)
	{
		for (int j = 0; j <= m + 1; j++)
		{
			mines[i][j] = 0;
		}
	}
// чтение
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> mines[i][j];
		}
	}
	int ans[102][102];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
// координаты соседей (сдвиги)
			int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
			int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
// перебор соседей
			int temp = 0;
			for (int k = 0; k < 8; k++)
				temp += mines[i + dy[k]][j + dx[k]];
			ans[i][j] = temp;
		}
	}
// вывод
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (mines[i][j] == 1) {
				cout << "*";
			} else {
				cout << ans[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}
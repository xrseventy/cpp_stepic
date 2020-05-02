//
// Created by alfa on 01.05.2020.
//
//Переведите символ в верхний регистр.
#include <iostream>
#include <string>
using namespace std;
int main() {

	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
		cout << a ;
	}
	else
		cout << a;
	return 0;
}

//Дана строка, содержащая пробелы. Найдите, сколько в ней слов
// (слово – это последовательность непробельных символов, слова
// разделены одним пробелом, первый и последний символ строки – не пробел)
#include <iostream>
#include <string>
using namespace std;
int main() {

	int n;
	n = 1;
	string s;
	getline(cin, s);
	//cout << s << "\n";
	for (int i = 0; i <= s.size(); i++)
	{
		if(s[i] == ' ')
			n++;
	}
	cout << n;
	return 0;
}
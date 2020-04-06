//
// Created by alfa on 29.03.2020.
//
//По данному целому числу N распечатайте
// все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
#include <iostream>
using namespace std;
int main() {
    int n, start, quadro;
    cin >> n;
    start = 1;
    quadro = 1;
    while (quadro <= n)
    {
        cout << quadro << " ";
        start++;
        quadro = start * start;
    }
    return 0;
}

//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель,
// отличный от 1.
#include <iostream>
using namespace std;
int main() {
    int n, del, min;
    cin >> n;
    del = n;
    while (del != 1)
    {
        if (n % del == 0)
            min = del;
        del--;
    }
    cout << min;

    return 0;
}

//По данному числу N распечатайте все целые степени двойки,
// не превосходящие N, в порядке возрастания.

#include <iostream>
using namespace std;
int main() {
    int n, quadro, start;
    cin >> n;
    start = 1;
    quadro = 1;

    while (quadro <= n)
    {
        cout << quadro << " ";
        quadro = start * 2;
        start *= 2;
    }
    return 0;
}


//Дано натуральное число N. Выведите слово YES,
// если число N является точной степенью двойки, или слово NO в противном случае.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if ( (n & (n - 1)) == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

//Программа получает на вход последовательность целых неотрицательных чисел,
// каждое число записано в отдельной строке.
// Последовательность завершается числом 0, при считывании которого
// программа должна закончить свою работу и вывести количество
// членов последовательности (не считая завершающего числа 0).
//Числа, следующие за числом 0, считывать не нужно.
#include <iostream>
using namespace std;
int main() {

    int n, count;
    cin >> n;
    count = 0;
    while (n > 0)
    {
        cin >> n;
        count++;
    }
    cout << count;
    return 0;
}


//Определите сумму всех элементов последовательности, завершающейся числом 0.
#include <iostream>
using namespace std;
int main() {
    int n, sum;
    cin >> n;
    sum = 0;
    while (n > 0)
    {
        sum += n;
        cin >> n;
    }
    cout << sum;
    return 0;
}

//Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите значение наибольшего элемента последовательности
#include <iostream>
using namespace std;
int main() {
    int n, max;
    max = 0;
    cin >> n;
    while (n > 0)
    {
        if(n > max)
            max = n;
        cin >> n;
    }
    cout << max;
    return 0;
}

//fibonachi

#include <iostream>
using namespace std;
int main() {
    int n, f0, f1, fn, count;
    cin >> n;
    f0 = 0;
    f1 = 1;
    cout << "f0: "<< f0 << "\n";
    cout << "f1: "<< f1 << "\n";
    count = 0;
    while (count <= n)
    {
        fn = (f1) + (f0);
        f0 = f1;
        cout << "f0 = f1: "<< f0 << "\n";
        f1 = fn;
        cout << "f1 = fn: "<< f1 << "\n";
        count++;
        // cout << "fn: "<< fn << " ";
        cout << "num of iter: " << count << "\n";
    }
    cout << fn;
    return 0;
}


//Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите, какое количество элементов этой последовательности,
// равны ее наибольшему элементу.
#include <iostream>
using namespace std;
int main() {
    int n, max, count;
    max = 0;
    count = 0;
    cin >> n;
    while (n > 0)
    {
        if(n > max)
        {
            count = 0;
            max = n;
            count = 1;
        }
        cin >> n;
        if (n == max)
            count++;
    }
    cout << count;
    return 0;
}
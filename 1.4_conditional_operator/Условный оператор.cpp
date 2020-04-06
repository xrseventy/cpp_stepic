//
// Created by alfa on 27.03.2020.
//
//Даны три целых числа. Найдите наибольшее из них
// (программа должна вывести ровно одно целое число).
// Под наибольшим в этой задаче понимается число,
// которое не меньше, чем любое другое.
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a;
    else if (b >= a &&  b >= c)
        cout << b;
    else if (c >= a && c >= b)
        cout << c;
    return 0;
}

//Даны три натуральных числа A, B, C.
// Определите, существует ли треугольник с такими сторонами.
// Если треугольник существует, выведите строку YES,
// иначе выведите строку NO.
//
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c && a + c > b && c + b > a) && a != 0 && b != 0 && c != 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}



//Даны три целых числа. Определите, сколько среди них совпадающих.
// Программа должна вывести одно из чисел:
// 3 (если все совпадают),
// 2 (если два совпадает) или 0 (если все числа различны).

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a == c && b == c)
        cout << "3";
    else if (a == b && a != c && b != c)
        cout << "2";
    else if (a == c && a != b && c != b)
        cout << "2";
    else if (b == c && a != b && c != a)
        cout << "2";
    else
        cout << "0";
    return 0;
}


//Шахматная ладья ходит по горизонтали или вертикали.
// Даны две различные клетки шахматной доски,
// определите, может ли ладья попасть с первой клетки на вторую
// одним ходом.

#include <iostream>
using namespace std;
int main()
{
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (x == x1 || y == y1)
        cout << "YES";
    else
        cout << "NO";
}



//Шахматный король ходит по горизонтали,
// вертикали и диагонали, но только на 1 клетку.
// Даны две различные клетки шахматной доски,
// jпределите, может ли король попасть с первой клетки на вторую
// одним ходом.
#include <iostream>
using namespace std;
int main()
{
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if ((x + 1 == x1 || x - 1 == x1 || x - x1 == 0) && (y + 1 == y1 || y - 1 == y1 || y - y1 == 0))
        cout << "YES";
    else
        cout << "NO";
}


//Шахматный слон ходит по диагонали.
// Даны две различные клетки шахматной доски,
// определите, может ли слон попасть с первой клетки
// на вторую одним ходом.


#include <iostream>
using namespace std;
int main()
{
    int x, y, x1, y1, n, ny;
    cin >> x >> y >> x1 >> y1;
    cout << "x  " << x << " ";
    cout << "y  " << y << "\n";
    cout << "x1 " << x1 << " ";
    cout << "y1 " << y1 << "\n";

    n = x1 - x;
    cout << n << "\n";
    ny = y1 - y;
    cout << ny << "\n";

    if ((x1 - x == y1 - y) || //вверх вправо
        (x1 - x == y - y1) ||  //dybp dghfdj
        (x - x1 == y - y1) || // вниз влево
        (x - x1 == y1 - y))  //вверх влево

        cout << "YES";
    else
        cout << "NO";
}


//Шахматный ферзь ходит по диагонали,
// горизонтали или вертикали.
// Даны две различные клетки шахматной доски,
// определите, может ли ферзь попасть с первой клетки
// на вторую одним ходом.
#include <iostream>
using namespace std;
int main()
{
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;

    if (x == x1 || y == y1)
        cout << "YES";
    else if (( x1 - x == y1 -1) || //up right
             (x1 - x == y - y1) || //down right
             (x - x1 == y - y1) || //down left
             (x - x1 == y1 - y)) // up left
        cout << "YES";
    else
        cout << "NO";
    return 0;
}



//Шахматный конь ходит буквой “Г” — на две клетки по вертикали
// в любом направлении и на одну клетку по горизонтали, или наоборот.
// Даны две различные клетки шахматной доски,
// определите, может ли конь попасть с первой клетки
// на вторую одним ходом.

#include <iostream>
using namespace std;
int main() {
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (y + 2 == y1) //case A
    {
        if (x + 1 == x1)
            cout << "YES";
        else if (x - 1 == x1)
            cout << "YES";
        else
            cout << "NO";
    }

    else if (x + 2 == x1) //case B
    {
        if (y + 1 == y1)
            cout << "YES";
        else if (y - 1 == y1)
            cout << "YES";
        else
            cout << "NO";
    }

    else if (y - 2 == y1) //case C
    {
        if (x + 1 == x1)
            cout << "YES";
        else if (x - 1 == x1)
            cout << "YES";
        else
            cout << "NO";
    }

    else if (x - 2 == x1) //case D
    {
        if (y + 1 == y1)
            cout << "YES";
        else if (y - 1 == y1)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";

    return 0;
}

//Шоколадка имеет вид прямоугольника, разделенного на N×M долек.
//Шоколадку можно один раз разломить по прямой на две части.
// Определите, можно ли таким образом отломить от шоколадки ровно K долек.

#include <iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;

    if (k <= (n * m))
    {
        if (k % n == 0  || k % m == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}
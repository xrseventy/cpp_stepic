//
// Created by alfa on 29.03.2020.
//
.//Дано положительное действительное число X. Выведите его дробную часть.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, x1, ostatok;
    cin >> x;
    x1 = trunc(x);
    ostatok = x - x1;
    cout << ostatok;
    return 0;
}

//Дано положительное действительное число X.
// Выведите его первую цифру после десятичной точки.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, x1, ost, ost1;
    cin >> x;
    x1 = trunc(x);
    ost = x - x1;
    ost1 = trunc(ost * 10);
    cout << ost1;
    return 0;
}


//Даны длины сторон треугольника. Вычислите площадь треугольника.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, s, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
   s = sqrt (p * (p - a) * (p - b) * (p - c))
    cout << s;
    return 0;
}

//Процентная ставка по вкладу составляет P процентов годовых,
// которые прибавляются к сумме вклада в конце года.
// Вклад составляет X рублей Y копеек. Определите размер вклада через год.
#include <iostream><iostream>
#include <cmath>
using namespace std;
int main() {
    int p, rub, kop;
    double final_kop, rub1, kop1;
    cin >> p >> rub >> kop;

    kop += (rub * 100);
    final_kop = ((kop * p) / 100) + kop;
    rub = (final_kop / 100);
    kop = round((final_kop / 100 - rub) * 100);

    cout << rub << " " << kop;
    return 0;
}



//Процентная ставка по вкладу составляет P процентов годовых,
// которые прибавляются к сумме вклада через год.
// Вклад составляет X рублей Y копеек.
// Определите размер вклада через K лет.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int p, rub, kop, year, count_year;
    double final_year, final_kop;
    cin >> p >> rub >> kop >> year;

    kop += (rub * 100);
    final_kop = 0;
    count_year = 1;
    while(count_year <= year)
    {
        count_year++;
        final_kop = (((kop * p) / 100) + kop);
        kop = trunc(final_kop);
        cout << "count " << count_year << "\n";
        cout << "kop " << kop << "\n";
        cout << "final_kop " << final_kop << "\n";
    }
    rub = (final_kop / 100);
    kop = (final_kop / 100 - rub) * 100;


    cout << rub << " " << kop;
    return 0;
}


//vv@Василий_Жигунов, я сам в первом решении юзал целочисленную
// арифметику (%,/), но по чеснаку нужно было решать как вы -
// только с вещественными операторами и функциями.
// Поэтому это для меня возможность решить задачу по другому :).
// Я нашёл в комментариях следующий тест:

//10 65 99 2  -> 79 83, ваша программа выдавала 79 82, поэтому я сосредоточился на выражении для подсчета копеек:

//m = (i / 100 - trunc(i / 100)) * 100;
//В итоге заменил его на:

//m = i - r * 100;
//Общая идея в том что в этом варианте нет деления на 100 п
// ри котором теряется одна копейка. Вы можете задать интересный вопрос,
// почему изначальный вариант работал правильно в остальных случаях.
// Обычно такая потеря точности происходит когда вещественные числа
// или достаточно маленькие или достаточно большые, в этом случае
// число i оказывается  несколько меньше, чем в тесте который идёт в
// условии - отсюда видимо и потеря точности.


//Определите среднее значение всех элементов последовательности,
// завершающейся числом 0.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, i;
    double avg, nums;
    nums = 0;
    i= 0;
    cin >> n;
    while (n != 0)
    {
        nums += n;
        i++;
        cin >> n;
    }
    avg = nums / i;
    cout << setprecision(6) << fixed << avg;
    return 0;
}

//Дана последовательность натуральных чисел x1, x2, ..., xn.
// Стандартным отклонением называется величина
//где
//- среднее значение последовательности.
//Определите стандартное отклонение для данной последовательности
// натуральных чисел, завершающейся числом 0.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    long int n, i;
    double nums, omega, nums2;
    nums = 0;
    i= 0;
    cin >> n;
    while (n != 0)
    {
        nums += n;
        nums2 += pow(n, 2);
        i++;
        cin >> n;
    }
    //cout << nums << "\n";
    //cout << nums2 << "\n";
    nums = pow(nums, 2) / i;
    omega = sqrt((nums2 - nums) / (i - 1));
    cout << setprecision(11) << fixed << omega;
    return 0;
}

//Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x.
// Вычислите значение этого многочлена, воспользовавшись
// схемой Горнера:

#include <iostream>
using namespace std;
int main() {
    int n;
    double x, a, part;
    cin >> n >> x >> part ;
    while(n--)
    {
        cin >> a;
        part = part * x + a;
    }
    cout << part;
    return 0;
}

//Даны действительные коэффициенты a, b, c, при этом a ≠ 0 .
// Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, x, d, x1, x2;
    cin >> a >> b >> c;

    d = pow(b, 2) - 4 * a * c;
    //cout << d;

    if (d > 0)
    {
        x1 = ((b * (-1)) + sqrt(d)) / (2 * a);
        x2 = ((b * (-1)) - sqrt(d)) / (2 * a);
        if (x1 < x2)
            cout << x1 << " " << x2;
        else
            cout << x2 << " " << x1;
    }
    else if (d == 0)
    {
        x = -(b / (2 * a));
        cout << x;
    }
    else
        cout << "";
    return 0;
}
//Даны действительные коэффициенты a, b, c.
// Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, x, d, x1, x2;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "3";
    }
    else if (a == 0 && b == 0 && c != 0)
        cout << "0";
    else if (a == 0 && b != 0)
    {
        x = -c / b;
        cout << "1" << " " << x;
    }
    else
    {
        d = pow(b, 2) - 4 * a * c;

        if (d > 0)
        {
            x1 = ((b * (-1)) + sqrt(d)) / (2 * a);
            x2 = ((b * (-1)) - sqrt(d)) / (2 * a);
            if (x1 < x2)
                cout << "2" << " " << x1 << " " << x2;
            else
                cout << "2" << " " << x2 << " " << x1;
        }
        else if (d == 0)
        {
            x = -(b / (2 * a));
            cout << "1" << " " << x;
        }
        else
            cout << "0";
    }
    return 0;
}
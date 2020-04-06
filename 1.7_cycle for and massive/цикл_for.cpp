//
// Created by alfa on 01.04.2020.
//
//Выведите все элементы массива с четными индексами
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main() {
    int s,n;
    cin >> s;
    vector <int> a;
    //считывание
    for (int i = 0; i <= s - 1; i++)
    {
        int temp;
        cin >> temp;
        if(i % 2 == 0)
            a.push_back(temp);
    }
    //обработка и вывод
    for (int i = 0; i <= a.size(); i++)
    {
        if( i % 2 == 0)
            cout << a[i] << " ";
    }
    return 0;
}

//Дан массив чисел. Выведите все элементы массива,
// которые больше предыдущего элемента .
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s,n;
    cin >> s;
    vector <int> a;
    //считывание
    for (int i = 0; i <= s - 1; i++)
    {
        int temp;
        cin >> temp;
        if(temp % 2 == 0)
            a.push_back(temp);
        // cout << a[i] << " ";
    }
    //обработка и вывод
    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}



#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s,n;
    cin >> s;
    vector <int> a;
    //считывание
    for (int i = 0; i <= s - 1; i++)
    {
        int temp;
        cin >> temp;
        if(temp > 0)
            a.push_back(temp);
        // cout << a[i] << " ";
    }
    //обработка и вывод
    for (int i = 0; i <= a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}





//Дан массив целых чисел. Если в нем есть два соседних элемента
// одного знака, выведите эти числа. Если соседних элементов
// одного знака нет - не выводите ничего. Если таких пар соседей
// несколько - выведите первую пару.
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s,n, temp;
    bool turn = false;
    vector <int> a;
    cin >> s;
    //считывание
    for (int i = 0; i <= s - 1; i++)
    {
        cin >> temp;
        if(temp)
            a.push_back(temp);
    }
    //обработка и вывод
    for (int i = 1; i <= a.size() && !turn; i++)
    {
        if( a[i] > 0 && a[i - 1] > 0)
        {
            cout << min(a[i-1], a[i]) << " " << max(a[i-1], a[i]);
            turn = true;
        }

        else if( a[i] < 0 && a[i - 1] < 0)
        {
            cout << min(a[i-1], a[i]) << " " << max(a[i-1], a[i]);
            turn = true;
        }
        else
            cout << "";
    }
    return 0;
}


//Выведите значение наименьшего из всех положительных элементов
// в массиве. Известно, что в массиве есть хотя бы один положительный
// элемент
#include <iostreafor (int i = 0; i < a.size(); i++)m> //считывание обработка вывод
#include <vector>
using namespace std;
int main() {
    int s,min, temp, i;
    cin >> s;
    vector <int> a;
    //считывание
    for (i = 0; i <= s - 1; i++)
    {
        cin >> temp;
        if(temp > 0)
            a.push_back(temp);
    }
    min = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    cout<< min;

    return 0;
}


//Выведите значение наименьшего нечетного элемента списка,
// а если в спfor (int i = 0; i < a.size(); i++)иске нет нечетных элементов - выведите число 0.
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main() {
    int s, i, min, temp;
    bool turn;
    cin >> s;
    vector <int> a;
    //считывание
    turn = true;
    for (i = 0; i <= s - 1; i++)
    {
        cin >> temp;
        if(temp % 2 != 0)
        {
            a.push_back(temp);
            turn = false;
        }
    }
    if(!turn)
    {
        min = a[0];
        for (int i = 1; i < a.size(); i++)
        {
            if(a[i] < min)
                min = a[i];
        }
        cout << min;
    }
    else
        cout << 0;

    return 0;
}




//Дан список, упорядоченный по неубыванию элементов в нем.
// Определите, сколько в нем различных элементов.
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main() {
    int s, i, temp, count;
    bool turn;
    cin >> s;
    vector <int> a;
    //считывание
    turn = true;
    count = 0;
    for (i = 0; i <= s - 1; i++)
    {
        cin >> temp;
        if(temp || temp == 0)
        {
            a.push_back(temp);
            //turn = false;

        }

    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != a[i - 1])
            count++;
        cout << a[i] << " ";

    }
    cout << "\n";
    cout << count;

    return 0;
}



//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.)
// . Если элементов нечетное число, то последний элемент остается
// на своем месте.
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main() {
    int s, i, temp;
    cin >> s;
    vector <int> a;
    for (i = 0; i <= (s - 1); i++)
    {
        cin >> temp;
        if(temp || temp == 0)
        {
            a.push_back(temp);
        }

    }
    if ( s == 1)
        cout << a[0];
    else if (s % 2 == 0)
        for ( int i = 1; i <= a.size(); i++)
        {
            cout << a[i] << " "<< a[i - 1] << " ";
            i++;
        }
    else if (s % 2 == 1)
    {
        for ( int i = 1; i <= ((s / 2) + 1); i+=2)
            cout << a[i] << " "<< a[i - 1] << " ";
        cout << a[s - 1];
    }

    return 0;
}


#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s, i, temp;
    cin >> s;
    vector <int> a;
    //считали
    for (i = 0; i <= (s - 1); i++)
    {
        cin >> temp;
        if(temp || temp == 0)
        {
            a.push_back(temp);
        }
    }
    //обработка
    if ( s == 1)
        cout << a[0];
    else if (s % 2 == 0)
        for ( int i = 1; i <= a.size(); i += 2)
        {
            swap(a[i-1], a[i]);
            cout << a[i -1] << " " << a[i] << " ";
        }
    else if (s % 2 == 1)
    {
        for ( int i = 1; i <= ((s / 2) + 1); i += 2)
        {
            swap(a[i-1], a[i]);
            cout << a[i -1] << " " << a[i] << " ";
        }
        cout << a[s - 1];
    }
    //вывод
    return 0;
}




#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s, i, temp, temp2;
    cin >> s;
    vector <int> a;
    //считали

    for (i = 0; i <= s; i += 2)
    {
        //cout << "s start: "<< s << "\n";

        if(s > 1)
        {
            //cout << "s cycle: "<< s << "\n";
            cin >> temp;
            //cout << "what read temp "<< temp << "\n";
            cin >> temp2;
            //cout << "what read temp2 "<< temp2 << "\n";

            //cout << "["<< temp2 << "]" << " \n";
            cout << temp2 << " ";

            //cout << "["<< temp << "]" << " \n";
            cout << temp << " ";
            s = s - 2;

            //cout << "s -2 = "<< s << "\n";
        }
        //cout << "s перед s = 1:  "<< s << "\n";
        if (s == 1)
        {
            cin >> temp;
            //cout << "["<< temp << "]"<< " ";
            cout << temp << " ";
            s--;

        }
        //cout << "----===== i =====---- "<< i << "\n";
    }

    //вывод
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int b;
    cin >> b;
    vector <int> a;
    while(cin >> n)
    {
        a.push_back(n);
    }

    int i = 0;
    while(i < (a.size()-1))
    {
        swap(a[i], a[i+1]);
        cout << a[i] << " " << a[i+1] << " ";
        i += 2;
    }
    if (b % 2 != 0) cout << a[b-1];
    return 0;
}


#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s, i, temp, temp2, t;
    cin >> s;
    vector <int> a;
    //считали
    t = s;
    for (i = 0; i <= t; i += 2)
    {
        //cout << "s start: "<< s << "\n";

        if(s > 1)
        {
            //cout << "s cycle: "<< s << "\n";
            cin >> temp;
            //cout << "what read temp "<< temp << "\n";
            cin >> temp2;
            //cout << "what read temp2 "<< temp2 << "\n";

            //cout << "["<< temp2 << "]" << " \n";
            cout << temp2 << " ";

            //cout << "["<< temp << "]" << " \n";
            cout << temp << " ";
            s = s - 2;

            //cout << "s -2 = "<< s << "\n";
        }
        // cout << "s перед s = 1:  "<< s << "\n";
        if (s == 1)
        {
            cin >> temp;
            //cout << "["<< temp << "]"<< " ";
            cout << temp << " ";
            s--;

        }
        // cout << "----===== i =====---- "<< i << "\n";
    }

    //вывод
    return 0;
}


//Циклически сдвиньте элементы списка вправо (A[0] переходит
// на место A[1], A[1] на место A[2], ...,
// последний элемент переходит на место A[0]).
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s, i, temp, start;
    cin >> s;
    vector <int> a;

    //считывание
    start = 0;;
    a.push_back(start);
    for (i = 0; i <= s - 1; i++)
    {
        cin >> temp;
        if(temp || temp == 0)
        {
            a.push_back(temp);
        }
    }
    //обработка и вывод
    a[0] = a[s];
    cout << a[0] << " ";
    for (int i = 1; i < a.size() - 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}



//Дан массив чисел. Посчитайте, сколько в нем пар элементов,
// равных друг другу. Считается, что любые два элемента,
// равные друг другу образуют одну пару, которую необходимо
// посчитать.
#include <iostream> //считывание обработка вывод
#include <vector>
using namespace std;
int main()
{
    int s, i, count, temp, check, count_global;
    cin >> s;
    vector <int> a;
    count = 0;
    //считывание
    for (i = 0; i <= s - 1; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < a.size() - 1; i++)
    {
        //cout << "      a[i] = " << a[i] << "\n";
        for (int j = (i + 1); j < a.size(); j++)
        {
            //cout << "a[j] = " << a[j] << "\n";
            if(a[i] == a[j])
            {
                count++;
                //cout << "count = " << count << "\n";
            }
        }
    }
    cout << count;
    return 0;
}
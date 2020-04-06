//
// Created by alfa on 29.03.2020.
//

#include <iostream>
using namespace std;
int main() {
    int n, f0, f1, fn, count;
    cin >> n;
    f0 = 0; //first two (f0 and f1) number from fibonachi number we must to keep in memory.
    f1 = 1;
    //cout << "f0: "<< f0 << "\n";
    //cout << "f1: "<< f1 << "\n";
    count = 2; //поскольку мы типо уже расчитали два числа из последовательности, то соотвественно мы должны это учесть в итерациях и начть со 2
    while (count <= n)
    {

        fn = (f1) + (f0); //фибоначи это число равное сумме двух предыдущих за ним чисел
        f0 = f1; //передвигаемся по памяти и с каждой итерацией сдвигаем полученное значение в последнее и предпоследнее число
        //cout << "f0 = f1: "<< f0 << "\n";
        f1 = fn;
        //cout << "f1 = fn: "<< f1 << "\n";
        //cout << "fn: "<< fn << "\n";
        // cout << "num of iter: " << count << "\n";
        count++;
    }
    cout << fn;
    return 0;
}



//отправлено
#include <iostream>
using namespace std;
//#include <iostream>
//using namespace std;
//int main() {
//  int n, f0, f1, fn, count;
//  cin >> n;
//  f0 = 0;
//  f1 = 1;
//  count = 2;
//  if (n == 1)
//      fn = 1;
//  else
//  {
//  while (count <= n)
//  {
//      fn = (f1) + (f0);
//      f0 = f1;
//      f1 = fn;
//      count++;
//  }
//  }
//  cout << fn;
//  return 0;
//}



//Последовательность Фибоначчи определяется так:

//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

//Дано натуральное число A. Определите, каким по счету числом Фибоначчи
// оно является, то есть выведите такое число N, что F(N) = A.
// Если А не является числом Фибоначчи, выведите число -1.


#include <iostream>
using namespace std;


int main()
{
    unsigned long int f0, f1, count, a;
    //unsigned long int count_fib, f0_fib, f1_fib;
    cin >> a;
    f0 = 0;
    f1 = 1;
    count = 0;

    while(f0 < a)
    {
        count++;
        f1 = f0 + f1;
        f0 = f1 - f0;

    }

    //f0_fib = 0;
    // f1_fib = 1;
    //count_fib = 0;

    //  while ((count_fib <= count) && (f0_fib <= a))
    //  {
    //      count_fib++;
    //      f1_fib = f0_fib + f1_fib;
    //      f0_fib = f1_fib - f0_fib;
    //  }

    //cout << "f0:    "<< f0 << " ";
    //cout << "count:     " << count << "\n";
    //cout << "f0_fib "<< f0_fib << " ";
    //cout << "count_fib: " << count_fib << "\n";
    //cout << "a num " << a;
    if(f0 > a)
        cout << "-1";
    else
        cout << count;

    return 0;
}



//send

#include <iostream>
using namespace std;

int main()
{
    unsigned long int f0, f1, count, a;
    cin >> a;
    f0 = 0;
    f1 = 1;
    count = 0;

    while(f0 < a)
    {
        count++;
        f1 = f0 + f1;
        f0 = f1 - f0;

    }
    if(f0 > a)
        cout << "-1";
    else
        cout << count;

    return 0;
}
//
// Created by alfa on 27.03.2020.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c,  desk, sum, a2, b2, c2;
    cin >> a >> b >> c;
    a2 = (a / 2) + (a % 2);
    b2 = (b / 2) + (b % 2) ;
    c2 = (c / 2) + (c % 2);
    sum = (a2 + b2 + c2);
    cout << sum;
    return 0;
}
//
// Created by alfa on 27.03.2020.
//

#inlclude <iostream>
using namespace std;
int main() {
    int rub, kop, rub1, kop1, allkop, n, sum;
    cin >> rub >> kop >> n;
    allkop = (rub * 100) + kop;
    sum = (allkop * n);
    rub1 = sum / 100;
    kop1 = sum % 100;
    cout  << rub1 << " " << kop1;
    return 0;
}
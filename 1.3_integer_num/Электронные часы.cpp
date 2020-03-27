//
// Created by alfa on 27.03.2020.
//

#include <iostream>
using namespace std;
int main() {
    int time, hour, min, min1, sec, sec1;
    cin >> time;
    hour = time / 3600 % 24;
    min = (time - (hour * 3600)) / 60 % 60 / 10;
    min1 = (time - (hour * 3600)) / 60 % 60 % 10;
    sec = (time - (hour * 3600) - (min * 60)) % 60 / 10;
    sec1 = (time - (hour * 3600) - (min * 60)) % 60 % 10;
    cout << hour << ":" << min << min1 << ":" << sec << sec1;
    return 0;
}
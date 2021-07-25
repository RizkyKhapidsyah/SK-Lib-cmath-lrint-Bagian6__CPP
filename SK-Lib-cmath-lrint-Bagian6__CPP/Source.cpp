#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

using namespace std;

/*
    Source by Programis
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int x = 15;
    long int hasil;

    // setting rounding direction to DOWNWARD
    fesetround(FE_DOWNWARD);
    hasil = lrint(x);
    cout << "Rounding downward (" << x << ") = " << hasil << endl;
    _getch();
    return 0;
}

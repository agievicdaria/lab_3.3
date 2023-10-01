// lab-3.3.cpp
// Агієвич Дар'я 
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x; // вхідний аргумент   
    double R; // вхідний параметр
    double y; // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if(x <= -6 * R) {
        y = 0;
    }
    else {
        if(x > -6 * R && x <= -6) {
            y = -sqrt(pow(R, 2) - pow(x, 2) - 12 * x - 36);
        }
        else{
            if(x > -6 && x <= -R) {
                y = (R * R + R * x) / (-R + 6);
            }
            else{
                if(x > -R && x <= 0) {
                    y = sqrt(R * R - x * x);
                }
                else {
                    if(x > 0 && x <= 3) {
                        y = R - (R * x / 3.0);
                    }
                    else {
                        y = (R * x - 3 * R) / 6.0;
                    }
                }
            }
        }
    }

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
#include <iostream>

long double myabs(long double f) {
    return (f < 0 ? -f : f);
}

long double mysqrt(long double num) {
    if (num == 0) return num;
    long double x = 1.0;
    while (myabs(x * x - num) >= 1E-9) {
        x = ((num / x) + x) / 2.0;
    }
    return x;
}

long double a, b, c;

void first() {
    long double D = b * b - 4 * a * c;
    if (D < 0) {
        std::cout << "Пустое множество\n";
    } else {
        long double t1, t2;
        t1 = (-b + mysqrt(D)) / (2 * a);
        t2 = (-b - mysqrt(D)) / (2 * a);
        if (t1 >= 0) {
            if (t1 == 0) {
                std::cout << 0 << " ";
            } else {
                std::cout << "x = " << mysqrt(t1) << "; " << "x = " << -mysqrt(t1) << " ";
            }
        }
        if (t2 > 0) {
            std::cout << "x = " <<  mysqrt(t2) << "; " << "x = " << -mysqrt(t2);
        }

        if (t1 < 0 && t2 < 0) {
            std::cout << "Пустое множество\n";
        }
    }
}

void second() {
    long double D = b * b - 4 * a * (c - 2 * a);
    if (D < 0) {
        std::cout << "Пустое множество\n";
    } 
    else {
        long double t1, t2;
        t1 = (-b + mysqrt(D)) / (2 * a);
        t2 = (-b - mysqrt(D)) / (2 * a);
        long double D1 = t1 * t1 - 4;
        if (D1 >= 0) {
            long double t11, t12;
            t11 = (t1 + mysqrt(D1)) / 2;
            t12 = (t1 - mysqrt(D1)) / 2;
            if (t11 == t12) {
                std::cout << "x = " <<  t11 << " ";
            } 
            else {
                std::cout << "x = " <<  t11 << "; " << "x = " << t12 << " ";
            }
        }
        long double D2 = t2 * t2 - 4;
        if (D2 >= 0) {
            long double t21, t22;
            t21 = (t2 + mysqrt(D2)) / 2;
            t22 = (t2 - mysqrt(D2)) / 2;

            if (t21 == t22) {
                std::cout << "x = " << t21 << " ";
            } 
            else {
                std::cout << "x = " << t21 << "; " << "x = " << t22 << "\n ";
            }
        }
    }
}

int main() {

    std::cout << "Введите a, b, c:\n";
    std::cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
        std::cout << "x - любое\n";
    }
    else if ((a == 0 && b == 0 && c != 0) || (a == 0 && b != 0 && c == 0)) {
        std::cout << "x = 0\n";
    }
    else if (a != 0 && b != 0 && c != 0) {
        second();
    }
    else if (a == 0 && b != 0 && c != 0) {
        std::cout << "x = 0; ";
        long double D = c * c / (b * b) - 4;
        if (D < 0) {
            std::cout << "Пустое множество\n";
        } 
        else  {
            long double t1, t2;
            t1 = (-c + mysqrt(D)) / 2;
            t2 = (-c - mysqrt(D)) / 2;  
             if (t1 == t2) {
                    std::cout << "x = " <<  t1 << " ";
                } else {
                    std::cout << "x = " <<  t1 << "; " << "x = " << t2 << "\n";
                }
        }
    }
    else if (b == 0 && a != 0 && c != 0) {
        b = c;
        c = a;
        first();
    }   
    else std::cout << "Пустое множество\n"; 
    return 0;
}
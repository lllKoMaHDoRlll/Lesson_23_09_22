#include <iostream>
using namespace std;


int ex1() {

    int a, s = 0;

    cin >> a;

    while (a != 0) {
        if (a % 5 != 0) {
            s += a;
        }

        cin >> a;
    }


    cout << s << endl;

    return 0;
}

int ex2() {

    int a, m;

    cin >> a;

    m = a;

    while (a != 0) {
        m = m > a ? m : a;

        cin >> a;
    }


    cout << m << endl;

    return 0;
}

int ex3() {

    int a, s = 0;

    cin >> a;

    while (a != 0) {
        if (a % 2 == 0) {
            s += a;
        }

        cin >> a;
    }


    cout << s << endl;

    return 0;
}

int ex4() {

    int a, n = 0;
    float s = 0;

    cin >> a;

    while (a != 0) {
        s += a;
        n++;

        cin >> a;
    }


    cout << s / n << endl;

    return 0;
}

int ex5() {

    int a, s = 0, b;

    cin >> a >> b;

    while (b != 0) {
        if (a % 3 == 0 and b < 0) {
            s++;
        }

        a = b;
        cin >> b;
    }


    cout << s << endl;

    return 0;
}

int ex6() {

    int a, s = 0, b;

    cin >> a >> b;

    while (b != 0) {
        if (a < 0 and b > 0) {
            s++;
        }

        a = b;
        cin >> b;
    }


    cout << s << endl;

    return 0;
}

int ex7() {

    int a, s = 0, b;
    bool f = true;
    int t;


    cin >> a >> b;

    if (a > 0) { t = 1; }
    else { t = -1; }

    while (b != 0 and f) {
        if (b * t > 0) {
            f = false;
        }
        t *= -1;
        

        a = b;
        cin >> b;
    }


    cout << f << endl;

    return 0;
}

//homework

int ex8() {

    int a;
    int s = 0;

    cin >> a;

    while (a != 0) {
        if (100 > abs(a) and 9 < abs(a) and a < 0) {
            s += a * a;
        }

        cin >> a;
    }

    if (s != 0) {
        cout << s << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}

int ex9() {

    int a, m = 111;

    cin >> a;

    while (a != 0) {
        if (a % 2 == 0) {
            if (m % 2 == 1) {
                m = a;
            }
            else {
                m = m < a ? m : a;
            }
        }

        cin >> a;
    }


    cout << m << endl;

    return 0;
}

int ex10() {

    int a, n = 0;

    cin >> a;

    while (a != 0) {
        if (a % 10 > (a / 10) % 10) {
            n++;
        }

        cin >> a;
    }


    cout << n << endl;

    return 0;
}

int ex11() {

    int a;
    float s = 0;

    cin >> a;

    while (a != 0) {
        if ((a % 10 == 2) or (a % 100 == 13)) {
            s += a * a;
        }

        cin >> a;
    }


    cout << s << endl;

    return 0;
}

int ex12() {

    int a, n = 0;

    cin >> a;

    while (a != 0) {
        if ((-20 <= a) and (a <= 35)) {
            n++;
        }

        cin >> a;
    }


    cout << n << endl;

    return 0;
}




int main()
{
    int f = 1;

    while (f != 0) {

        ex7();

        cout << "type 1 to start again ";
        cin >> f;
    }
}

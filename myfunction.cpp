#include <bits/stdc++.h>
using namespace std;

// 1. Arithmetic Operations
int mistyadd(int x, int y) { return x + y; }
int mistysub(int x, int y) { return x - y; }
int mistymul(int x, int y) { return x * y; }
int mistydiv(int x, int y) { return (y == 0) ? INT_MAX : x / y; }

// 2. Power Functions
int mistysqr(int x) { return x * x; }
int mistycube(int x) { return x * x * x; }
double mistysqrt(int x) { return (x >= 0) ? sqrt(x) : -1; }
double mistycrt(int x) { return cbrt(x); }

// 3. Trigonometric (input radians)
double mistysin(double x) { return sin(x); }
double mistycos(double x) { return cos(x); }
double mistytan(double x) { return tan(x); }
double mistycosec(double x) { return (sin(x) == 0) ? INT_MAX : 1 / sin(x); }
double mistysec(double x) { return (cos(x) == 0) ? INT_MAX : 1 / cos(x); }
double mistycot(double x) { return (tan(x) == 0) ? INT_MAX : 1 / tan(x); }

// 4. Rounding
int mistyfloor(double x) { return floor(x); }
int mistyceiling(double x) { return ceil(x); }
int mistyround(double x) { return round(x); }

// 5. Factorial
int mistyfacto(int x) {
    if (x < 0) return -1;
    int fact = 1;
    for (int i = 1; i <= x; i++) fact *= i;
    return fact;
}

// 6. Min, Max
int mistymin(int x, int y) { return (x < y) ? x : y; }
int mistymax(int x, int y) { return (x > y) ? x : y; }

// 7. GCD and LCM
int mistycd(int x, int y) {
    while (y != 0) {
        int t = y; y = x % y; x = t;
    }
    return x;
}
int mistycm(int x, int y) {
    if (x == 0 || y == 0) return 0;
    return abs(x * y) / mistycd(x, y);
}

// 8. Equality and Absolute
bool mistyequal(int x, int y) { return x == y; }
int mistyabs(int x) { return abs(x); }

// 9. Logarithm (natural)
double mistylog(double x) { return (x <= 0) ? -1 : log(x); }

// Total functions: 25

// Helper to show menu
void showMenu() {
    cout << "Choose function by number:\n";
    cout << "1: Add\n2: Subtract\n3: Multiply\n4: Divide\n";
    cout << "5: Square\n6: Cube\n7: Square Root\n8: Cube Root\n";
    cout << "9: Sine\n10: Cosine\n11: Tangent\n12: Cosecant\n13: Secant\n14: Cotangent\n";
    cout << "15: Floor\n16: Ceiling\n17: Round\n";
    cout << "18: Factorial\n19: Min\n20: Max\n";
    cout << "21: GCD\n22: LCM\n23: Equal Check\n24: Absolute\n25: Logarithm\n";
    cout << "0: Exit\n";
}

int main() {
    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 0) break;

        double res = 0;
        int a, b;
        double d;

        switch (choice) {
        case 1:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistyadd(a, b);
            break;
        case 2:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistysub(a, b);
            break;
        case 3:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistymul(a, b);
            break;
        case 4:
            cout << "Enter two integers: ";
            cin >> a >> b;
            if (b == 0) {
                cout << "Division by zero error.\n";
                continue;
            }
            res = mistydiv(a, b);
            break;
        case 5:
            cout << "Enter an integer: ";
            cin >> a;
            res = mistysqr(a);
            break;
        case 6:
            cout << "Enter an integer: ";
            cin >> a;
            res = mistycube(a);
            break;
        case 7:
            cout << "Enter an integer: ";
            cin >> a;
            if (a < 0) {
                cout << "Square root undefined for negative numbers.\n";
                continue;
            }
            res = mistysqrt(a);
            break;
        case 8:
            cout << "Enter an integer: ";
            cin >> a;
            res = mistycrt(a);
            break;
        case 9:
            cout << "Enter angle in radians (double): ";
            cin >> d;
            res = mistysin(d);
            break;
        case 10:
            cout << "Enter angle in radians (double): ";
            cin >> d;
            res = mistycos(d);
            break;
        case 11:
            cout << "Enter angle in radians (double): ";
            cin >> d;
            res = mistytan(d);
            break;
        case 12:
            cout << "Enter angle in radians (double): ";
            cin >> d;
            if (sin(d) == 0) {
                cout << "Cosecant undefined.\n";
                continue;
            }
            res = mistycosec(d);
            break;
        case 13:
            cout << "Enter angle in radians (double): ";
            cin >> d;
            if (cos(d) == 0) {
                cout << "Secant undefined.\n";
                continue;
            }
            res = mistysec(d);
            break;
        case 14:
            cout << "Enter angle in radians (double): ";
            cin >> d;
            if (tan(d) == 0) {
                cout << "Cotangent undefined.\n";
                continue;
            }
            res = mistycot(d);
            break;
        case 15:
            cout << "Enter a number (double): ";
            cin >> d;
            res = mistyfloor(d);
            break;
        case 16:
            cout << "Enter a number (double): ";
            cin >> d;
            res = mistyceiling(d);
            break;
        case 17:
            cout << "Enter a number (double): ";
            cin >> d;
            res = mistyround(d);
            break;
        case 18:
            cout << "Enter an integer: ";
            cin >> a;
            if (a < 0) {
                cout << "Factorial undefined for negative numbers.\n";
                continue;
            }
            res = mistyfacto(a);
            break;
        case 19:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistymin(a, b);
            break;
        case 20:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistymax(a, b);
            break;
        case 21:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistycd(a, b);
            break;
        case 22:
            cout << "Enter two integers: ";
            cin >> a >> b;
            res = mistycm(a, b);
            break;
        case 23:
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Are equal? " << (mistyequal(a, b) ? "Yes" : "No") << endl;
            continue;
        case 24:
            cout << "Enter an integer: ";
            cin >> a;
            res = mistyabs(a);
            break;
        case 25:
            cout << "Enter a positive number: ";
            cin >> d;
            if (d <= 0) {
                cout << "Log undefined for zero or negative.\n";
                continue;
            }
            res = mistylog(d);
            break;
        default:
            cout << "Invalid choice!\n";
            continue;
        }

        cout << "Result: " << res << "\n\n";

    } while (true);

    cout << "Program exited.\n";
    return 0;
}

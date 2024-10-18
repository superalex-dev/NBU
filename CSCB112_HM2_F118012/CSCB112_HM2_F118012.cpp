// Важно! Откоментирайте задачата, която искате да се извика и съответно изпълни в main метода.
// Например ако искате да изпълните задача 3, закоментирайте всички останали задачи, освен 3-тата.
// Също escape-овете се използват за нов ред, за да се подобри четимостта на изхода.

#include <iostream>
#include <cmath>

using namespace std;

const double M_PI = 3.14159265358979323846;

void task1() {
    int integer;
    char character;
    bool boolean;
    float floating;
    double double_num;

    cout << "Enter an integer (int): ";
    cin >> integer;

    cout << "Enter a char (char): ";
    cin >> character;

    cout << "Enter a boolean (0 or 1) (bool): ";
    cin >> boolean;

    cout << "Enter a float number: ";
    cin >> floating;

    cout << "Enter a double number (double): ";
    cin >> double_num;

    cout << "Task 1 Results:\n";
    cout << "int: " << integer << "\nchar: " << character << "\nbool: " << boolean << "\nfloat: " << floating << "\ndouble: " << double_num << "\n";
}

void task2() {
    int a, b;
    cout << "\nTask 2 - Enter two integers for mathematical operations:\n";
    cin >> a >> b;

    cout << "Task 2 Results:\n";
    cout << "a + b = " << a + b << "\na - b = " << a - b << "\na * b = " << a * b << "\na / b = " << a / b << "\na % b = " << a % b << "\n";
}

void task3() {
    int x;
    cout << "\nTask 3 - Enter an integer for compound assignments:\n";
    cin >> x;

    x += 5;
    cout << "x += 5: " << x << "\n";
    x -= 2;
    cout << "x -= 2: " << x << "\n";
    x *= 3;
    cout << "x *= 3: " << x << "\n";
    x /= 2;
    cout << "x /= 2: " << x << "\n";
    x %= 3;
    cout << "x %= 3: " << x << "\n";
}

void task4() {
    int a, b;
    cout << "\nTask 4 - Enter two integers to swap using bitwise operations:\n";
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "Task 4 Results: a = " << a << ", b = " << b << "\n";
}

void task5() {
    cout << "\nTask 5 - Bitwise operations are used to manipulate bits directly.\n";
    cout << "They are useful in low-level programming, optimization, and handling flags or masks.\n";
    cout << "Common bitwise operators include AND (&), OR (|), XOR (^), NOT (~), and bit shifts (<<, >>).\n";
}

void task6() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Task 6 - Enter the coordinates of the triangle's vertices:\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double centroidX = (x1 + x2 + x3) / 3;
    double centroidY = (y1 + y2 + y3) / 3;

    cout << "Task 6 Results: Centroid coordinates are (" << centroidX << ", " << centroidY << ")\n";
}

void task7() {
    double x, y;

    cout << "Task 7 - Enter the coordinates of the point T(x, y):\n";
    cin >> x >> y;

    double dist1 = min(abs(x), abs(x - 1));
    double dist2 = min(abs(y), abs(y - 1));
    cout << "Task 7 - distance 1: Distance from point T to square sides: " << dist1 << ", " << dist2 << "\n";

    dist1 = min(abs(x - 1), abs(x + 1));
    dist2 = min(abs(y - 1), abs(y + 1));
    cout << "Task 7 - distance 2: Distance from point T to square sides: " << dist1 << ", " << dist2 << "\n";
}

void task8() {
    double x, y;

    cout << "Task 8 - Enter the coordinates of the point T(x, y):\n";
    cin >> x >> y;

    double dist1 = abs(y);
    double dist2 = abs(x);
    double dist3 = abs(x + y - 1) / sqrt(2);
    cout << "Task 8 - distance 1: Distance to sides of triangle: " << dist1 << ", " << dist2 << ", " << dist3 << "\n";

    dist1 = abs(y);
    dist2 = abs(x - 1);
    dist3 = abs(x - y) / sqrt(2);
    cout << "Task 8 - distance 2: Distance to sides of triangle: " << dist1 << ", " << dist2 << ", " << dist3 << "\n";

    dist1 = abs(y);
    dist2 = abs(x - 1) / sqrt(2);
    dist3 = abs(x + 1);
    cout << "Task 8 - distance 3: Distance to sides of triangle: " << dist1 << ", " << dist2 << ", " << dist3 << "\n";
}

void task9() {
    double A, B, C, R;

    cout << "Task 9 - Enter the angles (in degrees) of the triangle and the radius of the circumcircle:\n";
    cin >> A >> B >> C >> R;

    A = A * M_PI / 180.0;
    B = B * M_PI / 180.0;
    C = C * M_PI / 180.0;

    double area = (R * R / 2) * (sin(A) * sin(B) * sin(C));

    cout << "Task 9 Results: Area of the triangle is: " << area << "\n";
}

void task10() {
    double m1 = 600, m2 = 800, p1 = 56, p2 = 35;
    double p_mix = (m1 * p1 + m2 * p2) / (m1 + m2);
    cout << "Task 10: Percentage of the mixture is " << p_mix << "%\n";
}

void task11() {
    unsigned int x, y;
    int i, j;
    cout << "\nTask 11 - Enter two integers x and y: ";
    cin >> x >> y;
    cout << "Enter bit positions i and j: ";
    cin >> i >> j;

    bool bit_x = (x >> i) & 1;
    bool bit_y = (y >> j) & 1;

    cout << "Task 11: Bits at positions " << i << " and " << j << " are " << ((bit_x == bit_y) ? "equal" : "not equal") << "\n";
}

void task12() {
    unsigned int num;
    int i, j;
    cout << "\nTask 12 - Enter an unsigned integer and bit positions i and j: ";
    cin >> num >> i >> j;

    if (((num >> i) & 1) != ((num >> j) & 1)) {
        num ^= (1 << i);
        num ^= (1 << j);
    }

    cout << "Task 12: Result after swapping bits: " << num << "\n";
}

void task13() {
    double a, b, c;
    cout << "\nTask 13 - Enter values for a, b, and c: ";
    cin >> a >> b >> c;

    double expr1 = min(a + b + c, a * b * c) + 1.5;
    double expr2 = max({a * a - pow(b, 3) + c, a - 4.5 * b, 1.5 * a + 3.5 * b - 8 * c}) - 7.5;

    cout << "Task 13 - first expression: Result of the expression is: " << expr1 << "\n";
    cout << "Task 13 - second expression: Result of the expression is: " << expr2 << "\n";
}

void task14() {
    int a, b;
    cout << "\nTask 14 - Enter two different integers a and b: ";
    cin >> a >> b;

    a = (a < b) * a * 3 + (a > b) * a / 5;
    b = (b < a) * b * 3 + (b > a) * b / 5;

    cout << "Task 14: Result: a = " << a << ", b = " << b << "\n";
}

void task15() {
    double a, b, c;
    cout << "\nTask 15 - Enter three numbers a, b, and c: ";
    cin >> a >> b >> c;

    a = ((a <= b) & (b <= c)) * abs(a) + !((a <= b) & (b <= c)) * a * 2;
    b = ((a <= b) & (b <= c)) * abs(b) + !((a <= b) & (b <= c)) * b * 2;
    c = ((a <= b) & (b <= c)) * abs(c) + !((a <= b) & (b <= c)) * c * 2;

    cout << "Task 15: Result: a = " << a << ", b = " << b << ", c = " << c << "\n";
}

int main() {
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    // task7();
    // task8();
    // task9();
    // task10();
    // task11();
    // task12();
    // task13();
    // task14();
    // task15();

    return 0;
}
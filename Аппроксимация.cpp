#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 5;
    double x[n];
    double y[n];
    cout << "������� �������� X: \n";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    cout << "������� �������� �� �: \n";
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    double sx = 0, sy = 0, sxy = 0, sxx = 0;
    for (int i = 0; i < n; i++) {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sxx += x[i] * x[i];
    }
    cout << "����� x: " << sx << endl << "����� y: " << sy << endl << "����� x*y: " << sxy << endl << "����� x^2: " << sxx << "\n";
    double a = (n * sxy - sx * sy) / (n * sxx - sx * sx);
    double b = (sy - a * sx) / n;
    cout << "\n" << "���������: " << "\n" << "y = " << a << " * x + " << b << endl;
}
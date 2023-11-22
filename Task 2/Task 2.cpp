#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Значення i
    double i = 3;

    //Координати вершин трикутника 
    double Ax = 0;
    double Ay = 0;
    double Bx = i;
    double By = i- 1;
    double Cx = -i;
    double Cy = i+ 1;

    //Середини сторін
    double P1x = (Ax + Bx) / 2;
    double P1y = (Ay + By) / 2;
    double P2x = (Bx + Cx) / 2;
    double P2y = (By + Cy) / 2;

    //Косінус кута між бісект. та BA
    double cos_alpha = (Ax * Bx + Ay * By - P1x * P2x + P1y * P2y) / (std::sqrt(Ax * Ax + Ay * Ay) * std::sqrt(Bx * Bx + By * By));

    //Радіус вписаного кола
    double r = sqrt(pow (Ax, 2) + pow(Ay, 2)) * cos_alpha / 2;

    //Результат
    cout << "bisector: " << P1x << ", " << P1y << " -> " << P2x << ", " << P2y << std::endl;
    cout << "Inradius:" << r << std::endl;

    return 0;
}
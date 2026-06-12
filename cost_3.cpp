#include <iostream>
using namespace std;

int main() {
    float Pencil, Pen, Eraser;
    cout << "Enter the cost of Pencil : ";
    cin >> Pencil;
    cout << "Enter the cost of Pen : ";
    cin >> Pen;
    cout << "Enter the cost of Eraser : ";
    cin >> Eraser;

    float Total_cost = Pencil + Pen + Eraser;
    cout << "Total cost of Pencil, Pen and Eraser: " << Total_cost << endl;
    float Total_cost_with_GST = Total_cost + (Total_cost * 18 / 100);
    cout << "Total cost (with 18% GST): " << Total_cost_with_GST << endl;

    return 0;
}

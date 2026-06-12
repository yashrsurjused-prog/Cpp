#include <iostream>
using namespace std;

int main() {
    int P, R, T;
    cout << "Enter the principal amount : "; 
    cin >> P;
    cout << "Enter the Rate amount : "; 
    cin >> P;
    cout << "Enter the Time amount : "; 
    cin >> T;

    float SI = (P * R * T) / 100;
    cout << "Simple Interest is : " << SI << endl;

    return 0;
}

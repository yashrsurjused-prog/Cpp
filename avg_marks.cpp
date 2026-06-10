#include <iostream>
using namespace std;

int main() {
    float eng;
    float sci;
    float math;

    cout<<"Enter English marks : ";
    cin>>eng;

    cout<<"Enter Maths marks : ";
    cin>>math;

    cout<<"Enter Science marks : ";
    cin>>sci;

    float avg = (eng + sci + math) / 3;
    cout<<"Average marks : "<<avg<<endl;
    return 0;


}

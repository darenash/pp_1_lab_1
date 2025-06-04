#include <iostream>
using namespace std;
int main() {
    int w;
    float h, bmi;
    cin>>w>>h;
    bmi = w / (h * h);

    cout<<"Your BMI is"<<" "<<bmi;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    float x=0.1,x_3,y;
    cout << left << setw(12) << "x" << left << setw(12) << "x/3" << left << setw(12) << "x/3*3" << left << setw(12) << "x==y" << endl;
    for(int i=0;i<10;i++){ // forの条件でint以外使わないが鉄則
        x_3 = x/3;
        y = x/3*3;
        cout << setw(12) << x << setw(12) << x_3 << setw(12) << y << setw(12) << ((x==y)?"OK":"BAD") << endl;
        x+=0.1;
    }
    return 0;
}
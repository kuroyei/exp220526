#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int factorial(int x){
    int res=1;
    for(int i=1;i<=x;i++){
        res*=i;
    }
    return res;
}

int main(void){
    double eL = 0, eR = 0;
    int x = -20, n = 50;
    for(int i=1;i<=n;i++){
        eL+=pow(x,i-1)/factorial(x-1);
    }
    cout << "e^(-20) (from Left) = " << eL << endl;
    for(int i=n;i>=1;i--){
        eR+=pow(x,i-1)/factorial(x-1);
    }
    cout << "e^(-20) (from Right) = " << eL << endl;

    return 0;
}
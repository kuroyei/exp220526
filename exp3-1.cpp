#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(void){
    cout << "# float" << endl;
    
    float f1=sqrt(20000001), f2=sqrt(20000000), fres1;
    fres1 = f1 - f2;
    cout << "sqrt(20000001) - sqrt(20000000) = " << fres1 << endl;
    
    float f3=123456789, f4=0.0000001, fres2;
    fres2 = (f3+f4)-f3;
    cout << "(123456789 + 0.0000001) - 123456789 = " << fres2 << endl;

    cout << endl;
    cout << "# double" << endl;
    
    double d1=sqrt(20000001), d2=sqrt(20000000), dres1;
    dres1 = d1 - d2;
    cout << "sqrt(20000001) - sqrt(20000000) = " << dres1 << endl;
    
    double d3=123456789, d4=0.0000001, dres2;
    dres2 = (d3+d4)-d3;
    cout << "(123456789 + 0.0000001) - 123456789 = " << dres2 << endl;
    
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    cout << "# float" << endl;
    float xf = 0, yf = 0;
    for(int i=0;i<10000;i++){
        xf+=0.25;
        yf+=0.3;
    }
    cout << left << setw(24) << "(+=0.25 for 10000 times)" << "= " << xf << endl;
    cout << left << setw(24) << "(+=0.3 for 10000 times)" << "= " << yf << endl;
    float xfm = 0.25*10000, yfm = 0.3*10000;
    cout << left << setw(24) << "0.25*10000" << "= " << xfm << endl;
    cout << left << setw(24) << "0.3*10000" << "= " << xfm << endl;
    cout << "(+=0.25 for 10000 times) == 0.25*10000 \tis " << ((xf==xfm)?"True":"False") << endl;
    cout << "(+=0.3 for 10000 times) == 0.3*10000 \tis " << ((yf==yfm)?"True":"False") << endl;

    cout << endl;
    cout << "#double" << endl;
    double xd = 0, yd = 0;
    for(int i=0;i<10000;i++){
        xd+=0.25;
        yd+=0.3;
    }
    cout << left << setw(24) << "(+=0.25 for 10000 times)" << "= " << xd << endl;
    cout << left << setw(24) << "(+=0.3 for 10000 times)" << "= " << yd << endl;
    double xdm = 0.25*10000, ydm = 0.3*10000;
    cout << left << setw(24) << "0.25*10000" << "= " << xdm << endl;
    cout << left << setw(24) << "0.3*10000" << "= " << ydm << endl;
    cout << "(+=0.25 for 10000 times) == 0.25*10000 \tis " << ((xd==xdm)?"True":"False") << endl;
    cout << "(+=0.3 for 10000 times) == 0.3*10000 \tis " << ((yd==ydm)?"True":"False") << endl;


    return 0;
}
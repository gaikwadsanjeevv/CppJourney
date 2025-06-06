#include <iostream>
using namespace std;


struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    Rectangle *p5;  

    cout << "Size of int*      : " << sizeof(p1) << " bytes" << endl;
    cout << "Size of char*     : " << sizeof(p2) << " bytes" << endl;
    cout << "Size of float*    : " << sizeof(p3) << " bytes" << endl;
    cout << "Size of double*   : " << sizeof(p4) << " bytes" << endl;
    cout << "Size of Rectangle*: " << sizeof(p5) << " bytes" << endl;

    return 0;
}

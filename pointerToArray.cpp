#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};  // use '=' instead of '-'
    int *p;
    p = A;  // correct: don't use &A

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;  // accessing elements via pointer like an array

    return 0;
}

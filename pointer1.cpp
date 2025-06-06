

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    
    cout << a<<endl;
    printf("using pointer %d ",*p);
    std::cout<<endl<<"Hello World";

    return 0;
}

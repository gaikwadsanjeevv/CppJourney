#include<iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Enter number get set sum of first n natural numbers: ";
   cin >> n;
   int sum = n * (n + 1) / 2;
   cout << sum << endl;
}

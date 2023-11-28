#include <iostream>
using namespace std;

int power(int x, unsigned int n)
{
    if (n == 0)
        return 1;    
    int temp = power(x, n / 2);    
    if (n % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main()
{
    int x;
    cout << "Enter value of x: ";
    cin >> x;
    
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    cout << "ANSWER: " <<power(x, n);
    return 0;
}

#include <iostream>
// run this program by using input by user for prime number using recurrsion
using namespace std;
int prime(int n)
{
    int p;
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else if (p <= n / 2)
    {
        return 1;
    }
    else
    {
        return (n, p + 1);
    }
}
int main()
{
    int a, b;
    cout << "Enter number \n";
    cin >> a;
    b=prime(a);
    cout<<"b";
}
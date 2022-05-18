#include <iostream>

using namespace std;
int prime(int n, int index)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else if (n % index == 0)
    {
        return 0;
    }
    else if (index <= n / 2)
    {
        return 1;
    }
    else
    {
        return prime(n, index + 1);
    }
}
int main()
{
    int a;
    cout << "Enter number \n";
    cin >> a;
    if (prime(a, 2) == 1)
    {
        cout << a << " is a prime number \n";
    }
    else
    {
        cout << a << " is not a  prime number";
    }
}
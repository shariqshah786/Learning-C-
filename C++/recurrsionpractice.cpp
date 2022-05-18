#include<iostream>
using namespace std;
int Prime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return Prime(i+1,num);
    }
}
int main()
{
    int num;
    cout<<"Enter your Number:";
    cin>>num;

    if(Prime(2,num)==0)
        cout<<"It is a Prime Number.";
    else
        cout<<"It is not a Prime Number.";
}
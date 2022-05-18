#include <iostream>

using namespace std;
int main()
{
    int a[5], i,j,sum ;
    cout << "Enter five numbers \n";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for(i=0 ;i<5-1;i++){
        for(j=i+1; j<5; j++){
            if(a[j]<a[i]){
                int sum =a[j];
                a[j]=a[i];
                a[i]=sum;
            }
        }
    }
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<" ";
}
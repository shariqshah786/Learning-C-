#include <iostream>

using namespace std;
int main () {
     int a[5] , sum;
     cout<<"Enter Five numbers\n";
     for (int i=0 ; i<5; i++){
         cin>>a[i];
     }
     for (int i=0 ; i<5; i++){
         
         sum = a[i]+a[i];

     }
cout<<"Arrays of all list numbers are =  "<<sum;


}
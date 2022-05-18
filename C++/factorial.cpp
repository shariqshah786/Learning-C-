#include <iostream>

using namespace std;
  int main () {
    int n ,  fact=1;
 cout<<"Enter number for factorail\n";
 cin>>n;
    for (int i =1; i<=n;i++){
      fact = fact *i;
    }  
    cout<<"Your  factorail is  "<<fact;

    
}
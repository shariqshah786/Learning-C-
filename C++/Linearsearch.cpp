#include <iostream>

using namespace std;
int main (int arr,char** argv) {
    int a[10] ,i,n ,f=0;
 cout<<"Enter five numbers\n";
 for (i=0;i<10;i++){
     cin>>a[i];
 }
 cout<<"Enter a number which you want to search\n";
 cin>>n;
  for(i=0;i<10;i++){
      if (n==a[i]){
          cout<<"The number is availble at Index "<< i ;
          f=1;
        break;
        
      }
  }

  if (f==0){
      cout<<"Number is not available";
  }


     return 0;
}
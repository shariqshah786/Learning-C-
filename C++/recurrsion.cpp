#include <bits/stdc++.h>
using namespace std;
int checkPrime(int num1, int index){
   if(num1<2){
      return 0;
   }
   if (num1 == 2 || num1==3){
      return 1;
   }
   if (num1 % index == 0){
      return 0;
   }
   if (index <= num1/2){
      return 1;
   }
   int result=checkPrime(num1, index+1);

   return (result);
}
int main(){
   int Num;
   cout<<"Enter number \n";
   cin>>Num;
   if (checkPrime(Num,2)==1){
      cout <<Num<<" is a Prime number !";
   }
   else{
      cout <<Num<<" is non Prime!";
   }

   return 0;
}

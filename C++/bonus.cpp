#include <iostream>

using namespace std;
int main () {
int sal , bonus;
 cout<<"ENTER YOUR SALARY \n";
 cin>>sal;

 if (sal < 10000){
     bonus= sal *5/100;
     sal = bonus +sal;
    cout<<"YOUR SALARY WITH BONUS IS = "<< sal;
 }
  else if (sal>=10000 && sal <20000){
     bonus= sal *7/100;
     sal = bonus +sal;
    cout<<"YOUR SALARY WITH BONUS IS = "<< sal;
 }
  else if (sal >= 20000){
     bonus= sal *8/100;
     sal = bonus +sal;
    cout<<"YOUR SALARY WITH BONUS IS = "<< sal;
 }

}
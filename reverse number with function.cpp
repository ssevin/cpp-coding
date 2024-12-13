#include <iostream>

using namespace std;
int reversed(int number)
{
int remainer , new_number=0;

while(number>0){
 remainer = number % 10 ;
 new_number = (new_number*10)+ remainer;
 number = number / 10;
}
}


int main(){
int number;

cout<< "Enter a number:" << endl;
cin>> number;

cout << "reverse number is: "<< reversed(number)<< endl;

return 0;
}



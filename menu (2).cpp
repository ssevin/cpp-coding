
#include <iostream>

using namespace std;
int main () {

float number1 , number2 , result ;
int choice;

cout << "Please choose one of them." << endl;
cout << "1. sum" << endl;
cout << "2. sub" << endl;
cout << "3. mul" << endl ;
cout << "4. div" << endl ;
cout << "5. Exit" << endl ;
cin >> choice ;

while (choice >5){
    cout << "Please Enter a number between 1-5." << endl;
break;
}
while (choice ==5){
    cout << "Exit from program." << endl;
break ;
}
while (choice <5){
cout << "Please Enter 2 numbers." << endl;
cin >> number1 >> number2 ;
break;
}

switch(choice){
case 1 :
result = number1 + number2 ;
cout<< "Result is:" << result << endl;
break ;

case 2:
result = number1 - number2 ;
cout << "Result is:" << result << endl;
break;

case 3:
result = number1 * number2 ;
cout << "Result is:" << result << endl;
break;

case 4:
result = number1 / number2 ;
cout << "Result is:" << result << endl;
break;
}




return 0 ;
}










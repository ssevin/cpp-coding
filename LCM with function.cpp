#include <iostream>
using namespace std;


int GCD(int x, int y) {
while (y != 0) {
int a = y;
y = x % y;
x = a;
}
return x;
}


int LCM(int a, int b) {
return (a / GCD(a, b)) * b;
}

int main() {
int num1, num2;

cout << "Enter 2 numbers:" << endl;
cin >> num1 >> num2;

int result = LCM(num1, num2);
cout << "result is: " << result << endl;

return 0;
}


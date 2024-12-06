
#include <iostream>

using namespace std;
int main () {

    int n;

    cout<<"enter a number: ";
    cin>>n;

    if(n == 2 || n == 3)
    {
        cout<<n<<" is a prime number";
        return 0;
    }
    else if(n <= 1)
    {
        cout<<"prime numbers in this range is not defined";
        return 0;
    }
    else
        for(int i = 2; i <= n/2; i++)
            if(n % i == 0){
                cout<<n<<" is not a prime number";
                return 0;}
    cout<<n<<" is a prime number";

    return 0;
}














#include <iostream>

using namespace std;
int main () {

int i,x,max;

cout<< "Please Enter 5 numbers:" << endl ;
cin >> x ;
max = x ;
for(i=2 ; i<=5 ; i++)
{
    cin>>x;
    if(x>max)
        max = x ;

}
   cout<< "maximum number is:" << max ;



return 0 ;

}











#include <iostream>
// حداکثر تعداد اعداد وارد شده 50 تا می تواند باشد
#define SIZE 50
using namespace std;

//تابع بازگشتی یافتن بزرگترین نمره
int higgest(float high[SIZE] , int size){
// در ابتدا اولین نمره وارد شده را بزرگترین در نظر میگیریم
     float max = high[0] ;
// در اینجا تمام اعداد وارد شده توسط کاربر بررسی می شوند
     for(int i=1 ; i<size ; i++){
        if(high[i] > max){
            max = high[i] ;
        }
     }
     return max ;
}
// تایع بازگشتی یافتن کوچکترین نمره
int lowest(float high[SIZE] , int size){
     float min = high[0] ;
     for(int i=1 ; i<size ; i++){
        if(high[i] < min){
            min = high[i] ;
        }
     }
     return min ;
}
//تابع بازگشتی میانگین نمرات
float average(float avg[SIZE] , int size){
    float sum = 0 ;
    for(int i=0 ; i<size ; i++){
        sum = sum + avg[i];
}
        return sum / size ;
}
//تابع بررسی پاس شدن یا نشدن نمرات
void pass(float passing[SIZE] , int size){
     bool found = false ;
     for(int i=0 ; i<size ; ++i){
        if(passing[i]<50){
            cout << passing[i] <<  " is not passing grades :(" << endl;

            found = true ;
        }
     }
       if(!found){
        cout << "grades are passing grades :)" << endl;
       }
}
//تابع مرتب سازی نمرات به صورت نزولی با استفاده از روش مرتب سازی حبابی
void bubble_sort(float arr[SIZE] , int size){
     for(int i=0 ; i<size-1 ; i++){
        for(int j=0 ;j<size-i-1 ; j++){
        //مقایسه اعداد برای تعویض آن ها
            if(arr[j]<arr[j+1]){
                int temp = arr[j] ;
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
     }
}
//تابع بازگشتی بافتن نمره خاص توسط کاربر
bool search_score(float search[SIZE] , int size , float target){
     for(int i=0 ; i<size ; i++){
        if(search[i]==target){
            return true ;
        }
     }
            return false ;
}

int main(){

int choice , count , count1 , target ;
float scores[SIZE] , add[SIZE]  ;

cout << "please enter the numbers of scores: " ;
cin >> count ;
cout << "enter " << count << " scores: " << endl;
     for(int i=0 ; i<count ; i++){
        cin >> scores[i] ;
}
        cout << endl;
//-----------------------------------------------------------
//منوی انتخاب کاربر
cout << "1- add scores : " << endl;
cout << "2- show all scores : " << endl;
cout << "3- highest score : " << endl;
cout << "4- lowest score : " << endl;
cout << "5- avrage scores : " << endl;
cout << "6- acceptance check (the minimum passing score is 50) : " << endl;
cout << "7- exit : " << endl;
cout << "8- sort scores : " << endl;
cout << "9- search for a specific score : " << endl;
cout << endl;
cin>> choice ;
//قبول نکردن عدد وارد شده خارج از اعداد 1 تا 9
while(choice > 9 || choice < 1){
    cout << "please enter a number from 1-9 :" ;
break ;
}
//در صورتی که کاربر عدد 7 را وارد کند از برنامه خارج می شود
while(choice == 7){
    cout << "Exit from program !!! " << endl;
break;
}

//-----------------------------------------------------------
switch(choice){

case 1 :
cout << "enter the number of scores you want to add: " ;
//دربافت اعداد اضافی از کاربر
cin >> count1 ;
for(int i=0 ; i <count1 ; i++){
    cin >> add[i];
}
//نمایش همه اعداد بعد از اضافه کردن اعداد دیگر
for(int i=0 ; i<count1 ; i++){
    cout << add[i] << endl ;
}
//-----------------------------------------------------------
case 2 :

cout << endl;
//بررسی تمام اعداد وارد شده و نمایش آن ها
for(int i=0 ; i<count ; i++){

    cout << scores[i] << endl ;
}
break;
//-----------------------------------------------------------
case 3 :
//قراخوانی تابع بافتن بزرگترین عدد
higgest(scores , count );

cout << "highest score is: " << higgest(scores , count) << endl;

break ;
//-----------------------------------------------------------

case 4 :
//فراخوانی تابع بافتن کوچکترین عدد
lowest(scores , count) ;

cout << "lowest score is: " << lowest(scores , count) << endl;

break;
//-----------------------------------------------------------

case 5 :
//فراخوانی تابع میانگین اعداد
average(scores , count) ;

cout << "average of scores is: " << average(scores , count) << endl;

break;
//-----------------------------------------------------------

case 6 :
//فراخوانی تابع بررسی پاس شدن با نشدن نمرات
pass(scores,count);


break;
//-----------------------------------------------------------

case 7 :
//خروج از برنامه
break;

//-----------------------------------------------------------

case 8 :
//فراخوانی تابع مرتب سازی اعداد
bubble_sort(scores , count);

cout << "sorted numbers (highest to lowest) :" << endl;
for(int i=0 ; i<count ; i++){
    cout << scores[i] << endl;
}
break;
//-----------------------------------------------------------
case 9:


cout << "enter the grade you want : " ;
cin >> target ;
//جستجوی نمره خواسته شده
    if(search_score(scores , count , target)){
       //نمره پیدا شد
        cout << target << " found" << endl;
    }else{
       //نمره پیدا نشد
        cout << target << " not found !!!" << endl;

}

break;
//-----------------------------------------------------------
}

return 0 ;
}



















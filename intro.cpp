#include<iostream>
using namespace std;
int main()
{
    int num = 5;

    cout<<num<<endl;

    //address of operator denotes ---> &
    cout<<"Adress of num is "<<&num<<endl;

    int *ptr = &num;

    cout<<"Adress is : "<<ptr<<endl; //adress of num '0x61ff08'
    cout<<"Value is : "<<*ptr<<endl; // value which is stored in num '5'
    
    double d = 4.3;
    double *p2 = &d;
    
     cout<<"Adress is : "<<p2<<endl; 
    cout<<"Value is : "<<*p2<<endl;

    cout<<"size of integer is " <<sizeof(num)<<endl;
    cout<<"size of pointer is " <<sizeof(ptr)<<endl;
    cout<<"size of pointer is " <<sizeof(p2)<<endl;

    return 0;
}
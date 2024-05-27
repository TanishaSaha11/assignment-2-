#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a three digit number:";
    cin>>num;
    int dig1,dig2,dig3,flag;
    dig1=num/100;
    flag=num%100;
    dig2=flag/10;
    dig3=num%10;
    cout<<dig1+dig2+dig3<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 5 digit number:";
    cin>>num;
    //(num/10000>0&&num/10000<9)?flag=1:flag=0;
    int dig1,dig2,dup;
    dig1=num/10000;
    dup=num%100;
    dig2=dup/10;
    cout<<dig1+dig2<<endl;
    

    return 0;
}
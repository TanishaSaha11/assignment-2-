#include<iostream>
using namespace std;
int main(){
    int total_students,no_of_boys,no_of_girls;
    cout<<"Enter total number of students:";
    cin>>total_students;
    //no_of_boys=25;
    //no_of_girls=total_students-no_of_boys;
    float percentage=0.8;
    cout<<"80% students recieved Grade A"<<endl;
    int A_Grade_students=0.8*total_students;
    int A_Grade_boys=17;
    cout<<"Girls having A Grade :"<<A_Grade_students-A_Grade_boys<<endl;

  
    return 0;
}
/*encapsulation(info hiding) wrapping up data member and function
data members = properties& state
functions = behaviors
fully encapsulated class = all private
adv data hide code reusability
unit testing
*/
#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int rollno;
    string name;
public:
int getrollno(){
    return rollno;
}
};
int main(){
    Student S1;
    cout<<S1.getrollno()<<endl;
    return 0;
}
/*Inheritance:
ek class dusri class ki properties aur functions ko inherit karta hai
*/
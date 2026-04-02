#include<bits/stdc++.h>
using namespace std;
//empty class memory is 1 for its identification
class C1{
private:
    int health;
public:
    string Name;
    int salary;

//getter and setter
string getname(){
    return Name;
}

void setname(string n){
    Name= n;
}

int gethealth(){
    return health;
}

void sethealth(int h){
    health=h;
}
//constructor
C1(){
    cout<< "constructor called" << endl;
}
 //Parameterized constructor
C1( int health){
    this->health = health;
    cout<< "Parameterized constructor called" << endl;
}
};

int main(){
    //creation of object
   /* C1 Pal;
    Pal.Name="Palash";
    
    cout<<Pal.getname()<<" "<<Pal.salary<<endl;
   
    return 0;
    //dynamic allocation of object
    C1 *Nan = new C1;
    cout<<(*Nan).salary<<" "<<(*Nan).getname()<<endl;
    return 0;*/
    // constructor
    C1 *Pal = new C1;
    //parameterized constructor
    C1 *Nan = new C1(100);
    cout<< Nan->gethealth()<<endl;
   

}
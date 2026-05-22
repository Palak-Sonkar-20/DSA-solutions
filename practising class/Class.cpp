#include<bits/stdc++.h>
using namespace std;
//empty class memory is 1 for its identification
class C1{
private:
    int health;
public:
    char *Name;
    int salary;
    
    static int time;

//getter and setter
char* getname(){
    return Name;
}

void setname(char name[]){
    delete[] Name;
    Name = new char[strlen(name)+1];
    strcpy(this->Name, name);
}

int gethealth(){
    return health;
}

void sethealth(int h){
    health=h;
}
//constructor
C1(){
    Name = new char[100];
    cout<< "constructor called" << endl;
}
 //Parameterized constructor
C1( int health){
    this->health = health;
    Name = new char[100];
    cout<< "Parameterized constructor called" << endl;
}
//Copy Contructor = Shallow copy
/*C1(C1& temp){
    this->health =temp.health;
    this->Name = temp.Name;
    cout<< "Copy constructor called" << endl;
}
*/
//Deep Copy
C1(C1& temp){
    char *ch = new char[strlen(temp.Name)+1];
    strcpy(ch,temp.Name);
    this->Name = ch;

    this->health =temp.health;
    
    cout<< "Copy constructor called" << endl;
}
void print(){
    cout<<"[ Name: "<<Name<<" , Salary: "<<salary<<" , Health: "<<health<<" ]"<<endl;
}
//Destructor
//dynaic objects are not automatically destroyed when they go out of scope, so we need to explicitly delete them to free up memory. If we don't delete them, it can lead to memory leaks, where memory is allocated but not released, eventually causing the program to run out of memory.
//write delete tan;
static int random(){
    return time;
}
~C1(){
    cout<<"KHATAM"<<endl;
}

}
;
// datatype classname::variablename = value;
 int C1::time = 5;

int main(){
    //creation of object
   /* C1 Pal;
    Pal.Name="Palash";
    
    cout<<Pal.getname()<<" "<<Pal.salary<<endl;
   
    return 0;
    //dynamic allocation of object
    C1 *Nan = new C1;
    cout<<(*Nan).salary<<" "<<(*Nan).getname()<<endl;
    return 0;
    // constructor
    C1 *Pal = new C1;
    */
    //parameterized constructor
    C1 *Nan = new C1(100);
    char Name[4] = "Nan";
    Nan->setname(Name);
    
    //Nan->print();
    C1 Tan(*Nan);
    //cout<< Tan.gethealth()<<" "<<Tan.getname()<<endl;
    Tan.Name[0] = 'M';
    //Tan.print();
    Nan->print();
    //assignment operator
    *Nan = Tan;
    Nan->print();
    cout<<C1::random()<<endl;
    return 0;

}
/*theory
static function stativ members ko hi access kar skte h
1. this pointer is a pointer which points to the current object. It is used to access the members of the current object. It is implicitly passed as a parameter to all the non-static member functions of a class.*/
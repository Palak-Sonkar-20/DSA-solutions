//given a string, reverse it
#include<bits/stdc++.h>
using namespace std;
void reverse(string &s){
    int i=0, j=s.size()-1;
    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
}
int main(){
    string s = "Hello World";
    reverse(s);
    cout<<s;
}
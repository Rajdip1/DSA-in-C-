#include<iostream>
using namespace std;

void reverseString(string &s, int i, int j) {

    cout<<"call received for "<<s<<endl;

    if(i>j) {  // base case
        return;
    }

    swap(s[i], s[j]);
    i++;
    j--;

    reverseString(s,i,j);
}

int main() {
    string name = "abcde";

    reverseString(name,0,name.length()-1);

    cout<<name<<endl;
}
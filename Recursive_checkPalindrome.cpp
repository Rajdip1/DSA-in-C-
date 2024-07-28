#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    if(i>j) { // base case
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }
    else {
        return checkPalindrome(str, i+1, j-1);
    }
}

int main() {
    string s = "bookkoob";
    
    bool isPalindrome = checkPalindrome(s, 0, s.length()-1);

    if(isPalindrome) {
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not a palindrome"<<endl;
    }
}
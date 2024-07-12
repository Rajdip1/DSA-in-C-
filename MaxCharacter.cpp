#include<iostream>
using namespace std;

char getMaxOccuringChar(string s) {
    int array[26] = {0};

    // create an array of count of character
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        // lowercase
        int number = 0;
        number = ch - 'a';
        // if(ch >= 'a' && ch <='z') {
        //     number = ch - 'a';
        // }
        // else {  // upercase
        //     number = ch - 'A';
        // }
        array[number]++;
    }

    //find max occuring character
    int max = -1;
    int ans = 0;
    for(int i=0; i<26; i++) {
        if(max < array[i]) {
            ans = i;
            max = array[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {
    string str;
    cout<<"Enter your string: "<<endl;
    cin>>str;

    cout<<getMaxOccuringChar(str)<<endl;

}
#include<iostream>
using namespace std;

bool checkPalindrom(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverseString(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    // name[2]='\0';  //null charactor

    cout<<"Your name is ";
    cout<<name<<endl;

    int length = getLength(name);
    cout<<"Length is "<<length<<endl;

    reverseString(name, length);

    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Palindrom or not "<<checkPalindrom(name, length)<<endl;

}
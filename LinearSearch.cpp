#include<iostream>
using namespace std;

bool linearSearch(int num[], int size, int key){
    for(int i=0; i<size; i++){
        if(num[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    cout<<"Enter your array size: ";
    int size;
    cin>>size;

    cout<<"Enter your array elements: ";
    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }    

    cout<<"Enter key: ";
    int key;
    cin>>key;
    
    bool found = linearSearch(num,size,key);

    if(linearSearch){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
}
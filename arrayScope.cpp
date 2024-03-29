#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"Inside the function"<<endl;

    //upadating array
    arr[0] = 150;

    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main func"<<endl;
}

int main(){
    int array[3] = {1,2,3};

    update(array,3);

    for(int i=0; i<3; i++){
        cout<<array[i]<<" "<<endl;
    }
    cout<<endl;

}
#include<iostream>
using namespace std;


void linearSearch(int arr[],int size,int key){
    for(int i=0;i<4;i++){
        if(arr[i]==key){
            cout<<key<<" KEY IS FOUND at : "<<i+1<<" location"<<endl;
        }
    }
}
int main(){

    int arr[4]={22,13,90,28};
    int key=28;
    int size=4;
    linearSearch(arr,size,key);
    return 0;
}

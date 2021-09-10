#include<iostream>
using namespace std;


void linearSearch(int arr[],int size,int key){
    int count=0;
    for(int i=0;i<4;i++){
        
        if(arr[i]==key){
           
            cout<<key<<" KEY IS FOUND at : "<<i+1<<" location"<<endl;
        }else{
             count++;
        }
        if(count==1){
            cout<<"KEY IS NOT PRESENT IN ARRAY";
        }
    }
}
int main(){
     int n,key;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements ";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<"Enter key to find ";
    cin>>key;
    
    
    linearSearch(arr,n,key);
    return 0;
}

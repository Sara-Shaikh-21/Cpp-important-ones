//Insertion SORT
//insert an element from unsorted array to its correct position in the sorted array

#include<iostream>
using namespace std;


void insert(int arr[],int size){
    
        for(int i=1;i<size;i++){
            for(int j=0;j<size-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }


            }

        }

        cout<<"INSERT SORT : ";
        for(int z=0;z<size;z++){
            cout<<arr[z]<<" ";
        }
    }

int main(){
     int n,key;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }    
    insert(arr,n);
    return 0;
}

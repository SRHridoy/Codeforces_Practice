#include<iostream>
using namespace std;

int binary_search(int *arr, int size, int key){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end = mid-1;
        else start = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 4, 5 ,6};
    int size = sizeof(arr)/sizeof(int);
    int key;
    printf("enter Key:");
    scanf("%d",&key);
    int index = binary_search(arr,size,key);
    if(index!=-1){
        cout << "Found at " << index;
    }else{
        cout << "Not Found" << endl;
    }

}
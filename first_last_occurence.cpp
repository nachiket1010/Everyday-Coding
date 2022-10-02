#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s = 0 ,e = n-1;
    int mid = s +(e-s/2);
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){//go to right
            s = mid + 1;
        }
        else if(key<arr[mid]){//go to left
                e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int s = 0 ,e = n-1;
    int mid = s +(e-s/2);
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){//go to right
            s = mid + 1;
        }
        else if(key<arr[mid]){//go to left
                e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){

int even[13]={1,2,3,3,3,3,3,3,3,3,3,3,5};

cout<<"First Occurence of 3 is at index "<<firstOcc(even,13,3)<<endl;
    
cout<<"last Occurence of 3 is at index "<<lastOcc(even,13,3)<<endl;
  
    return 0;
}
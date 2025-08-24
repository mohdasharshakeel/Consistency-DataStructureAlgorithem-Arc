#include<iostream>
using namespace std;

int firstOccer(int arr[], int size, int target){
    int s = 0;
    int e = size -1;
    int m = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[m]==target){
            ans = m;
            e = m -1;
        }
        else if(target > m){
            s = m + 1;
        }
        else if(target < m){
           e = m -1 ;
        }
        m = (s+e)/2;
    }
    return ans;
}
 
int lastOccer(int arr[], int size, int target){
    int s = 0;
    int e = size -1;
    int m = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[m]==target){
            ans = m;
            s = m + 1;
        }
        else if(target > m){
            s = m + 1;
        }
        else if(target < m){
           e = m -1 ;
        }
        m = (s+e)/2;
    }
    return ans;
}
 
void totaltoocer(int arr[], int size, int target){
    int first  = firstOccer(arr, size, target);
    int last  = lastOccer(arr, size, target);

int total = last - first + 1;
cout<< "total no of occer " << total << endl;


}


 int main(){
 
    int arr[]={1,2,3,4,4,4,4,4,4,4,4,5,6,7,8,9};
    int size = 15;
    int target;
    cin>> target;
   
    totaltoocer(arr, size , target);


    return 0;
 }
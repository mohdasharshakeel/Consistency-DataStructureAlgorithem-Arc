#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target ){
    int s = 0;
    int e = size-1;
    int m = (s+e)/2;


    while(s<=e){
      if(arr[m]==target){
        return m;
      }
      else if(arr[m]<target){
        s = m + 1;
    
      }
      else{
        e = m - 1;
      }
      m = (s+e)/2;
    }
    return -1;
}

int main(){
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int n ;
    cout<< " Enter the number between 1 to 9" << endl;
    cin>> n;

    int ans = binarySearch(arr,size,n);
   if(ans == -1){
    cout << " index not found" << endl;
   }
   else{
    cout << " index found at " << ans << endl;
   }


    return 0;
}
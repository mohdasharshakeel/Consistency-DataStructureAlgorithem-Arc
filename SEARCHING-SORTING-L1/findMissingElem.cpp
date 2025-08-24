#include <iostream>
using namespace std;

int findMissing(int arr[], int size){
 int s = 0 ;
 int e = size -1 ;
 int m  = s + (e - s ) /2 ;
 int ans = -1;
while(s<=e ){
    int dif =arr[m] - m;
    if (dif==1)
    {
       s = m + 1;
    }
    else{
        ans = m ;
        e = m -1 ;

    }


    m  = s + (e - s ) /2 ;

}
if(ans+1 == 0){
    return size +1 ;
}

return ans + 1 ;

}

int main(){

  int arr [] = {1,2,3,4,5,6,7,9};
  int size = 8 ;
  
int ans =  findMissing(arr,size);
if(ans){
    cout << " the missing no is :" << ans << endl;

}
else{
    cout << "all elem is avalible"<< endl;
}


    return 0 ;
}
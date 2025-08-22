#include <iostream>
using namespace std ;
void sortColor(int arr [], int size ){
int i = 0;
int left = 0;
int right = size -1;

while(i <= right){
if(arr[i]==0){
    swap(arr[i],arr[left]);
    i++;
    left++;

}
else if(arr[i]==2){
    swap(arr[i],arr[right]);
    right--;
    //i ko ++ nhi krege krege to phasege code galat hoga kyuki ye pata nhi hai i ki position kya hai 
}
else{
    i++;
}
}

}

int main(){

    int arr[] = {1,0,2,1,1,2,2,0,0,0,1,2,2,0,1};
    int size = 15;

    sortColor(arr, size);

    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    

    return 0 ;
}
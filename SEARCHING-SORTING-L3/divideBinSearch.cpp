#include<iostream>
using namespace std;
int getQuotient(int divior, int divident){
    int s = 0;
    int e = divident;
    int ans = -1;
    int m = s + (e -s ) /2 ;


    while(s<=e){
        if(m * divior == divident){
            return m ;
        }
        else if(m * divior <= divident){
            ans = m ;
            s = m + 1;
        }
        else {
            e = m -1 ;
        }

        m = 2 + (e -s )/2;
    }

    return ans ;
}

int main(){

    int divisor = 7;
    int divident = 29;

    int ans = getQuotient(divisor, divident);

    cout << ans << endl ;


    return 0;

}
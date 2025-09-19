#include<iostream>
using namespace std;
void reverseString(char ch[], int size){
    int i = 0;
    int j = size - 1;
    while (i<=j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
    
}
int lengthCharArray(char ch[], int size ){
    int length = 0;
    for (int i = 0; i < size; i++){
        if (ch[i] == '\0'){
            // break [ ruk jao]
            break;
        }
        else{
            length++;
        }
    }

    return length;
}

int main(){
    char ch[100];
    cin.getline(ch, 100);
    int len = lengthCharArray(ch, 100);
    cout << "the value of ch before reverse : " << ch << endl;
    reverseString(ch, len);
     cout << "the value of ch after reverse : " << ch << endl;

    return 0;
}

//! imp jab hum function me 100 pss kr rhe the to kya ho rha tha i wla pointer 0 pe point kr rha tha or j wla 99 per point kr rha tha phir jb hm i ko j se swap krte the to kya hota tha pehli index per null charecter aa jata tha to jbhi wo kuch nhi print kr rha tha
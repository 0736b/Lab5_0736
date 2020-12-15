#include<iostream>
using namespace std;

int main(){
    int even=0, odd=0;
    int num = 1;
    while(num!= 0){
            cout << "Enter an integer: ";
            cin >> num;
            if(num%2==0 && num!=0){
                even = even + 1;
            }
            if(num%2!=0){
                odd = odd+1;
            }
    }


    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = "<< odd << endl;
    return 0;
}

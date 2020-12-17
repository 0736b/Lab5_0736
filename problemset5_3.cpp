// Problem Set 5-3 by 630610736.
#include<iostream>
#include<string>

using namespace std;

int cheetah(int money){
    int have,ticket,exchange,leftticket,result=0,exchange2=0,ticket2,round2,x,y;
    if(money>=10){
        have = money/10;
        ticket = have;
        exchange = ticket/3;
        leftticket = exchange + (ticket%3);
        result = have + exchange;
    }
    round2 = leftticket;
    while(round2>=3){
        x = leftticket/3;
        leftticket = leftticket + x - (3*x);
        result += x;
        y = leftticket;
        round2 = y;
    }
    return result;
}

// Test Cases.
int main(){
    
    cout << "cheetah(20): " << cheetah(20)<<endl;
    cout << "cheetah(35): " << cheetah(35)<<endl;
    cout << "cheetah(101): " << cheetah(101)<<endl;
    cout << "cheetah(150): " << cheetah(150)<<endl;
    cout << "cheetah(204): " << cheetah(204)<<endl;
    cout << "cheetah(15): " << cheetah(15)<<endl;
    cout << "cheetah(300): " << cheetah(300)<<endl;
    cout << "cheetah(77): " << cheetah(77)<<endl;
    return 0;

}
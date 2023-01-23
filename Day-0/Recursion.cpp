#include<bits/stdc++.h>
using namespace std;


int power(int base ,int pow){
    if(pow==0){
        return 1;
    }
    int Ans=power(base,pow-1);
    return Ans*base;
}


int main(){
    cout<<power(2,10);
    return 0;
}
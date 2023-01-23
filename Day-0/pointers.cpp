#include<bits/stdc++.h>
using namespace std;



int main(){
    int a=10;
    int *p = &a;

    char ch ='a';
    char *pch = &ch;

    if(sizeof(*pch)==sizeof(a)){
        cout<<"Hey"<<endl;
    }
    else{
        cout<<"Hi"<<endl;
    }

    // cout<<&a<<endl;
    // cout<<*p<<endl;
    // cout<<sizeof(p)<<endl;
     return 0;
}
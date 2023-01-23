#include<bits/stdc++.h>
using namespace std;


// void increment(int n){           /*Neither passing by refrence nor by pointer*/
//     n++;
//     return ;
//}

// void increment(int &n){          /*Passed by Reference*/
//     n++;
//     return ;
// }

void increment(int *n){            /*Passed by pointer*/
    (*n)++;
    return;
}



int main(){
    int i = 11;                   
    increment(&i);
    cout<<i<<endl;

    return 0;
}
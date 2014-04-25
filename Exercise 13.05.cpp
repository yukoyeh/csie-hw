#include<iostream>
#define macro_ADD(x,y,z)((x)+(y)+(z))
using namespace std;
int main(){
    int x,y,z;
    cin >>x>>y>>z;
    cout<<  macro_ADD(x,y,z)<<endl;
    return 0;
    }

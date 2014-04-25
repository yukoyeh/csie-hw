#include<iostream>
#define PI 3.14159
#define macro_ADD(x)((PI)*(x)*(x))
using namespace std;
int main(){
   float area ;
    for(int i=5;i<=15;i++){
        area=macro_ADD(i);
        cout<<(float)area<<endl;
    }
    return 0;
    }

#include<iostream>
using namespace std;
struct personal{
char id[20];
char name[10];
int height;
int weight;


}Personal;
int main(){
cin >> Personal.id >> Personal.name >> Personal.height >> Personal.weight;
cout << Personal.name;
float height=Personal.height*0.01;
float BMI=(float)Personal.weight/height/height;
cout <<" BMI="<<BMI*0.0001 <<endl;

return 0;
}


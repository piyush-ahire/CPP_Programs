#include<iostream>
using namespace std;

int main(){
    int cal = 0;
    while(cal < 10){
        cout<<"running a step and burning"<<(cal + 1)<<endl;
        cal = cal + 1;
    }
    cout<<"out of the loop";
    cout<<cal;
    return 0;
}
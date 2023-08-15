#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr={1,2,3,4,5,6};
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    arr.pop_back();
    arr.push_back(7);

    for(int i=0;i<=arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
 #include<iostream>
 using namespace std;
 int main(){
    int N;
    cin>>N;
    int i=1;
    int sum=0;
    while(i<=N){
        int no;
        cin>>no;

        sum=sum+no;
        i=i+1;
    }

    cout<<"sum is:"<<sum;
    return 0;
 }
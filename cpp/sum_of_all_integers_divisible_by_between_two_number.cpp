#include<iostream>

using namespace std;


int main(){

    int x,y,sum =0;
    cin>>x>>y;

    for(x;x<=y;x++){
        if(x%2 == 0){
            sum = sum +x;
            cout<<sum<<endl;
        }
    }
    cout<<sum;
}
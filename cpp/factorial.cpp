#include<iostream>

using namespace std;


int main(){
    int x ;
    cin>>x;
    int sum = 1;

    for(int i =1;i<=x;i++){

        sum = sum*i;


    }
    cout<<"the factorial is"<<sum;

}
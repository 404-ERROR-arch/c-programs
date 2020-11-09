#include<iostream>

using namespace std;
bool prime_or_not(int);

int main(){

    int min, max;
    cout<<"Enter min and max value"<<endl;
    cin>>min>>max;


    for(int i = min; i<=max; i++){

        if(prime_or_not(i))
            cout<<"prime number"<<i<<endl;
        else
            cout<<"not prime number"<<i<<endl;
        

    }

}

bool prime_or_not(int p){

    for(int i =2;i<p;i++){
        if(p%i == 0)
            return false;
    }
    return true;



}
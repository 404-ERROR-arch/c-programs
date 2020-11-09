#include<iostream>

using namespace std;
bool check_prime_or_not(int);

int main(){

    
for(int i = 0; i<50;i++){
    if(check_prime_or_not(i)){
        cout<<"number is prime"<<i<<endl;
    }
    else{
        cout<<"number is not prime"<<i<<endl;
    }

}
}

bool check_prime_or_not(int x){

    for(int i = 2;i<x;i++){
        if(x%i == 0)
            return 0;
    }
    
    return true;
}
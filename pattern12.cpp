#include<iostream>
using namespace std;

void pattern12(void){

    for(int i=0;i<7;i++){
        for(int j=0; j<7;j++){
            if(!(j&1))
             cout<<char(65+j);
        }
        cout<<endl;
    }


}

int main(){

    pattern12();



}
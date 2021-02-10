#include<iostream>
using namespace std;


/*

***********
***********
***********
***********
***********

*/

void start_pattern(char x){
    for(int i=0;i<5;i++){
        for(int j=0;j<11;j++){
            if((i&1))
                cout<<x;
            else
                cout<<" ";
            

        }
        cout<<"\n";
    }
}

int main(){

    char x;
    cout<<"Enter the character you want to use in start pattern\n";
    cin>>x;

    start_pattern(x);


}


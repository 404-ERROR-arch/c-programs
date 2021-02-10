#include<iostream>
using namespace std;

void pattern15(){
    for(int i=4;i!=-1 ;i--){
        for(int j=4;j!=-1;j--){
            cout<<char(65+j);
        }
        cout<<'\n';
    }
}


int main(){
    pattern15();


}
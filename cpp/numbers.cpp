#include<iostream>
using namespace std;

int pow_(int, int);
void armstr_num(int);
int get_diviser(int);
void perfect_num(int);
void strong_num(int);
void magic_number(int);

int main(){
    int value ;
    while(true){
    int number ;
    cout<<" ---------------------------------------------------------------------------------------\n";
    cout<<"|                            SELECT THE NUMBER                                          |\n";
    cout<<"|  1- ARMSTRONG NUMBERS                                                                 |\n";
    cout<<"|  2- PERFECT NUMBERS                                                                   |\n";
    cout<<"|  3- STRONG  NUMBERS                                                                   |\n";
    cout<<"|  4- MAGIC   NUMBERS                                                                   |\n";
    cout<<"|  0- EXIT                                                                              |\n";
    cout<<"-----------------------------------------------------------------------------------------\n";

    cin>>value;
    if(value == 0)
        break;

    if(value == 1){
        cout<<"Enter the number\n";
        cin>>number;

        
        armstr_num(number);

    }else if(value == 2){
        cout<<"Enter the number"<<endl;
        cin>>number;

        perfect_num(number);
    }
    else if(value == 3){
        cout<<"Enter the number"<<endl;
        cin>>number;
        strong_num(number);
    }
    else if(value == 4){
        cout<<"Enter the number"<<endl;
        cin>>number;
        magic_number(number);

    }
    
    }
}


void armstr_num(int num){
    int temp = num,sum =0  , rem=0 , num_digits = 0;

    while(temp){
        temp =  temp /10;
        num_digits++;

    }
   
    temp = num;

    while(temp){
        rem = temp%10;
        sum = pow_(rem,num_digits)+sum;
        temp = temp/10;
    }

    if(sum == num){
        cout<<"number is armstrong \n";
    
    }
    else
    {
    cout<<"number is not armstrong\n";
    }
    

}

 int pow_(int rem, int n){
    int total =1;
    for(int i =0; i<n;i++){
        total = total*rem;
    }
    return total;

}



void perfect_num(int num){

    int temp = num;

        if(get_diviser(temp) == num){
            cout<<"number is perfect number"<<endl;

        }else{
            cout<<"number is not perfect number"<<endl;
        }
    }




int get_diviser(int num){
    int sum = 0;

    for(int i = 1; i<num;i++){

        if(num%i == 0){
            sum = sum+i;
        }
        

    }
    //cout<<sum<<endl;
    return sum;
}

void strong_num(int num){

    int temp = num, rem = 0, sum = 0, fact_sum=1;
    while(temp){
        rem = temp%10;

        for(int i = 1; i<=rem;i++){
            fact_sum = fact_sum*i;
            
        }
        sum = sum+fact_sum;
        temp = temp/10;
        fact_sum = 1;
    }

    if(sum == num){
        cout<<"number is strong number"<<endl;

    }else{
        cout<<"number is not strong number"<<endl;
    }
}

void magic_number(int number){
    int temp = number, rem = 0, sum = 0;
    while(temp >=9){

    while(temp){
        rem = temp%10;
        sum = sum+rem;
        temp = temp/10;

    }
    if(sum == 1)
        break;
    temp = sum;
    sum = 0;
    cout<<temp<<endl;
    }

    if(sum == 1){
        cout<<"number is magic number"<<endl;

    }else{
        cout<<"number is not magic number"<<endl;
    }
}
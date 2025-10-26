#include<iostream>
#include<cstdlib>
using namespace std;

void game(){
    int secret , guess;
    secret = rand();
    
    while(true){
        cout<<"Guess the number: "<<endl;
        cin>>guess;
        if(guess < secret){
            cout<<"Too low, try again"<<endl;
        }else if(guess > secret){
            cout<<"Too high , try again"<<endl;
        }else{
            cout<<"Congratulation! You guess the correct number"<<endl;
            break;
        }
    }
}

int main(){
    game();

    return 0;
}
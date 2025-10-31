#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0)); //generation of different random number in each time

    int secretNumber = rand() % 100 + 1; 

    int guess;   // for user guessing number
    int tries;  //attempt to tries

    cout<<"🎯 Welcome to the Guess Game! 🎯"<<endl;
    cout<<"chosen a number between 1 and 100"<<endl;
    cout<<"Guess the number...."<<endl;

    do{
        cout<<"Enetr your guessing number : ";
        cin>>guess;
        tries++;

        if(guess > secretNumber){
            cout<<"Too High! Try again"<<endl;
        }else if(guess < secretNumber){
            cout<<"Too Low! Try again"<<endl;
        }else{
            cout<<"🎉 Congratulations! You guessed it right!"<<endl;
            cout<<"The secret number was: " << secretNumber << endl;
            break;
        }
    }while(guess != secretNumber);

    cout<<"Thanks for playing! 😊" <<endl;


    return 0;
}
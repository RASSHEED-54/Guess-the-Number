#include<iostream>

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand()) % 100 + 1;
    std::cout<<"**************** GUESS THE NUMBER GAME ****************\n";
    
    do{
        std::cout<<"Enter a number between (1-100):";
        std::cin>>guess;
        tries++;
        if(guess > num){
            std::cout<<"Too High\n";
        }
        else if(guess < num){
            std::cout<<"Too Low\n";
        }
        else{
            std::cout<<"CORRECT !\n"<<"No of Tries :"<<tries<<"\n";
            break;
        }

    }
    while(num > 0);
    std::cout<<"******************************************************\n";
    
    return 0;
}
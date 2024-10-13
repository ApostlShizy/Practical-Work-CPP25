#include<iostream>
#include"tools.h"

int main() {
    char body_array[20][20];
    #if 0    
    for(int i = 0; i < 20;++i){
        for(int j = 0; j < 20;++j){
            body_array[i][j] = ' ';
        }
    }
    #endif
    bool cut = false;
    bool end = false;
    std::string action;
    do {
        std::cout<<"\nChoice action: ";
        std::cin>>action;
        if(action == "scalpel" && !cut) {
            scalpel(body_array);
            display(body_array);
            cut = true;
        }
        else if(action == "hemostat" && cut){
            hemostat(body_array);
            display(body_array);
        }
        else if(action == "tweezers" && cut) {
            tweezers(body_array);
            display(body_array);
        }
        else if(action == "suture" && cut) {       
            display(body_array);     
            end = suture(body_array);
        }
        else {
            std::cout<<"\nInvalid action";
        }
        
    }while(!end);
}
#include<iostream>
#include"tools.h"

int main() {
    char body_array[20][20];
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
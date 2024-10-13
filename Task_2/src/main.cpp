#include <iostream>
#include "kbd.h"
#include "hard_drive.h"
#include "gpu.h"
#include "cpu.h"

int main () {
    std::string choice;
    while(choice != "exit"){
        std::cout<<"\nChoice option : ";
        std::cin>>choice;
        if(choice == "input") {
            input();
        }
        else if (choice == "save"){
            save();
        }
        else if(choice == "load"){
            load();
        }
        else if(choice == "display"){
            display();
        }
        else if(choice == "computer"){
            computer();
        }
        else if(choice != "exit") {
            std::cout<<"\nWrong option!!!";
        }
    }    
}

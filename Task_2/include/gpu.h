#pragma once
#include<iostream>
#include "ram.h"

void display(){
    int * pointer = out();
    std::cout<<std::endl;
    for(int i = 0 ; i < 8;++i){
        std::cout<<*(pointer + i)<<" ";
    }
}
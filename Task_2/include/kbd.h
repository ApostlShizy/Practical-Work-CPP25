#pragma once
#include<iostream>
#include"ram.h"

void input() {
    int * pointer = out();
    for(int i = 0;i < 8;++i){
        std::cout<<"\nEnter "<< i <<" num : ";
        std::cin>> *(pointer + i);
    }
}
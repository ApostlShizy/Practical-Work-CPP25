#pragma once
#include"ram.h"
#include<iostream>

void computer() {
    int * pointer  = out();
    int sum = 0;
    for(int i = 0;i < 8;++i){
        sum += *(pointer + i); 
    }
    std::cout<<"\nSum of value is : " << sum;
}
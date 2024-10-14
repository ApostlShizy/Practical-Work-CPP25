#pragma once
#include "ram.h"
#include<fstream>
#include<iostream>

void save(){
    int * pointer = out();
    std::ofstream out_file("data.txt");
    for(int i = 0; i < 8; ++i){
        out_file << *(pointer + i) << " ";
    }
    out_file.close();
}

void load(){
    int * pointer = out();
    std::ifstream in_file("data.txt");
    if(!in_file.is_open()) {
        std::cerr<<"\nNot found data file!!!";
        return;
    }
    else {
        for(int i = 7; i >= 0;--i) {
            in_file >> *(pointer + i);
        }
    }
    in_file.close();
}
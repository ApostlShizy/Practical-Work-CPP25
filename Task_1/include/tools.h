#pragma once

void display(char body_array[][20]) {
    std::cout<<std::endl;
    for(int i = 0; i < 20; ++i){        
        for(int j = 0; j < 20;++j){
            std::cout<<body_array[i][j];
        }
        std::cout<<std::endl;
    }
}

void scalpel (char body_array[][20]){
    int start_x;
    int end_x;
    int start_y;
    int end_y;
    std::cout<<"\nEnter start \"x\" and \"y\" (0-19) : ";
    std::cin>>start_x>>start_y;
    std::cout<<"\nEnter end \"x\" and\"y\" (0-19) : ";
    std::cin>>end_x>>end_y;

    if(start_x > end_x) {
        int temp = start_x;
        start_x = end_x;
        end_x = start_x;
    }
    int i = start_y;
    int j = start_x;
    body_array[i][j] = 'C';
    while(start_x != end_x || start_y != end_y) {
        if(start_y > end_y) {
            i = --start_y;
        }
        else if(start_y < end_y){
            i = ++start_y;
        }
        if(start_x < end_x) {
            j = ++start_x;
        }  
        body_array[i][j] = 'C';
    }
    std::cout<<"\nThe cut is made\n";
}

void hemostat (char body_array[][20]) {
    int x,y;
    std::cout<<"\nEnter \"x\" and \"y\" : ";
    std::cin>> x >> y;
    if (body_array[y][x] != 'C') {
        body_array[y][x] = 'H';
        std::cout<<"\nhemostat addet\n";
    }
    else {
        std::cout<<"\nCant do that";
    }
    
}

void tweezers (char body_array[][20]) {
    int x,y;
    std::cout<<"\nEnter \"x\" and \"y\" : ";
    std::cin>>x>>y;
    if(body_array[y][x] != 'C') {
        body_array[y][x] = 'T';
        std::cout<<"\nTweezers have been added\n";
    }
    else {
        std::cout<<"\nCant do that";
    }

}

bool suture (char body_array[][20]) {
    int start_x;
    int end_x;
    int start_y;
    int end_y;
    std::cout<<"\nEnter start \"x\" and \"y\" (0-19) : ";
    std::cin>>start_x>>start_y;
    std::cout<<"\nEnter end \"x\" and\"y\" (0-19) : ";
    std::cin>>end_x>>end_y;

    if(start_x > end_x) {
        int temp = start_x;
        start_x = end_x;
        end_x = start_x;
    }
    bool equal = true;
    int i = start_y;
    int j = start_x;   
    if( body_array[i][j] != 'C') {
        equal = false;
    }   

    while(start_x != end_x || start_y != end_y) {
        if(start_y > end_y) {
            i = --start_y;
        }
        else if (start_y < end_x){
            i = ++start_y;
        }
        if(start_x < end_x) {
            j = ++start_x;
        }  
        if( body_array[i][j] != 'C') {
            equal = false;
        }
    }    
    if(equal) {        
        std::cout<<"\nThe seam was done\n";
        return true;
    }
    else {
        std::cout<<"\nCant do seam in this place\n";
        return false;
    }    
}
// Memory class finished in 12:50.80


#pragma once

#ifndef MEMORY_HPP
#define MEMORY_HPP


#include <iostream>

class Ptr {

    int* ptr;

public:

   Ptr(int* p = NULL) { 
       cout << "Pointer allocated to stack";
       ptr = p; 
       cout << endl;

   }

    ~Ptr() { 
        delete (ptr); 
    }


    int& operator*() { 
        return *ptr; 
    }
};




#endif // !MEMORY_HPP

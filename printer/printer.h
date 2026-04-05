#pragma once
#include <stdio.h>
#include <iostream>

class printText
{
    private:
        std::string text_;
    
    public:
        printText(std::string text);
        void print();
};
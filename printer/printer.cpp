#include "printer.h"

printText::printText(std::string text):
    text_(text)
{

}

void printText::print()
{
    std::cout << text_ << std::endl;
    getchar();
}
#include <iostream>
#include <stdio.h>
#include <eigen3/Eigen/Dense>

#include "printer.h"

int main()
{
    printText printer("Hello world");
    printer.print();

    using namespace Eigen;
    MatrixXd matrixGood(4, 4);
    matrixGood << -150.6000,        -8.2900,         7.3900,         8.5700,
                     7.7000,       -77.0000,        -0.8900,        -2.6200,
                     4.3300,         3.0300,       146.8000,        -4.2800,
                     8.7400,        -2.6000,        -1.2700,      -112.4000;
    
    std::cout << matrixGood << std::endl;
    getchar();
    // std::cout << "Hello world" << std::endl;
    // getchar();
}
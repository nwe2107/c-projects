#include <iostream>

int main(){

    // type conversion = converting a value of one data type to another 
    //                  Implicit = automatic
    //                  Explicit = precede value with new data type(int)

    double x = (int) 3.14;

    char y = 100;

    std::cout << y<< '\n';

    std::cout << x<< '\n';
    std::cout << (char)101 << '\n';

    int correct = 8;
    int questions = 10;

    double score = correct/questions * 100; // 0.8 * 100 = 0 because correct and questions are ints
    std::cout << score<< '%'<< '\n';

    score = (double)correct/questions * 100; // 0.8 * 100 = 80 because one of the vars is a double
    std::cout << score<< '%'<< '\n';
    return 0;
}
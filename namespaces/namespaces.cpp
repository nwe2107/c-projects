#include <iostream>

namespace first{
    int x = 1;
}namespace second{
    int x = 2;
}
int main(){
    using namespace first;
    // Namespace =  provides a solution for preventing name conflicts 
    //              in large projects. Each entity needs a unique name. 
    //              A namespace allows for identically named entities 
    //              as long as the namespaces are different.
    // using namespace std; will allow us to just type stuff like cout with out the std::cout


    int x = 0; 

    // std::cout  << "this is the first namespace: " << first::x<< '\n';
    // std::cout  << "this is the second namespace: " << second::x<< '\n';
    std::cout  << "this is with 'using namespace first': " << x << '\n';
    return 0;
}
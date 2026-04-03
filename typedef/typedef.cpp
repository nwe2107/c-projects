#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> parilist_t;

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    // typedef =   reserved keyword used to create an additional name
    //             (alias) for another data type.
    //              New identifier for an existing type
    //              Helps with readability and reduces typos 
    //              Use when there is a caller benefit/
    //              Replaced with 'using' (work better w/ templates)

    text_t firstName = "broman";

    number_t age = 27;

    std::cout << firstName << " is " << age << " years old " <<'\n';

    // parilist_t pairlist;
    return 0;
}
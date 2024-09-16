#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    std::string str1, str2;


    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    
    if (str1.length() != str2.length()) {
        std::cout << "BERBEDA" << std::endl;
    } else {
        
        if (str1 == str2) {
            std::cout << "IDENTIK" << std::endl;
        } else {
            std::cout << "MIRIP" << std::endl;
        }
    }

    return 0;
}
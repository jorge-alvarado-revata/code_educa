//
// Created by Jorge Alvarado on 04/11/2019.
// {3) Overloading o Sobrecarga}
#include <iostream>
#include <string>
using namespace std;
int add(int a, int b) {
    return a + b;
}
std::string add(string a, string b) {
    std::string result(a);
    result += b;
    return result;
}

void ejemplo3() {
    std::cout << add(5, 9) << "\n";
    std::cout << add("hello ", "world") << "\n";
}
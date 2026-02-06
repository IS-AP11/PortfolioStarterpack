#include <iostream>
int main(){
int luckyNumbers[5] = {21,19,23,29,16};
std::cout << luckyNumbers << std::endl;
std::cout << &luckyNumbers[0] << std::endl;
std::cout << *luckyNumbers << std::endl;
std::cout << luckyNumbers[2] << std::endl;
std::cout << *(luckyNumbers+2) << std::endl;

}
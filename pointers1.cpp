#include <iostream>

void printint(int* ptr){
std::cout << *ptr <<"\n";
}
void printchar (char *ptr){
std::cout << *ptr <<std::endl;
}
void printany(void*ptr, char type){
switch(type){
case 'i':
std::cout << *((int*)ptr);
break;
case 'c':
std::cout << *((char*)ptr);
break;
}
}
int main(){
int num = 21;
char letter = 'G';
printint(&num);
printchar(&letter);
std::cout << "Breaking line...."<<std::endl;
printany(&num, 'i');
std::cout << std::endl;
printany(&letter, 'c');
}
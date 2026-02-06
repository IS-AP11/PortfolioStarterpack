#include <iostream>
#include <vector>

void swap(int &a, int &b){
int temp = a;
a = b;
b = temp;
}
bool ascending(int a, int b){
return a < b;
}
bool descending(int a, int b){
return a > b;
}
 void sortAscending(std::vector<int> &numbers){
int size = numbers.size();
for (int i = 0; i < size - 1; i++){
for(int j = 0; j < size - 1; j++){
if(!(ascending(numbers[j], numbers[j+1]))){
swap(numbers[j], numbers[j+1]);
}}}} 

void sortDescending(std::vector<int> &numbers){
int size = numbers.size();
for (int i = 0; i < size - 1; i++){
for(int j = 0; j < size - 1; j++){
if(!(descending(numbers[j], numbers[j+1]))){
swap(numbers[j], numbers[j+1]);
}}}} 
void printer(std::vector<int> &numbers){
int size = numbers.size();
for (int i = 0; i < size; i++){
std::cout << numbers[i] << " ";
}}
int main(){
 std::vector<int> numbers = {21,16,6,7,29,1,3,12,19};
 sortAscending(numbers);
 printer(numbers);
 std::cout << std::endl;
 sortDescending(numbers);
 printer(numbers);
}
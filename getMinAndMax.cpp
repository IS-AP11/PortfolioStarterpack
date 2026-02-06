#include <iostream>
void getMinAndMax(int luckyNumbers[], int size, int* min, int*max){
for (int i = 0; i < size; i++){
if(luckyNumbers[i] < *min){
*min = luckyNumbers[i];
}
if(luckyNumbers[i] > *max){
*max = luckyNumbers[i];
}
}
}
int main(){
int luckyNumbers[5] = {21,7,16,29,6};
int min = luckyNumbers[0];
int max = luckyNumbers[0];
getMinAndMax(luckyNumbers,5,&min,&max);
std::cout << "Min is: "<< min <<std::endl;
std::cout << "Max is: "<< max <<std::endl;
}
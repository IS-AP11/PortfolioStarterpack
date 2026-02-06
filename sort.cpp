#include <iostream>

int main()
{
    int arr[7] = {7,6,5,4,3,2,1};
 
    int num = 7;
    for(int i = 0; i < num / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[num - i -1];
    arr[num - i -1] = temp;
    }
 //print the values
  for (int i = 0; i < 7; i++){
 std::cout << arr[i] << " ";
 }   
    return 0;
}
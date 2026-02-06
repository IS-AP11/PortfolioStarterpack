#include <iostream>
using namespace std;
int getNumber(){
return 5;
}
int main(){

int(*funcPtr)() = getNumber;
cout << getNumber << endl;
cout << (void*)getNumber << endl;
cout << (void*)funcPtr << endl;
cout << funcPtr() << endl;

}
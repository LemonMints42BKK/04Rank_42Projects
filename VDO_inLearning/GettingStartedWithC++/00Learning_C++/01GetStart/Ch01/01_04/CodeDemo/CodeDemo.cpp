// Learning C++
// Challenge 01_04
// Console Interaction, by Eduardo Corpeño

#include <iostream>
#include <string>

using namespace std;

int main(){
	char str[25];
	cout << "Enter your fullname: ";
	cin.getline(str, 25);
	cout << "Hello, "<< str << endl;
	return(0);
}

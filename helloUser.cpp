//Input user name->Output "user name"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user;

	cout << "What is your name? ";
	getline(cin, user);
	//getline(cin,user); --- For getting the whole user input if spaces are used on the input.

	cout << "Welcome! " << user;

	return 0;

}
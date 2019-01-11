#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dogName;
	int actualAge, humanAge;
	
	cout << "How old is your dog?\n" ;
	cin >> actualAge;
	humanAge = actualAge * 7;
	
	cout << "What is your dog's name?" ;
	cin >> dogName;
	
	cout << dogName << "'s age is approximately " <<
           "equivalent to a " << humanAge << " year old human." << endl;

	return 0;
}

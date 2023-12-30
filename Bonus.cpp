#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double bonus =0;
	double salary;
	//int increasedpercentage = 5;
	int numofyears;
	cout << "What is your salary?" << endl;
	cin >> salary;

	cout << " How many years of service have you provided to this company?" << endl;
	cin >> numofyears;

	if (numofyears > 5) {
		bonus =  0.05 * salary;
		
	}

	cout<< "Congratulations! your bonus is" << bonus;

	return 0;
}
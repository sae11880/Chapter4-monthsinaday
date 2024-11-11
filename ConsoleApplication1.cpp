//creating a program to determine the months in a day based on leap years

#include <iostream>
using namespace std;

//determine which years will be leap years based on what they are divisable by
bool ifleapyear(int year) {
	if (year % 100 == 0) {
		return year % 400 == 0;
	}
	else {
		return year % 4 == 0;
	}
}

// now we need to set rules for the days in a month
// we must include our leap year formula for feburary

int daysinmonth(int month, int year) {
	switch (month) {
	case 1: return 31;
	case 2: return ifleapyear(year) ? 29 : 28;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 30;
	case 9: return 31;
	case 10: return 30;
	case 11: return 31;
	case 12: return 30;
	default: return -1; //this is for when they enter an invalid month 
	}
}

//This is the program and the area for input
int main() {
	int month, year;
	cout << "Pick a month using a 1-12 scale:";
	cin >> month;
	cout << "Choose a year:";
	cin >> year;

	int days = daysinmonth(month, year);
	if (days == -1) {
		cout << "Please try again, Choose a number between 1-12: ";//this is for invalid month
	}
	else {
		cout << "You chose month " << month << " and year " << year << " which produces " << days << " days." << endl;
	}
	return 0;
}


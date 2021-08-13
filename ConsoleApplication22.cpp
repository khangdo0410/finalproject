#include <iostream>
#include <string>
using namespace std;

int userInfo();
int selectStaff();
int selectDate();
int selectCar();

string userName, userDate, userNumber;
string name;
string date;

int main()
{
	int car;

	userInfo();
	selectStaff();
	selectDate();
	selectCar();

	return 0;
}
int userInfo() {
	cout << "Welcome to Mini Car Showroom" << endl;
	cout << "The current price for each car model is $50." << endl << endl;
	cout << "Please enter your name (first name): " << endl;
	cin >> userName;

	cout << "Enter your date of birth (MM/DD/YYYY): " << endl;
	cin >> userDate;

	cout << "Enter your phone number: " << endl;
	cin >> userNumber;

	return 0;
}
int selectStaff() {
	cout << "ENTER STAFF/OPERATOR'S NAME: " << endl;
	cin >> name;

	return 0;
}
int selectDate() {
	cout << "ENTER DATE (MM/DD/YYYY):" << endl;
	cin >> date;

	return 0;
}
int selectCar() {
	int c;
	cout << endl;
	cout << "CHOOSE A CAR THAT IS INTERESTING TODAY:" << endl;
	cout << endl;
	cout << "Press 1 for first option, 2 for second option & 3 for third option" << endl;
	cout << endl;
	cout << "[1] BMW 4 Series" << endl << "[2] Mercedes Benz S Class" << endl << "[3] Audi R8" << endl;
	cin >> c;
	string userCar;
	if (c == 1) {
		userCar = "BMW 4 Series";
		cout << userCar << endl;
	}
	else if (c == 2) {
		userCar = "Mercedes Benz S-Class";
		cout << userCar << endl;
	}
	else if (c == 3) {
		userCar = "Audi R8";
		cout << userCar << endl;
	}
	else {
		cout << "There was no item detected!!! Please try again enter 1, 2, 3 for products." << endl;
		
		return 1;
	}
	cout << endl << "Customer information" << endl;
	cout << "Name: " << userName << endl;
	cout << "Date of birth: " << userDate << endl;
	cout << "Phone Number: " << userNumber << endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "Cashier: " << name  << endl;
	cout << "Date: " << date << endl;
	cout << "Car Model: " << userCar << endl;
	cout << "Total: $50";
	cout << endl << endl;
	cout << "Thank you for choosing car showroom! Enjoy your day!" << endl << endl;
	cout << "------------------------------------------------------------------------------------" << endl << endl;
	cout << "NO RETURN, NO CHANGE, EACH CUSTOMER CAN BUY ONLY ONE MODEL EACH DAY!!!" << endl;

	return 0;
}








	
#include <iostream>
#include <string>
using namespace std;

void greetUser(string name) {
	cout << "Hello, " << name << "! Welcome back!" << endl;
}

bool verifylogin(string username, string password) {
	string correctUsername = "finney";
	string correctPassword = "12345";
	if (username == correctUsername && password == correctPassword) {
		return true;
	}
	else {
		return false;
	}
}

double calculateAverage(double score1, double score2, double score3) {
	double average= (score1 + score2 + score3) / 3.0;
	return average;
}

void displayAverage(double average) {
	cout << "Your average score is: " << average << endl;
	if (average >= 90) {
		cout <<" Excellent work!" << endl;
	}
	else if (average >= 75) {
		cout << " Good job!, keep improving" << endl;
	}
	else {
		cout << " Keep studying, you can do better!" << endl;
	}
}

int main() {
	string username, password, name;
	double s1, s2, s3;

	cout << "Enter name: ";
	getline(cin, name);
	greetUser(name);

	cout << "Enter username: ";
	getline(cin, username);
	cout << "Enter password: ";
	getline(cin, password);

	if (verifylogin(username, password)) {
		cout << "Login successful!" << endl;
		cout << "Enter score 1: ";
		cin >> s1;
		cout << "Enter score 2: ";
		cin >> s2;
		cout << "Enter score 3: ";
		cin >> s3;
		double average = calculateAverage(s1, s2, s3);
		displayAverage(average);
	}
	else {
		cout << "Login failed! Incorrect username or password." << endl;
	}
	return 0;
}

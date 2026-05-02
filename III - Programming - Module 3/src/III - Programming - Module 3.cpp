#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;

	cout << "Enter a whole number: " << endl;

	if (!(cin >> num1)) {
		cout << "Non-Integer Error. Program Exiting..." << endl;
		return 1;
	}

	cout << "Nice! Enter a second whole number: " << endl;
	if (!(cin >> num2)){
		cout << "Non-Integer Error. Program Exiting..." << endl;
		return 1;
	}

	cout << "Cool! Now enter one more whole number: " << endl;
	if (!(cin >> num3)){
		cout << "Non-Integer Error. Program Exiting..." << endl;
		return 1;
	}


	int* pNum1 = new int(num1);
	int* pNum2 = new int(num2);
	int* pNum3 = new int(num3);


	cout << "Variable 1\nValue: " << num1
	     << "\nPointer Location: " << pNum1
	     << "\nPointer Value: " << *pNum1 << "\n" << endl;


	cout << "Variable 2\nValue: " << num2
	     << "\nPointer Location: " << pNum2
	     << "\nPointer Value: " << *pNum2 << "\n" << endl;


	cout << "Variable 3\nValue: " << num3
	     << "\nPointer Location: " << pNum3
	     << "\nPointer Value: " << *pNum3 << "\n" << endl;



	delete pNum1;
	delete pNum2;
	delete pNum3;

	return 0;
}



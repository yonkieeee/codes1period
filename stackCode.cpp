#include"Stack.h"

void chooseMenu() {
	cout << "\n_________________________________________\n";
	cout << "\nWhat operation do you want to perform?(Enter number of option)\n";
	cout << "0. Exit\n";
	cout << "1. Push element in stack(push())\n";
	cout << "2. Pop element from stack(pop())\n";
	cout << "3. Check if the stack is emtpy(empty())\n";
	cout << "4. Check size of stack(size())\n";
	cout << "5. Check top element(top())\n";
	cout << "6. Print your stack\n";
	cout << "\n_________________________________________\n";
}

int main() {

	int oper = 1, value;


	Stack s1;
	//тести
	assert(s1.empty() == true);

	s1.push(1);
	s1.push(2);
	assert(s1.empty() == false);
	assert(s1.top() == 2);

	assert(s1.pop() == 2);
	assert(s1.top() == 1);

	s1.pop();
	assert(s1.empty());

	cout << "All tests passed";

	//всі операції
	while (oper != 0) {
		chooseMenu();

		cout << "\nEnter number of operation: ";
		cin >> oper;
		cout << endl;
		cout << "\n_________________________________________\n";
		switch (oper)
		{
		case(0):
			cout << "Goodbye:)";
			break;
		case(1):
			cout << "Enter value which you want to add to stack: ";
			cin >> value;
			s1.push(value);
			break;
		case(2):
			if (s1.empty()) {
				cout << "Stack underflow.";
			}
			else {
				cout << "Last element of stack(" << s1.pop() << ") has been removed.";
			}
			break;
		case(3):
			if (s1.empty()) {
				cout << "Stack is empty";

			}
			else {
				cout << "Stack isn`t empty";
			}
			break;
		case(4):
			cout << "Size of stack is " << s1.size() << endl;
			break;

		case(5):
			if (s1.empty()) {
				cout << "Stack have no elements";
			}
			else {
				cout << "Top elemnt is " << s1.top();
			}
			break;
		case(6):
			s1.print();
			break;

		default:
			cout << "Invalid option. Please choose a valid operation!";
			break;
		}
	}
}

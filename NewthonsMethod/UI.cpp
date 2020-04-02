#include <iostream>
#include "UI.h"
#include "Logic.h"

using namespace std;

void UI::Introduction() {
	cout << "Stare idee nie rdzewieja. Kamil Kaczorowski\n\n";
	cout << "Welcome to my application!\n\n";
}

void UI::StartApplication() {
	Logic logic;
	int exit = 1;

	while (exit != 0) {
		cout << "Press 1 to generate random polynomial\n";
		cout << "Press 2 to upload .txt file from local disc\n";

		int input;
		cin >> input;

		switch (input)
		{
		case 1: {
			logic.Option1();
			break;
		}
		case 2: {
			logic.Option2();
			break;
		}
		default: {
			cout << "Incorrect input!\n";
			break;
		}
		}

		cout << "Press any button to continue! Press 0 to exit!\n";
		cin >> exit;
	}
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "UI.h"

using namespace std;

int main()
{
	srand(time(NULL));

	UI ui;
	ui.Introduction();
	ui.StartApplication();

	system("PAUSE");
	return EXIT_SUCCESS;
}
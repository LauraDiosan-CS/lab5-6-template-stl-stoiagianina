#include <iostream>

#include"UI.h";

int main()
{
	testeD();
	testeR();
	testeC();
	Repository repo;
	Controller serv = Controller(repo);
	UI ui = UI(serv);
	ui.menu();

	return 0;
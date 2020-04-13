#include "UI.h"
#include <string.h>
#include <iostream>
using namespace std;

UI::UI(Controller c) : ctrl{ c }
{
}
void UI::afisare()
{
	int size = ctrl.controllerSize();
	std::vector<Biblioteca> all = ctrl.getAll();
	for (int i = 0; i < size; i++)
	{
		cout << "Titlu:" << all[i].getTitlu();
		cout << "Autor:" << all[i].getAutor();
		cout << "Status:" << all[i].getStatus();
	}
}
void UI::print_menu()
{
	cout << "1.Imprumuta o carte\n" << "2.Returneaza o carte\n" << "3.exit \n" << "Alegeti o optiune: \n";
}
void UI::menu()
{
	while (true)
	{
		print_menu();
		int choose;
		cin >> choose;
		if (choose == 1)
		{
			Imprumut();
		}
		else
			if (choose == 2)
			{
				Return();
			}
			else
				if (choose == 3)
				{

				}
	}
}
void UI::Retragere()
{
	UI a;
	int x, y;
	cout << "Cod Numeric Personal:";
	cin >> x;
	cout << "Care este suma pe care doriti sa o extrageti?";
	cin >> y;
	a->ctrl->Retragere(x, y);

}

void UI::Depunere()
{
	UI a;
	int x, y;
	cout << "Cod Numeric Personal:";
	cin >> x;
	cout << "Care este suma pe care doriti sa o depuneti?";
	cin >> y;
	a->ctrl->Depunere(x, y);

}
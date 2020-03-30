#include "UI.h"
#include <string.h>
#include <iostream>
using namespace std;

UI::UI(Controller c) : ctrl{ c }
{
}
void UI::afisare()
{
	int size = ctrl.serviceSize();
	std::vector<Produs> all = ctrl.getAll();
	for (int i = 0; i < size; i++)
	{
		cout << "Nume:" << all[i].getNume();
		cout << "Data:" << all[i].getData();
		cout << "Pret:" << all[i].getPret();
	}
}
void UI::print_menu()
{
	cout << "1.Afiseaza produsele cu pretul mai mare decat\n" << "2.Reducere 10% \n" << "3.exit \n" << "Alegeti o optiune: \n";
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
			afisare_produs();
		}
		else
			if (choose == 2)
			{
				update_reducere();
			}
			else
				if (choose == 3)
				{

				}
	}
}
void UI::afisare_produs()
{
	int p;
	cout << "Introduceti pretul: \n";
	cin >> p;
	ctrl.afisare_produs(p);

}
void UI::update_reducere()
{
	int z, l, a;
	cout << "Dati o zi: \n";
	cin >> z;
	cout << "Dati o luna: \n";
	cin >> l;
	cout << "Dati un an: \n";
	cin >> a;
	Data d = Data(z, l, a);
	ctrl.update_reducere(d);
}
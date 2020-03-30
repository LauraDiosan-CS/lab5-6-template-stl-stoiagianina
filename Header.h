
#include <string.h>
//#include <iostream>

#include "Repository.h"

class Controller
{
private:
	Repository repo;
public:
	Controller() {};
	Controller(Repository r);

	std::vector<Produs> getAll();
	void addCtr(Produs p);
	int serviceSize();

	std::vector<Produs>afisare_produs(int p);
	void update_reducere(Data d);
	
};
void testeC();


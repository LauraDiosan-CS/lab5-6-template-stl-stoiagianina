#include <iostream>
#include <assert.h>

#include "C:\\Users\user\source\repos\lab5\lab5\Header.h"

using namespace std;

Controller::Controller(Repository r) :repo{ r } {

}
std::vector <Produs> Controller::getAll()
{
	return this->repo.getAllRepo();
}

void Controller::addCtr(Produs p)
{
	this->repo.addElem(p);
}
std::vector<Produs>Controller::afisare_produs(int p)
{
	std::vector<Produs> all = repo.getAllRepo();
	std::vector<Produs> newv;
	int size = repo.repoSize();
	for (int i = 0; i < size; i++)
	{
		if (all[i].getPret() > p) 
		{
			newv.push_back(all[i]);
		}
	}
	return newv;
}
void Controller::update_reducere(Data d)
{
	std::vector<Produs> all = repo.getAllRepo();
	int size = repo.repoSize();
	int red;
	for (int i = 0; i < size; i++)
	{
		if (all[i].getData.getAn() < d.getAn())
		{
			red = all[i].getPret() - (all[i].getPret * 10) / 100;
			all[i].setPret(red);
			all = repo.getAllRepo();
		}
		else if (all[i].getData.getAn() == d.getAn())
		{
			if (all[i].getData.getLuna() < d.getLuna())
			{
				red = all[i].getPret() - (all[i].getPret * 10) / 100;
				all[i].setPret(red);
				all = repo.getAllRepo();
			}
			else if (all[i].getData.getLuna() == d.getLuna())
			{
				if (all[i].getData.getZi() < d.getZi())
				{
					red = all[i].getPret() - (all[i].getPret * 10) / 100;
					all[i].setPret(red);
					all = repo.getAllRepo();
				}
			}
		}
	}
}
int Controller::serviceSize()
{
	return this->repo.repoSize();
}

void testeC()
{
	Data d1 = Data(12, 3, 2019);
	Data d2 = Data(31, 3, 2020);
	Produs c1 = Produs("paine", d1, 200);
	Produs c2 = Produs("lapte", d2,50);
	Repository r;
	Controller serv = Controller(r);
	serv.addCtr(c1);
	assert(serv.serviceSize() == 1);
	serv.addCtr(c2);
	assert(serv.serviceSize() == 2);
	Produs c3 = Produs("apa plata", d2, 100);
	Produs c4 = Produs("cartofi", d2, 30);
	Produs c5 = Produs("branza", d1, 15);
	Produs c6 = Produs("banane", d1, 25);
	Repository r1;
	Controller serv1 = Controller(r1);
	serv1.addCtr(c3);
	serv1.addCtr(c4);
	serv1.addCtr(c5);
	serv1.addCtr(c6);
	assert(serv1.serviceSize() == 4);
	serv1.addCtr(c6);
	assert(serv1.serviceSize() == 5);
	Repository r2;
	Controller serv2 = Controller(r2);
	Produs c7 = Produs("cartofi", d2, 30);
	serv2.addCtr(c3);
	serv2.addCtr(c1);
	serv2.addCtr(c5);
	serv2.addCtr(c6);
	serv2.addCtr(c7);
	assert(serv2.serviceSize() == 5);
	std::cout << "Tests passed! ->Service\n";
}
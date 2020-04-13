#include "Controller.h"
#include <iostream>
#include <assert.h>
using namespace std;

Controller::Controller()
{
}

Controller::Controller(RepoFile r) :repo{ r }
{
}


std::vector <Biblioteca> Controller::getAll()
{
	std::vector <Biblioteca>vector = this->repo.getAllRepo();
	return vector;
}

void Controller::addCtr(Biblioteca c)
{
	this->repo.addElemRepo(c);
}
void Controller::Imprumut(std::string a, std::string t)
{
	std::vector<Biblioteca> all = repo.getAllRepo();
	for (int i = 0; i < repo.sizeRepo(); i++)
	{
		if (all[i].getTitlu == t && all[i].getAutor == a)
		{
			if (all[i].getStatus == "Imprumutat")
			{
				std::cout << "Cartea nu este disponibila";
			}
			else
				all[i].setStatus("Imprumutat");
				all = repo.getAllRepo();
		}

	}
}

void Controller::Return(std::string a, std::string t)
{
	std::vector<Biblioteca> all = repo.getAllRepo();
	for (int i = 0; i < repo.sizeRepo(); i++)
	{
		if (all[i].getTitlu == t && all[i].getAutor == a)
		{ 
			all[i].setStatus("Disponibila");
			all = repo.getAllRepo();
		}
	}
}
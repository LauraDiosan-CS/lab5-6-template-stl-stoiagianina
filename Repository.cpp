#include "Repository.h"
#include <assert.h>

Repository::Repository()
{
}
std::vector<Produs> Repository::getAllRepo()
{
	return this->All;
}
void Repository::addElem(Produs produs)
{
	All.push_back(produs);
}
int Repository::repoSize()
{
	return this->All.size();
}
void Repository::deleteRepo(int poz)
{
	All.erase(All.begin() + poz);
}
void testeR()
{
	Data d1 = Data(12, 3, 2019);
	Data d2 = Data(31, 3, 2020);
	Produs p1 = Produs("lapte", d1, 5);
	Produs p2 = Produs("paine", d2, 3);
	Repository repo;
	repo.addElem(p1);
	assert(repo.repoSize() == 1);
	repo.deleteRepo(0);
	assert(repo.repoSize() == 0);
	repo.addElem(p2);
	assert(repo.repoSize() == 1);
	repo.addElem(p1);
	assert(repo.repoSize() == 2);
	std::cout << "Teste din repo...\n";
}
	
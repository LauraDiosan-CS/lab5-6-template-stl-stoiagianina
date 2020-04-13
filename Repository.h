#include "Client.h"
#include <assert.h>
#include <vector>
template <class T> class Repository {
private:
	std::vector<Biblioteca> carti;
public:
	Repository() {}
	void addElemRepo(Biblioteca c);
	std::vector<Biblioteca> getAllRepo();
	int sizeRepo();
};
template<class T>
void Repository<T>::addElemRepo(Biblioteca c)
{
	this->carti.push_back(c);
}

template<class T> 
std::vector<Biblioteca> Repository<T>::getAllRepo()
{
	return this->carti;
}
template<class T>
int Repository<T>::sizeRepo()
{
	return this->carti.size();
}
void testeR()
{
	Biblioteca b1 = Biblioteca("A", "B", "C");
	Biblioteca b2 = Biblioteca("B", "E", "D");
	Biblioteca b3 = Biblioteca("C", "A", "F");
	Repository <class T> repo;
	repo.addElemRepo(b1);
	assert(repo.sizeRepo() == 1);
	repo.addElemRepo(b2);
	repo.addElemRepo(b3);
	assert(repo.sizeRepo() == 3);
	std::cout << "Tests passed! ->Repository";
}


void testeR();

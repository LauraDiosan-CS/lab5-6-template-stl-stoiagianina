#include <iostream>
#include <assert.h>
#include "RepoFile.h"

using namespace std;
class Controller
{
private:
	int S = 1000;
	RepoFile repo;
public:
	Controller();
	Controller(RepoFile r);
	int controllerSize();
	std::vector<Client> getAll();
	void addCtr(Client c);
	void Imprumut(std::string a, std::string t);
	void Return(std::string a, std::string t);
};
void test_c();
#include"Repository.h"
#include<assert.h>
#include<fstream>
class RepoFile :public Repository <Biblioteca> {
private:
	std::string fName;
	std::vector<Biblioteca> carti;
	void loading() {
		std::ifstream fin(fName);
		std::string titlu;
		std::string autor;
		std::string status;
		while (fin >> titlu >> autor >> status) {
			Biblioteca c{ titlu, autor, status };
			addElemRepo(c);
		}
		fin.close();
	}

	void writing() {
		std::ofstream fout(fName);

		for (auto m : carti) {
			fout << m.getTitlu() << "\n";
			fout << m.getAutor() << "\n";
			fout << m.getStatus() << "\n";
		}
		fout.close();
	}

public:
	RepoFile() {}
	RepoFile(std::string fName) :fName{ fName } {
		loading();
	}
	std::vector<Biblioteca> RepoFile::getElem() {
		return this->carti;
	}
	void addElem(Biblioteca c) {
		addElemRepo(c);
		writing();
	}
};
void testeRF()
{
	Biblioteca c{ "A","B","C" };
	RepoFile r = RepoFile("date.txt");
	r.addElem(c);
	assert(getElem(r).compara(c) == true);
	std::cout << "Tests passed!;";
}
#include <string>

#include <iostream>
class Biblioteca {
private:
	std::string titlu;
	std::string autor;
	std::string status;
public:
	Biblioteca();
	Biblioteca(std::string t, std::string a, std::string s);
	Biblioteca(const Biblioteca & c);
	void setTitlu(std::string t);
	void setAutor(std::string a);
	void setStatus(std::string s);
	std::string getTitlu();
	std::string getAutor();
	std::string getStatus();
	Biblioteca& operator=(const Biblioteca &c);
	bool compara(const Biblioteca c);

};
void testeD();


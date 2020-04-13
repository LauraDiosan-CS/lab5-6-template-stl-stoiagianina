#include "Client.h"

#include <assert.h>

Biblioteca::Biblioteca()
{
}

Biblioteca::Biblioteca(std::string t, std::string a, std::string s)
{
	this->titlu = t;
	this->autor = a;
	this->status = s;

}

Biblioteca::Biblioteca(const Biblioteca & c)
{
	this->titlu = c.titlu;
	this->autor = c.autor;
	this->status = c.status;
}

void Biblioteca::setTitlu(std::string t)
{
	this->titlu =t ;
}
void Biblioteca::setAutor(std::string a)
{
	this-> autor=a ;
}
void Biblioteca::setStatus(std::string s)
{
	this->status = s;
}
std::string Biblioteca::getTitlu()
{
	return this->titlu;
}
std::string Biblioteca::getAutor()
{
	return this->autor;
}
std::string Biblioteca::getStatus()
{
	return this->status;
}
Biblioteca & Biblioteca::operator=(const Biblioteca & c)
{
	if (this != &c) {
		this->setTitlu(c.titlu);
		this->setAutor(c.autor);
		this->setStatus(c.status);
	}
	return *this;
}

bool Biblioteca::compara(const Biblioteca c)
{
	if (this->titlu == c.titlu && this->autor == c.autor && this->status == c.status)
		return true;
	return false;
}

void testeD()
{
	Biblioteca b1 = Biblioteca("A", "B","C");
	Biblioteca b2 = Biblioteca("B", "E","D");
	Biblioteca b3 = Biblioteca("C", "A","F");
	assert(b1.getTitlu() == "A");
	b1.setTitlu("C");
	assert(b1.getTitlu() == "C");
	assert(b2.getStatus() == "D");

	std::cout << "Tests passed! \n";

}

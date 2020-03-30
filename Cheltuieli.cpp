#include "Cheltuieli.h"
#include <assert.h>
Produs::Produs()
{

}
Produs::Produs(std::string n, Data d,int p)
{
	this->nume = n;
	this->data.setZi = d.getZi;
	this->data.setLuna = d.getLuna;
	this->data.setAn = d.getAn;
	this->pret = p;
}
Produs::Produs(const Produs &c)
{
	this->nume = c.nume;
	this->data = c.data;
	this->pret = c.pret;
}
Produs::~Produs()
{
	this->nume ="";
	this->data.getZi =NULL;
	this->data.getLuna =NULL;
	this->data.getAn =NULL;
	this->pret= NULL;
}

int Produs::getPret()
{
	return this->pret;
}

std::string Produs::getNume()
{
	return this->nume;
}
Data Produs::getData()
{
	return this->data;
}
void Produs::setPret(int p)
{
	this->pret = p;
}
void Produs::setNume(std::string n)
{
	this->nume = n;
}
void Produs::setData(Data d)
{
	this->data= d;
}
void testeD()
{
	Data d1 = Data(12, 3, 2019);
	Data d2 = Data(31, 3, 2020);
	Produs p1 = Produs("lapte",d1, 5);
	Produs p2 = Produs("paine", d2, 3);
	assert(p1.getPret() == 5);
	assert(p2.getNume() == "paine");
	Data d3 = Data(4, 5, 2020);
	p1.setData(d3);
	assert(p1.getData.getZi() == 4 );
	p2.setPret(4);
	assert(p2.getPret() == 4);
	std::cout << "Teste din clasa...\n";
}
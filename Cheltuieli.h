#include <string.h>
#include <iostream>

#include"Data.h"

class Produs {
private:
	int pret;
	std::string nume;
	Data data;
public:
	Produs();
	Produs(std::string nume, Data data, int pret);
	Produs(const Produs &p);
	~Produs();
	int getPret();
	std::string getNume();
	Data getData();
	void setPret(int p);
	void setNume(std::string n);
	void setData(Data d);
};
void testeD();
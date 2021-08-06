#include "Bank.h"

std::string Bank::createIBAN()
{
	//Extins ca sa fie iban unic.
	std::string iban = "123";
	return iban;
}

Bank::Bank()
{
}

Bank::~Bank()
{
	m_ConturiBancare.clear();
}

void Bank::adaugareCont()
{
	system("CLS");
	std::cout << " Itroduceti Numele Utilizatorului" << std::endl;
	std::string nume;
	std::cin >> nume;
	std::cout << " Itroduceti Prenumele Utilizatorului" << std::endl;
	std::string prenume;
	std::cin >> prenume;
	std::string IBAN = createIBAN();
	ContBancar* cont = new ContBancar(nume, prenume, IBAN);
	m_ConturiBancare.push_back(cont);
	std::cout << "1->pentru crearea a unui cont\n";
	std::cout << "2->pentru meniul principal\n";
	char optiune;
	std::cin >> optiune;
	switch (optiune)
	{
	case '1':
		adaugareCont();

	default:
		break;
	}

}
void Bank::vizualizareConturi()
{
	std::cout << "Numarul de conturi in banca este :" << m_ConturiBancare.size() << std::endl;
	for (int i=0; i < m_ConturiBancare.size(); i++)
	{
		std::cout << "Contul" << i+1 << " " << m_ConturiBancare[i]-> getNume();
	}


}

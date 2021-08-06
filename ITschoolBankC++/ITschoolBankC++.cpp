// ITschoolBankC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Bank.h"

int main()
{
	//instantam o banca.
	Bank* itSchoolBank = new Bank();
	bool isRunning = true;
	do
	{
		system("CLS");
		std::cout << "Meniu principal\n";

		std::cout << "1-> Adaugare Cont\n";
		std::cout << "2->Vizualizare Conturi\n";
		std::cout << "3->Modificare Conturi\n";
		std::cout << "9->Exit\n";
		std::cout << "Introduceti optiunea : \n";
		char optiune;
		std::cin >> optiune;
		switch (optiune)
		{
		case '1':
			system("CLS");
			itSchoolBank->adaugareCont();
		case '2':
			itSchoolBank->vizualizareConturi();
		case'9':
			std::cout << "Thank You\n";
		default:
			system("CLS");
			std::cout << "Optiunea nu este valida\n";
			break;
		}
		while (isRunning);


	}
	
	

	//chemam ot test adaugare cont.
	itSchoolBank->adaugareCont();
	itSchoolBank->vizualizareConturi();


	delete itSchoolBank;




	


}

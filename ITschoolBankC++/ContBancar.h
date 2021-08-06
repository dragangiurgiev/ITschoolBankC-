#pragma once
#include<string>
enum class TIP_CONT
{
	CONT_RON, CONT_EURO, CONT_DOLAR

};




class ContBancar
{
private:
	//nume,prenume,sold,tip de cont(valuta si lei) IBAN
	std::string nume;
	std::string prenume;
	int sold;
	TIP_CONT eTipCont;
	std::string IBAN;
public:
	ContBancar(std::string nume, std::string prenume, std::string IBAN);
	inline std::string getNume() {	return nume;}
	inline std::string getPrenume() { return prenume;}
	inline int getSold() { return sold; }
	inline std::string getIBAN() { return IBAN; }
	inline void setcSoldValue(int value) { sold = value; }

	~ContBancar();

};


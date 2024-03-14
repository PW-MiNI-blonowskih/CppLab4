#pragma once
#include "piksel.h"
#include <iostream>

class Obraz
{
	int wiersze; // Ilo�� wierszy obrazka
	int kolumny; // Ilo�� kolumn obrazka
	Piksel*** obrazek; // Wska�nik na dwuwymiarow� tablic� wska�nik�w do pikseli

public:
	// Etap 2
	//Konstruktor - 2.0p
	Obraz(int wiersze = 0, int kolumny = 0);
	//Destruktor - 1.0p
	~Obraz();
	//Operator wyj�cia - 1.0p
	friend std::ostream& operator<<(std::ostream& out, const Obraz& obraz);
	//Operator funkcyjny - 1.0
	void operator()(int row, int col, int r, int g, int b);
	//Konstruktor kopiuj�cy - 1.0p
	Obraz(const Obraz& obraz);
};
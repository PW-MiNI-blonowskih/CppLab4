#pragma once
#include "piksel.h"
#include <iostream>

class obraz
{
	int wiersze; // Ilo�� wierszy obrazka
	int kolumny; // Ilo�� kolumn obrazka
	piksel*** obrazek; // Wska�nik na dwuwymiarow� tablic� wska�nik�w do pikseli

public:
	// Etap 2
	//Konstruktor - 2.0p
	obraz(int wiersze = 0, int kolumny = 0);
	//Destruktor - 1.0p
	~obraz();
	//Operator wyj�cia - 1.0p

	//Operator funkcyjny - 1.0

	//Konstruktor kopiuj�cy - 1.0p

};
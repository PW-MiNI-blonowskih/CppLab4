#pragma once
#include "piksel.h"
#include <iostream>

class obraz
{
	int wiersze; // Iloœæ wierszy obrazka
	int kolumny; // Iloœæ kolumn obrazka
	piksel*** obrazek; // WskaŸnik na dwuwymiarow¹ tablicê wskaŸników do pikseli

public:
	// Etap 2
	//Konstruktor - 2.0p
	obraz(int wiersze = 0, int kolumny = 0);
	//Destruktor - 1.0p
	~obraz();
	//Operator wyjœcia - 1.0p

	//Operator funkcyjny - 1.0

	//Konstruktor kopiuj¹cy - 1.0p

};
#pragma once
#include <iostream>
#include "kolor.h"

class piksel
{
	int* rgb;
	char znak;

public:

	//Etap 1
	//Konstruktor, destruktor - 1.0p
	piksel(int r = 0, int g = 0, int b = 0);
	~piksel();

	//Operator wyjœcia - 1.5p
	friend std::ostream& operator << (std::ostream&, const piksel&);

	//Operator[] - 0.5p

	//Operatory++-- - 1.0p
	
};
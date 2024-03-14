#pragma once
#include <iostream>
#include "kolor.h"

class Piksel
{
	int* rgb;
	char znak;

public:

	//Etap 1
	//Konstruktor, destruktor - 1.0p
	Piksel(int r = 0, int g = 0, int b = 0);
	~Piksel();

	//Operator wyj�cia - 1.5p
	friend std::ostream& operator<<(std::ostream&, const Piksel&);

	//Operator[] - 0.5p
	int& operator[](int index);

	//Operatory++-- - 1.0p
	Piksel& operator++();
	Piksel operator--(int);
};
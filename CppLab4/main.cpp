#include <iostream>
#include "piksel.h"
#include "obraz.h"

int main()
{
	std::cout << "===================== ETAP 1 =====================" << std::endl;

	Piksel p1;
	Piksel p2(0, 255, 0);
	Piksel* p3 = new Piksel(200, 100, 255);
	std::cout << "Kilak roznych pikseli:" << std::endl;
	std::cout << ' ' << p1 << ' ' << p2 << ' ' << *p3 << std::endl;
	std::cout << std::endl;
	std::cout << "Przekroj wszystkich dostepnych barw:" << std::endl;
	for (int i = 0; i < 255; i += 50)
	{
		for (int j = 0; j < 255; j += 50)
		{
			for (int k = 0; k < 255; k += 50)
			{
				Piksel p4(i, j, k);
				std::cout << p4;
			}
		}
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "Zmiana koloru:" << std::endl;
	std::cout << p1 << " -> ";
	p1[0] = 110;
	p1[1] = 220;
	std::cout << p1 << std::endl;

	std::cout << std::endl;
	std::cout << "Dzialanie operatora inkrementacji:" << std::endl;
	Piksel p5(125, 126, 127);
	std::cout << p5; 
	std::cout << ++p5;
	std::cout << ++p5;
	std::cout << ++p5 << std::endl;
	std::cout << p5 << p5-- << p5-- << p5-- << std::endl;
	std::cout << std::endl;

	std::cout << "===================== ETAP 2 =====================" << std::endl;

	Obraz ob1;
	std::cout << "Obraz 1 (pusty):" << std::endl;
	std::cout << ob1 << std::endl;
	Obraz *ob2 = new Obraz(8, 17);
	std::cout << "Obraz 2 (szary):" << std::endl;
	std::cout << *ob2 << std::endl;

	std::cout << "Zmiana koloru piksela (3, 8) na zolty:" << std::endl;
	(*ob2)(3, 8, 255, 255, 0);
	std::cout << *ob2 << std::endl;

	std::cout << "Wpisanie czerwonej litery A:" << std::endl;
	(*ob2)(3, 8, 0, 0, 0); (*ob2)(1, 8, 255, 0, 0);
	(*ob2)(2, 7, 255, 0, 0); (*ob2)(2, 9, 255, 0, 0);
	(*ob2)(3, 6, 255, 0, 0); (*ob2)(3, 10, 255, 0, 0);
	(*ob2)(4, 5, 255, 0, 0); (*ob2)(4, 11, 255, 0, 0);
	(*ob2)(4, 6, 255, 0, 0); (*ob2)(4, 7, 255, 0, 0);
	(*ob2)(4, 8, 255, 0, 0); (*ob2)(4, 9, 255, 0, 0);
	(*ob2)(4, 10, 255, 0, 0);
	(*ob2)(5, 4, 255, 0, 0); (*ob2)(5, 12, 255, 0, 0);
	(*ob2)(6, 3, 255, 0, 0); (*ob2)(6, 13, 255, 0, 0);
	std::cout << *ob2 << std::endl;

	Obraz ob3(*ob2);
	std::cout << "Kopiowanie obrazu:" << std::endl;
	std::cout << ob3 << std::endl;
	ob3(1, 8, 255, 0, 255);
	ob3(2, 7, 255, 0, 255); ob3(2, 9, 255, 0, 255);
	ob3(3, 6, 255, 0, 255); ob3(3, 10, 255, 0, 255);
	ob3(4, 5, 255, 0, 255); ob3(4, 11, 255, 0, 255);
	ob3(4, 6, 255, 0, 255); ob3(4, 7, 255, 0, 255);
	ob3(4, 8, 255, 0, 255); ob3(4, 9, 255, 0, 255);
	ob3(4, 10, 255, 0, 255);
	ob3(5, 4, 255, 0, 255); ob3(5, 12, 255, 0, 255);
	ob3(6, 3, 255, 0, 255); ob3(6, 13, 255, 0, 255);
	std::cout << "I jego modyfikacja:" << std::endl;
	std::cout << ob3 << std::endl;

	std::cout << " Oryginalny:" << std::endl;
	std::cout << *ob2 << std::endl;

	delete ob2;

	delete p3;
	return 0;
}

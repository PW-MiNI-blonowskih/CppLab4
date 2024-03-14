#include "obraz.h"

Obraz::Obraz(int wiersze, int kolumny):
	wiersze{wiersze}, kolumny{kolumny}
{
	if (wiersze == 0 || kolumny == 0) {
		obrazek = nullptr;
		return;
	}

	obrazek = new (std::nothrow) Piksel**[wiersze];
	for (int i = 0; i < wiersze; i++) {
		obrazek[i] = new (std::nothrow) Piksel*[kolumny];
		for (int j = 0; j < kolumny; j++) {
			obrazek[i][j] = new (std::nothrow) Piksel;
		}
	}
}

Obraz::~Obraz() {
	for (int i = 0; i < wiersze; i++) {
		for (int j = 0; j < kolumny; j++) {
			delete obrazek[i][j];
		}
		delete[] obrazek[i];
	}
	delete[] obrazek;
}

std::ostream& operator<<(std::ostream& out, const Obraz& obraz) {
	for (int i = 0; i < obraz.wiersze; ++i) {
		for (int j = 0; j < obraz.kolumny; ++j) {
			out << *(obraz.obrazek[i][j]);
		}
		out << std::endl;
	}
	return out;
}

void Obraz::operator()(int row, int col, int r, int g, int b) {
	(*(obrazek[row][col]))[0] = r;
	(*(obrazek[row][col]))[1] = g;
	(*(obrazek[row][col]))[2] = b;
}

Obraz::Obraz(const Obraz& obraz) : Obraz{ obraz.wiersze, obraz.kolumny } {
	for (int i = 0; i < wiersze; ++i) {
		for (int j = 0; j < kolumny; ++j) {
			obrazek[i][j] = new (std::nothrow) Piksel{
				(*(obraz.obrazek[i][j]))[0],
				(*(obraz.obrazek[i][j]))[1],
				(*(obraz.obrazek[i][j]))[2]
			};
		}
	}
}
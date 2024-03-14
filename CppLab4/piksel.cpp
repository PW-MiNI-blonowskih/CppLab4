#include "piksel.h"

Piksel::Piksel(int r, int g, int b) {
	rgb = new (std::nothrow) int[3];
	if (rgb != nullptr) {
		rgb[0] = r;
		rgb[1] = g;
		rgb[2] = b;
	}
	znak = 'O';
}

Piksel::~Piksel() {
	delete[] rgb;
}

std::ostream& operator<< (std::ostream& out, const Piksel& px) {
	int red   = px.rgb[0] < 128 ? 0 : 255;
	int green = px.rgb[1] < 128 ? 0 : 255;
	int blue  = px.rgb[2] < 128 ? 0 : 255;

	int colorCode = (red / 255) * 4 + (green / 255) * 2 + (blue / 255);

	switch (colorCode) {
	case 0:	setSzary();		out << "O"; setDomyslny(); break;
	case 1: setNiebieski();	out << "O"; setDomyslny(); break;
	case 2: setZielony();	out << "O"; setDomyslny(); break;
	case 3: setTurkusowy(); out << "O"; setDomyslny(); break;
	case 4: setCzerwony();	out << "O"; setDomyslny(); break;
	case 5: setFioletowy(); out << "O"; setDomyslny(); break;
	case 6: setZolty();		out << "O"; setDomyslny(); break;
	case 7: setBialy();		out << "O"; setDomyslny(); break;
	default:
		out << "cos sie wyjebalo w switchu";
		break;
	}

	return out;
}

int& Piksel::operator[] (int index) {
	return rgb[index];
}

Piksel& Piksel::operator++() {
	++(rgb[0]); ++(rgb[1]); ++(rgb[2]);
	return *this;
}

Piksel Piksel::operator--(int) {
	Piksel temp{ rgb[0], rgb[1], rgb[2] };
	(rgb[0])--; (rgb[1])--; (rgb[2])--;
	return temp;
}
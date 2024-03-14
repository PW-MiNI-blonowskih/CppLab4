#include "kolor.h"

HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

void setCzerwony() { SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY); }   //czerwony
void setZielony() { SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY); }  //zielony
void setNiebieski() { SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY); } //niebieski
void setZolty() { SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY); }      //��ty
void setFioletowy() { SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY); }   //Fioletowy
void setTurkusowy() { SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY); } //Turkusowy
void setSzary() { SetConsoleTextAttribute(hOut, 0x0008 | FOREGROUND_INTENSITY); }          //Szary
void setBialy() { SetConsoleTextAttribute(hOut, 0x0007 | FOREGROUND_INTENSITY); }          //Bia�y
void setDomyslny() { SetConsoleTextAttribute(hOut, 0x0007); }  //Domy�lny
#include "card.h"
#include <iostream>

using namespace std;

Card::Card(){}
Card::Card(int j, char s) {
	rank = j;
	suit = s;
}

/*
ostream& operator<<(ostream& os, const Card& c) {
	os << c;
	return os;
}*/
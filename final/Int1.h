#pragma once
// Int1.h

#ifndef GUARD_Int1_h
#define GUARD_Int1_h

#include <iostream>

#include "Core.h"

using namespace std;

class Int1 : public Core {
public:
	Int1() : toeic(0) {};
	Int1(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double toeic; // 졸업 논문
	Int1* clone() const { return new Int1(*this); }
};

#endif

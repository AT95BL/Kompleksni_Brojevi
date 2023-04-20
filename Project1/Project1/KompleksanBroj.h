#pragma once

#ifndef KompleksanBroj_h
#define KompleksanBroj_h

#include <iostream>
#include <cmath>

class KompleksanBroj {
	
public:

	KompleksanBroj();
	KompleksanBroj(const double&, const double&);
	KompleksanBroj(const double&);
	KompleksanBroj(const char&);
	KompleksanBroj(const std::string&);
	
	friend KompleksanBroj operator+(const KompleksanBroj&, const KompleksanBroj&);
	friend KompleksanBroj operator+(const KompleksanBroj&, const double&);
	friend KompleksanBroj operator+(const double&, const KompleksanBroj&);
	friend KompleksanBroj operator+(const KompleksanBroj&, const char&);
	friend KompleksanBroj operator+(const char&, const KompleksanBroj&);
	friend KompleksanBroj operator+(const KompleksanBroj&, const std::string&);
	friend KompleksanBroj operator+(const std::string&, const KompleksanBroj&);

	friend KompleksanBroj operator-(const KompleksanBroj&, const KompleksanBroj&);
	friend KompleksanBroj operator-(const KompleksanBroj&, const double&);
	friend KompleksanBroj operator-(const double&, const KompleksanBroj&);
	friend KompleksanBroj operator-(const KompleksanBroj&, const char&);
	friend KompleksanBroj operator-(const char&, const KompleksanBroj&);
	friend KompleksanBroj operator-(const KompleksanBroj&, const std::string&);
	friend KompleksanBroj operator-(const std::string&, const KompleksanBroj&);

	friend KompleksanBroj operator*(const KompleksanBroj&, const KompleksanBroj&);
	friend KompleksanBroj operator*(const KompleksanBroj&, const double&);
	friend KompleksanBroj operator*(const double&, const KompleksanBroj&);
	friend KompleksanBroj operator*(const KompleksanBroj&, const char&);
	friend KompleksanBroj operator*(const char&, const KompleksanBroj&);
	friend KompleksanBroj operator*(const KompleksanBroj&, const std::string&);
	friend KompleksanBroj operator*(const std::string&, const KompleksanBroj&);

	friend KompleksanBroj operator/(const KompleksanBroj&, const KompleksanBroj&);
	friend KompleksanBroj operator/(const KompleksanBroj&, const double&);
	friend KompleksanBroj operator/(const double&, const KompleksanBroj&);
	friend KompleksanBroj operator/(const KompleksanBroj&, const char&);
	friend KompleksanBroj operator/(const char&, const KompleksanBroj&);
	friend KompleksanBroj operator/(const KompleksanBroj&, const std::string&);
	friend KompleksanBroj operator/(const std::string&, const KompleksanBroj&);

	friend std::ostream& operator<<(std::ostream&, const KompleksanBroj&);
	friend std::istream& operator>>(std::istream&, /*const* nece ici sa const.. */ KompleksanBroj&);

	double getX();
	void setX(const double&);

	double getY();
	void setY(const double&);

	double moduo();

	KompleksanBroj konjugovan();

	double argument();

private:

	double x; 
	double y;
};


#endif KompleksanBroj_h// !KompleksanBroj
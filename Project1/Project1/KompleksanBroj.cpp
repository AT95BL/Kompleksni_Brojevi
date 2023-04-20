#include "KompleksanBroj.h"

// default Constructor
KompleksanBroj::KompleksanBroj()
{
	this->x = 0;
	this->y = 0;
}

// Constructors
KompleksanBroj::KompleksanBroj(const double& x, const double& y)
{
	this->x = x;
	this->y = y;
}


KompleksanBroj::KompleksanBroj(const double& var)
{
	this->x = var;
	this->y = 0;
}


KompleksanBroj::KompleksanBroj(const char& var)
{	
	if (var != 'i' && var != 'j')
	{
		std::cout << "Exception will be thrown!" << std::endl;
		exit(-1);
	}

	this->x = 0;
	this->y = 1;
}

KompleksanBroj::KompleksanBroj(const std::string& str)
{
	if (str == "i")
	{
		this->x = 0;
		this->y = 1;
	}

	else if (str == "-i")
	{
		this->x = 0;
		this->y = -1;
	}

	else if (str == "j")
	{
		this->x = 0;
		this->y = 1;
	}

	else if (str == "-j")
	{
		this->x = 0;
		this->y = -1;
	}
}

// operator+
KompleksanBroj operator+(const KompleksanBroj& z1, const KompleksanBroj& z2)
{
	return KompleksanBroj(z1.x + z2.x, z1.y + z2.y);
}


KompleksanBroj operator+(const KompleksanBroj& z1, const double& var)
{
	return z1 + KompleksanBroj(var);
}


KompleksanBroj operator+(const double& var, const KompleksanBroj& z1)
{
	return KompleksanBroj(var) + z1;
}

KompleksanBroj operator+(const KompleksanBroj& z1, const char& c)
{
	return z1 + KompleksanBroj(c);
}


KompleksanBroj operator+(const char& c, const KompleksanBroj& z1)
{
	return KompleksanBroj(c) + z1;
}


KompleksanBroj operator+(const KompleksanBroj& z1, const std::string& str)
{
	return z1 + KompleksanBroj(str);
}

KompleksanBroj operator+(const std::string& str, const KompleksanBroj& z1)
{
	return KompleksanBroj(str) + z1;
}


// operator-
KompleksanBroj operator-(const KompleksanBroj& z1, const KompleksanBroj& z2)
{
	return z1 + KompleksanBroj(-1 * z2.x, -1 * z2.y);
}


KompleksanBroj operator-(const KompleksanBroj& z1, const double& var)
{
	return  z1 + KompleksanBroj(-1 * var);
}


KompleksanBroj operator-(const double& var, const KompleksanBroj& z1)
{
	return  KompleksanBroj(-1 * var) + z1;
}


KompleksanBroj operator-(const KompleksanBroj& z1, const char& c)
{
	return z1 - KompleksanBroj(c);
}


KompleksanBroj operator-(const char& c, const KompleksanBroj& z1)
{
	return KompleksanBroj(c) - z1;
}


KompleksanBroj operator-(const KompleksanBroj& z1, const std::string& str)
{
	return z1 - KompleksanBroj(str);
}

KompleksanBroj operator-(const std::string& str, const KompleksanBroj& z1)
{
	return KompleksanBroj(str) - z1;
}

// operator*
KompleksanBroj operator*(const KompleksanBroj& z1, const KompleksanBroj& z2)
{
	return KompleksanBroj(z1.x * z2.x - z1.y * z2.y, z1.x * z2.y + z1.y * z2.x);
}


KompleksanBroj operator*(const KompleksanBroj& z1, const double& var)
{
	return z1 * KompleksanBroj(var);
}


KompleksanBroj operator*(const double& var, const KompleksanBroj& z1)
{
	return KompleksanBroj(var) * z1;
}


KompleksanBroj operator*(const KompleksanBroj& z1, const char& c)
{
	return z1 * KompleksanBroj(c);
}


KompleksanBroj operator*(const char& c, const KompleksanBroj& z1)
{
	return KompleksanBroj(c) * z1;
}


KompleksanBroj operator*(const KompleksanBroj& z1, const std::string& str)
{
	return z1 * KompleksanBroj(str);
}

KompleksanBroj operator*(const std::string& str, const KompleksanBroj& z1)
{
	return KompleksanBroj(str) * z1;
}


// operator/
KompleksanBroj operator/(const KompleksanBroj& z1, const KompleksanBroj& z2)
{
	return KompleksanBroj((z1.x * z2.x + z1.y * z2.y) / (pow(z2.x, 1) + pow(z2.y, 2)), (z2.y * z1.x - z1.x * z2.y) / (pow(z2.x, 2) + pow(z2.y, 2)));
}


KompleksanBroj operator/(const KompleksanBroj& z1, const double& var)
{
	return z1 / KompleksanBroj(var);
}


KompleksanBroj operator/(const double& var, const KompleksanBroj& z1)
{
	return KompleksanBroj(var) / z1;
}


KompleksanBroj operator/(const KompleksanBroj& z1, const char& c)
{
	return z1 / KompleksanBroj(c);
}


KompleksanBroj operator/(const char& c, const KompleksanBroj& z1)
{
	return KompleksanBroj(c) / z1;
}


KompleksanBroj operator/(const KompleksanBroj& z1, const std::string& str)
{
	return z1 / KompleksanBroj(str);
}


KompleksanBroj operator/(const std::string& str, const KompleksanBroj& z1)
{
	return KompleksanBroj(str) / z1;
}


//	operator>>
std::ostream& operator<<(std::ostream& out, const KompleksanBroj& z)
{
	// z = 0
	if (!z.x && !z.y)
		out << 0 << std::endl;

	// z = a + 0i
	else if (z.x && !z.y)
		out << z.x << std::endl;

	// z = 0 + i or z = 0 - i
	else if (!z.x && (z.y == -1 || z.y == 1))
	{
		if (z.y > 0)
			out << "i" << std::endl;
		else
			out << "-i" << std::endl;
	}

	// z = x + i or z = x - i
	else if (z.x && (z.y == -1 || z.y == 1))
	{
		if (z.y > 0)
			out << z.x << " + "/* << z.y */ << "i" << std::endl;
		else
			out << z.x << " - " /* << -1 * z.y */ << "i" << std::endl;
	}

	// z = x + yi or z = x - yi
	else if (z.y > 0)
		out << z.x << " + " << z.y << "i" << std::endl;
	else if (z.y < 0)
		out << z.x << " - " << -1 * z.y << "i" << std::endl;

	return out;
}


// operator<<
std::istream& operator>>(std::istream& input, KompleksanBroj& z)
{
	std::cout << "Unesite realan deo kompleksnog broja: ";
	input >> z.x;
	std::cout << "Unesite imaginaran deo kompleksnog broja: ";
	input >> z.y;

	return input;
}

// getters and setters:
double KompleksanBroj::getX()
{
	return this->x;
}


void KompleksanBroj::setX(const double& var)
{
	this->x = var;
}


double KompleksanBroj::getY()
{
	return this->y;
}


void KompleksanBroj::setY(const double& var)
{
	this->y = var;
}

// moduo
double KompleksanBroj::moduo()
{
	return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

// konjugovanje 
KompleksanBroj KompleksanBroj::konjugovan()
{
	return KompleksanBroj(this->x, -1 * this->y);
}

// argument(ugao)
double KompleksanBroj::argument()
{
	return atan2(-1 * this->y, this->x);
}

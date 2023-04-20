#include "KompleksanBroj.h"

void menu();

int main() {

	menu();
	return 0;
}

void menu() 
{
	std::cout << " ===MENU=== " << std::endl;
	std::cout << " ---------- " << std::endl;
	std::cout << " + " << std::endl;
	std::cout << " - " << std::endl;
	std::cout << " * " << std::endl;
	std::cout << " / " << std::endl;
	std::cout << " ~ " << std::endl; // konjukcija
	std::cout << " a " << std::endl; // argument
	std::cout << " ---------- " << std::endl;
	std::cout << "type '0' for the exit. \n" << std::endl;

	char c;
	KompleksanBroj z1, z2;

	while (true)
	{	
		std::cout << "Operacija: " << std::endl;
		std::cin >> c;

		if (c == '0')
			break;

		std::cout << "Operandi: " << std::endl;
		std::cin >> z1 >> z2;

		if (c == '+')
			std::cout << z1 + z2;

		else if (c == '-')
			std::cout << z1 - z2;

		else if (c == '*')
			std::cout << z1 * z2;

		else if (c == '/')
			std::cout << z1 / z2;

		else if (c == '~')
		{
			std::cout << "Konjugovano kompleksna vrijednost Z1( " << z1 << ") je: " << z1.konjugovan() << std::endl;
			std::cout << "Konjugovano kompleksna vrijednost Z2( " << z2 << ") je: " << z2.konjugovan() << std::endl;
		}

		else if (c == 'a')
		{
			std::cout << "Argument od Z1( " << z1 << " ) je: " << z1.argument() << std::endl;
			std::cout << "Argument od Z2( " << z2 << " ) je: " << z2.argument() << std::endl;
		}
	}
}
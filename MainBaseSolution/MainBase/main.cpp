#include "main.h"
#include <iostream>

class Main
{
public:
    void afficherHelloWorld() const {
        std::cout << "Hello, World!" << std::endl;
    }

	int intVar = 42;
	float floatVar = 3.14f;
	double doubleVar = 2.718281828459045;

	void afficherVariables() const {
		std::cout << "Variables: " << std::endl;
		std::cout << "intVar: " << intVar << std::endl;
		std::cout << "floatVar: " << floatVar << std::endl;
		std::cout << "doubleVar: " << doubleVar << std::endl;
	}

	void calculeAddition() const {
		int a = 5;
		int b = 10;
		
		std::cout << "Entrez un nombre pour 'a' à additioner : " << std::endl;
		std::cin >> a;
		std::cout << "Entrez un nombre pour 'b' à additioner : " << std::endl;
		std::cin >> b;

		int result = a + b;

		std::cout << "Addition de " << a << " et " << b << " est: " << result << std::endl;
	}

	void calculeSoustraction() const {
		int a = 5;
		int b = 10;

		std::cout << "Entrez un nombre pour 'a' à soustraire : " << std::endl;
		std::cin >> a;
		std::cout << "Entrez un nombre pour 'b' pour soustraire 'a' : " << std::endl;
		std::cin >> b;

		int result = a - b;

		std::cout << "Addition de " << a << " et " << b << " est: " << result << std::endl;
	}
};

int main()
{
    Main m;
    m.afficherHelloWorld();
	m.afficherVariables();
	m.calculeAddition();
	m.calculeSoustraction();
    return 0;
}
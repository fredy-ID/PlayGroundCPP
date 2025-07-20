#include "main.h"
#include <iostream>
using namespace std;

// Classe principale avec des méthodes pour diverses opérations
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
        std::cout << "Entrez un nombre pour 'a' : " << std::endl;
        std::cin >> a;
        std::cout << "Entrez un nombre pour 'b' : " << std::endl;
        std::cin >> b;
        int result = a + b;
        std::cout << "Résultat: " << result << std::endl;
    }

    void calculeSoustraction() const {
        int a = 5;
        int b = 10;
        std::cout << "Entrez un nombre pour 'a' : " << std::endl;
        std::cin >> a;
        std::cout << "Entrez un nombre pour 'b' : " << std::endl;
        std::cin >> b;
        int result = a - b;
        std::cout << "Résultat: " << result << std::endl;
    }

    void youDied() const {
        std::cout << "You Died!" << std::endl;
    }
};

// Affiche un message de bienvenue
void welcome()
{
    cout << "Bienvenue dans le programme Main!" << endl;
}
// Affiche un int passé en paramètre
void afficherInt(int valeur) 
{
    std::cout << "Valeur reçue : " << valeur << std::endl;
}

int add(int a, int b)
{
	int result = a + b;
    return result;
}

int main()
{
    welcome();
	int c;
	c = add(5, 10);
	afficherInt(c);

    Main m;

    // Décommentez pour exécuter les méthodes
    // m.afficherHelloWorld();
    // m.afficherVariables();
    // m.calculeAddition();
    // m.calculeSoustraction();
    // m.youDied();

    std::cout << "Affichage avec std::cout" << std::endl;
    cout << "Affichage avec cout grâce à 'using namespace std'" << endl;

    // Classe avec méthode statique
    class ExempleClasse {
    public:
        static void afficherMessage() {
            cout << "Message depuis ExempleClasse" << endl;
        }
    };
    ExempleClasse::afficherMessage();

    // Enumération et comparaison
    enum Couleur { Rouge, Vert, Bleu };
    Couleur maCouleur = Couleur::Rouge;
    if (maCouleur == Couleur::Rouge) {
        cout << "La couleur est Rouge" << endl;
    }

    // Déclaration de variables avec des parenthèses
    int x(10);
    double y(3.14);
    std::string message("Bonjour avec des parenthèses!");

    cout << "x: " << x << ", y: " << y << ", message: " << message << endl;

    system("pause");
    return 0;
}
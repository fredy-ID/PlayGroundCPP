#include "main.h"          // Inclut le fichier d'en-tête principal
#include <iostream>        // Pour std::cout, std::cin, std::endl
#include <string>          // Pour std::string
#include "FunctionsTest.h" // Inclut la déclaration de la classe FunctionsTest

// Utilisation de l'espace de noms std pour simplifier le code
using namespace std;

// Fonctions prototypes (déclarées ici, définies plus loin dans ce fichier)
void welcome();
char getYesNo();

// Classe principale avec des méthodes pour diverses opérations (définie dans main.cpp)
class Main
{
public:
    void afficherHelloWorld() const {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main()
{
    Main M;
    FunctionsTest F_test; // Instanciation de la classe FunctionsTest

    // Appel de la fonction welcome globale
    welcome();

    // Exemple d'utilisation de FunctionsTest
    int c;
    c = F_test.add(5, 10);
    F_test.afficherInt(c);

    // Décommentez pour exécuter les méthodes de F_test
    // F_test.welcome(); // Appel de la méthode welcome de FunctionsTest
    // F_test.afficherVariables();
    // F_test.calculeAddition();
    // F_test.calculeSoustraction();
    // F_test.youDied();

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

    // Appel de la méthode welcome de F_test (maintenant publique)
    F_test.welcome();

    // Appel de la fonction getYesNo globale
    char response = getYesNo();
    // Appel de la surcharge de printMessage de F_test pour un caractère
    F_test.printMessage(response);

    // system("pause") est spécifique à Windows et n'est pas portable.
    // Pour une pause portable, vous pouvez demander une entrée utilisateur.
    cout << "Appuyez sur Entrée pour continuer...";
    cin.ignore(); // Vide le tampon d'entrée
    cin.get();    // Attend une entrée

    return 0;
}

// Définitions des fonctions globales

// Demande à l'utilisateur d'entrer 'o' ou 'n'
char getYesNo()
{
    char response;
    do {
        cout << "Entrez 'o' pour oui ou 'n' pour non : ";
        cin >> response;
        // Convertir en minuscule pour une meilleure robustesse
        response = tolower(response);
    } while (response != 'o' && response != 'n');
    return response;
}

// Affiche un message de bienvenue global
void welcome()
{
    cout << "Bienvenue dans le programme global!" << endl;
}

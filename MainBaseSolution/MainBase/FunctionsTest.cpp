#include "FunctionsTest.h" // Inclut la déclaration de la classe
#include <iostream>        // Nécessaire pour les opérations d'entrée/sortie

// Utilisation de l'espace de noms std pour simplifier le code
using namespace std;

// Implémentation du constructeur (vide pour l'instant)
FunctionsTest::FunctionsTest() {
    // Initialisation si nécessaire
}

// Implémentation des méthodes de la classe FunctionsTest

// Affiche un message de bienvenue
void FunctionsTest::welcome()
{
    cout << "Bienvenue dans le programme FunctionsTest!" << endl;
}

// Affiche un int passé en paramètre
void FunctionsTest::afficherInt(int valeur)
{
    cout << "Valeur reçue (int) : " << valeur << endl;
}

// Affiche un float passé en paramètre
void FunctionsTest::afficherFloat(float valeur)
{
    cout << "Valeur reçue (float) : " << valeur << endl;
}

// Affiche un double passé en paramètre
void FunctionsTest::afficherDouble(double valeur)
{
    cout << "Valeur reçue (double) : " << valeur << endl;
}

// Affiche les variables membres
void FunctionsTest::afficherVariables() const {
    std::cout << "Variables de FunctionsTest: " << std::endl;
    std::cout << "intVar: " << intVar << std::endl;
    std::cout << "floatVar: " << floatVar << std::endl;
    std::cout << "doubleVar: " << doubleVar << std::endl;
}

// Calcule et affiche une addition avec saisie utilisateur
void FunctionsTest::calculeAddition() {
    int a, b; // Déclarer les variables ici
    std::cout << "Entrez un nombre pour 'a' : ";
    std::cin >> a;
    std::cout << "Entrez un nombre pour 'b' : ";
    std::cin >> b;
    int result = a + b;
    std::cout << "Résultat de l'addition: " << result << std::endl;
}

// Retourne la somme de deux entiers
int FunctionsTest::add(int a, int b)
{
    return a + b;
}

// Calcule et affiche une soustraction avec saisie utilisateur
void FunctionsTest::calculeSoustraction() {
    int a, b; // Déclarer les variables ici
    std::cout << "Entrez un nombre pour 'a' : ";
    std::cin >> a;
    std::cout << "Entrez un nombre pour 'b' : ";
    std::cin >> b;
    int result = a - b;
    std::cout << "Résultat de la soustraction: " << result << std::endl;
}

// Affiche un message "You Died!"
void FunctionsTest::youDied() {
    std::cout << "You Died!" << std::endl;
}

// Surcharge de printMessage pour std::string
void FunctionsTest::printMessage(const std::string& message) {
    std::cout << "Message (string): " << message << std::endl;
}

// Surcharge de printMessage pour char
void FunctionsTest::printMessage(char character) {
    std::cout << "Caractère: " << character << std::endl;
}

#pragma once

#ifndef FUNCTIONSTEST_H
#define FUNCTIONSTEST_H

#include <string> // Nécessaire pour std::string
#include <iostream> // Nécessaire pour std::cout, std::cin

// Déclaration de la classe FunctionsTest
class FunctionsTest
{
private:
    // Variables membres privées
    int intVar = 42;
    float floatVar = 3.14f;
    double doubleVar = 2.718281828459045;

public:
    // Constructeur (optionnel, mais bonne pratique)
    FunctionsTest();

    // Méthodes publiques
    void welcome();
    void afficherInt(int valeur);
    void afficherFloat(float valeur);
    void afficherDouble(double valeur);
    void afficherVariables() const; // const car elle ne modifie pas les membres de la classe

    void calculeAddition();
    int add(int a, int b);
    void calculeSoustraction();
    void youDied();

    // Surcharge de la méthode printMessage
    void printMessage(const std::string& message);
    void printMessage(char character);
};

#endif // FUNCTIONSTEST_H

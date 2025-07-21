#include "OperatorsTest.h"
#include <iostream>

using namespace std;


void OperatorsTest::welcome()
{
	cout << "Bienvenue dans le programme OperatorsTest!" << endl;
}

void OperatorsTest::test1()
{
    // Déclarons une variable entière 'i' et initialisons-la pour les exemples.
    int i = 5;

    // --- Expressions d'addition ---
    std::cout << "--- Expressions d'addition ---" << std::endl;
    std::cout << "Valeur initiale de i: " << i << std::endl;

    // Équivalent à "i = i + 3;"
    i = i + 3;
    std::cout << "Après i = i + 3;: " << i << std::endl; // i est maintenant 8

    // Réinitialisons i pour le prochain exemple
    i = 5;

    // Équivalent à "i += 3;" (opérateur d'assignation composée)
    i += 3;
    std::cout << "Après i += 3;: " << i << std::endl; // i est maintenant 8
    std::cout << std::endl;

    // --- Post-incrémentation ---
    std::cout << "--- Post-incrémentation ---" << std::endl;

    // Réinitialisons i pour l'exemple de post-incrémentation
    i = 10;
    std::cout << "Valeur initiale de i: " << i << std::endl;

    // i++ : utilise d'abord la valeur de i, puis l'incrémente de 1.
    // Pour démontrer cela, nous allons assigner la valeur de i++ à une autre variable.
    int j = i++;
    // À ce stade:
    // - j a la valeur que i avait AVANT l'incrémentation (donc 10).
    // - i a été incrémenté APRES avoir été utilisé dans l'expression (donc 11).

    std::cout << "Après int j = i++;" << std::endl;
    std::cout << "La valeur de j est: " << j << std::endl; // Affichera 10
    std::cout << "La nouvelle valeur de i est: " << i << std::endl; // Affichera 11
    std::cout << std::endl;

    // Un autre exemple de post-incrémentation directement dans un affichage :
    i = 15;
    std::cout << "Nouvelle valeur initiale de i: " << i << std::endl;
    std::cout << "Affichage de i++ (la valeur affichée est l'ancienne valeur de i): " << i++ << std::endl; // Affiche 15
    std::cout << "La valeur de i après l'affichage est (elle a été incrémentée): " << i << std::endl; // Affiche 16

    return;
}

void OperatorsTest::test2()
{
    // Déclaration et initialisation de la variable 'i'
    int i = 1;
    std::cout << "Valeur initiale de i: " << i << std::endl; // i est 1

    // --- Opérateurs d'affectation composée (Compound Assignment Operators) ---

    // i += 1; // i est 2
    // Équivalent à i = i + 1;
    i += 1;
    std::cout << "Après i += 1;: i est " << i << std::endl; // i est maintenant 2

    // i -= 1; // i était 2, maintenant i est 1
    // Équivalent à i = i - 1;
    i -= 1;
    std::cout << "Après i -= 1;: i était 2, maintenant i est " << i << std::endl; // i est maintenant 1

    // i *= 6; // i était 1, maintenant i est 6
    // Équivalent à i = i * 6;
    i *= 6;
    std::cout << "Après i *= 6;: i était 1, maintenant i est " << i << std::endl; // i est maintenant 6

    // i /= 3; // i était 6, maintenant i est 2
    // Équivalent à i = i / 3;
    i /= 3;
    std::cout << "Après i /= 3;: i était 6, maintenant i est " << i << std::endl; // i est maintenant 2

    // i %= 1; // i était 2, maintenant i est 0
    // Équivalent à i = i % 1; (le reste de la division de i par 1)
    // Tout nombre entier modulo 1 donne 0.
    i %= 1;
    std::cout << "Après i %= 1;: i était 2, maintenant i est " << i << std::endl; // i est maintenant 0
    std::cout << std::endl;

    // --- Pré-incrémentation (Pre-increment) ---
    std::cout << "--- Pré-incrémentation (Pre-increment) ---" << std::endl;

    // Réinitialisons i pour cet exemple
    i = 10;
    std::cout << "Valeur initiale de i pour la pré-incrémentation: " << i << std::endl;

    // ++i : Incrémente d'abord i de 1, puis utilise le résultat.
    // "First increments i by 1"
    // "Returns the result"
    int k = ++i;
    // À ce stade:
    // - i est d'abord incrémenté (donc 11).
    // - k reçoit la nouvelle valeur de i (donc 11).

    std::cout << "Après int k = ++i;" << std::endl;
    std::cout << "La valeur de k est: " << k << std::endl; // Affichera 11
    std::cout << "La nouvelle valeur de i est: " << i << std::endl; // Affichera 11
    std::cout << std::endl;

    // Un autre exemple de pré-incrémentation directement dans un affichage :
    i = 15;
    std::cout << "Nouvelle valeur initiale de i: " << i << std::endl;
    std::cout << "Affichage de ++i (la valeur affichée est la nouvelle valeur de i): " << ++i << std::endl; // Affiche 16
    std::cout << "La valeur de i après l'affichage est (elle a été incrémentée): " << i << std::endl; // Affiche 16

    return;
}
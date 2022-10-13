/*
 * Curso: Integracion con Git y GitHub en Visual Studio
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

// Escribe un programa que solicite al usuario
// dos numeros enteros e indique
// si el primer numero es mayor (o no) que el segundo

#include <iostream>
using namespace std;

int main() {

	int numero1, numero2;

	cout << "Introduce el primer numero entero: ";
	cin >> numero1;

	cout << "Introduce el segundo numero entero: ";
	cin >> numero2;

	if (numero1 > numero2)
		cout << "El primer numero es mayor que el segundo." << endl;
	else
		cout << "El primer numero NO es mayor que el segundo." << endl;

	return 0;
}
#include<iostream>

#include<cmath>

using namespace std;

int main () {

		float confianza, exito, fracaso, error;

	int poblacion, mFinita;

	string respuesta;

	/*

	confianza = nivel de confianza (%)

	exito = probabilidad de exito (%)

	fracaso = probabilidad de fracaso (%)

	error = nivel de error (%)

	poblacion = poblacion

	mFinita = muestra finita

	respuesta = respuesta de la pregunta para el bucle

	*/

	cout << "Bienvenido a \"Estadistica-inador\"!" << endl;

	do {

		

	cout << "Introduce la población: "; cin >> poblacion;

	cout << "Introduce el nivel de confianza: "; cin >> confianza;

	cout << "introduce la probabilidad de exito: "; cin >> exito;

	cout << "Introduce la probabilidad de fracaso: "; cin >> fracaso;

	cout << "Introduce el nivel de error: "; cin >> error;

	

	mFinita = (pow(confianza, 2) * exito * fracaso * poblacion)/(pow(error, 2) * (poblacion - 1) + (pow(confianza, 2) * exito * fracaso)) + 0.5;

	

	cout << "Tu muestra finita es de: " << mFinita << endl;

	cout << "\nRepetir? (si/no) " ; cin >> respuesta;

		

	}

	while ( respuesta == "si" );

	

cout << "Gracias por usar la apliación \"Estadistica-inador\".";

}

//
// Created by Valentina on 8/5/2020.
//

#include "utils.h"

string PALABRAS[] = { "monopatin",
                      "auto",
                      "moto",
                      "camion",
                      "cuatriciclo",
                      "barco",
                      "bicicleta",
                      "avioneta",
                      "patineta",
                      "avion" };

int CANT_PALABRAS = (PALABRAS->length() + 1);

string elegirPalabraAleatoria() {
    srand(time(NULL));
    int random = rand() % (CANT_PALABRAS - 1);
    return PALABRAS[random];
}

int pedirVidas() {
    int vidas;
    cout << "Ingrese la cantidad de vidas que desea: ";
    cin >> vidas;
    return vidas;
}

string pedirNombre() {
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    return nombre;
}
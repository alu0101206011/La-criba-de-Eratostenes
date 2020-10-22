//
// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Computabilidad de algoritmia
//
// @author Anabel Díaz Labrador
// @date 10 Sep 2020
// @brief Programa que realiza un antiguo método para hallar números primos. 
// @email alu0101206011@ull.edu.es
// Versions: Vector stl de structs
//
// @see https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
// 
// g++ -std=c++17 -g -Wall -o erathostenes erathostenes.cc 
//

#include <iostream>
#include <vector>

#include "erathostenes.h"


// Busca el proximo numero a true
void Sieve (const int kSize, std::vector<Nodo> &list) {
  for(unsigned actual_number = 1; actual_number < list.size(); actual_number++) //Cambiar la i por actual_number
    if(list[actual_number].esprimo == true) {
      Remove(list[actual_number].num, list, kSize);
      Delete(list);
    }
}

// Marca a false multiplos del primo elegido sumandose a si mismo
void Remove (const int kPrimo, std::vector<Nodo> &list, const int kSize) {    
  int aux = kPrimo * 2; 
  while (aux <= kSize) {
    for (unsigned actual_number = 0; actual_number < list.size(); actual_number++)
      if(aux == list[actual_number].num) {
        list[actual_number].esprimo = false;
      }
    aux += kPrimo; 
  }
}

// Elimina multiplos del vector cambiando su tamaño
void Delete (std::vector<Nodo> &list) {
  for(unsigned actual_number = 0; actual_number < list.size(); actual_number++) 
    if (list[actual_number].esprimo == false) {
      list.erase(list.begin() + actual_number);
      --actual_number;  // Una vez borra el elemento comprueba la misma actual_number
    }
}

void Write (std::vector<Nodo> list) {
  for (unsigned actual_number = 0; actual_number < list.size(); actual_number++) {
    std::cout << list[actual_number].num << "  "; 
  }
  std::cout << "\n";
}

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
// g++ -std=c++17 -g -Wall -o erathostenes main_erathostenes.cc erathostenes.cc
//



#include <iostream>
#include <vector>

#include "erathostenes.h"


int main(int argc, char *argv[]) {
  if (argv[1] != NULL) {
    const int kSize = atoi(argv[1]);
    if ((std::string)argv[1] == "--help" || (std::string)argv[1] == "-h") {
      std::cerr << "Usage: " << argv[0] << " [NATURAL NUMBER] or [OPTION]"
                << "\nFor OPTION:\n"
                << "\t-h,--help\t\tShow this help message\n";
      return 0;
    }
    if (((int)atoi(argv[1])) && (argc <= 2)) {
      if (kSize < 2) {
        std::cout << "El valor introducido no es válido. " 
                  << "Introduzca un número natural.\n"
                  << "Escriba ./erathostenes --help para mas info\n";
      } else {       
        std::vector<Nodo> list(kSize);
        for(unsigned actual_number = 0; actual_number < list.size(); actual_number++) {
          list[actual_number].num = actual_number + 1;
          list[actual_number].esprimo = true;
        }
        Sieve(kSize, list);
        //Delete(list);
        list.erase(list.begin());  //Elimino el número 1
        Write(list);
      }
    } else
      std::cout << "El valor introducido no es válido. " 
                << "Introduzca un número natural.\n"
                << "Escriba ./erathostenes --help para mas info\n";
    std::cout << "\n";
  } else 
    std::cout << "Por favor ingrese un número natural.\n"
              << "Escriba ./erathostenes --help para mas info\n";

  return 0;
}



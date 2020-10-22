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
struct Nodo {
   int num;
   bool esprimo;
};  //es mas interesante si lo usas como un objeto

void Sieve(const int kSize, std::vector<Nodo> &list); 
void Remove (const int kPrimo, std::vector<Nodo> &list, const int kSize);
void Delete(std::vector<Nodo> &list);
void Write (std::vector<Nodo> list);


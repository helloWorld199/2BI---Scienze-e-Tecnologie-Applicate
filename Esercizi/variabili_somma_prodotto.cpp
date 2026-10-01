 
#include <iostream>

int main()
{
   int v1, v2, v3, v4, v5;
  
   
   std::cout << "\ninserisci valore variabile 1: ";
   std::cin >> v1;
   std::cout << "\ninserisci valore variabile 2: ";
   std::cin >> v2;
   std::cout << "\ninserisci valore variabile 3: ";
   std::cin >> v3;
   std::cout << "\ninserisci valore variabile 4: ";
   std::cin >> v4;
   std::cout << "\ninserisci valore variabile 5: ";
   std::cin >> v5;
   
   std::cout << "#VAR1: " << v1 << "\n";
   std::cout << "#VAR2: " << v2 << "\n";
   std::cout << "#VAR3: " << v3 << "\n";
   std::cout << "#VAR4: " << v4 << "\n";
   std::cout << "#VAR5: " << v5 << "\n";
   
   int somma = v1 + v2 + v3 + v4 + v5;
   int prodotto = v1 * v2 * v3 * v4 * v5;
   
   std::cout << "La somma delle vardiabili è: " << somma <<"\n";
   std::cout << "Il prodotto delle variabili è: " << prodotto<<"\n";
}
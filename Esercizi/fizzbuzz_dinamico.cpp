/*
* FizzBuzz dinamico
* Richiedere all'utente un numero lvl > 1.
* Stampare i numeri da 1 fino a fino a lvl, insieme a "Fizz" se il numero è divisibile per 3,
* "Buzz" se il numero è divisibile per 5 e "FizzBuzz" se è divisibile sia per 3 che per 5.
*/

#include <iostream>

int main()
{
    int lvl = 0;
    std::cout << "Inserisci il livello del FizzBuzz ";
    while (lvl <= 1){
        std::cin >> lvl;
        if (lvl <= 1)
            std::cout << "ERRORE: Inserisci un valore > 1!\n";
    }
    
    std::cout << "Grazie. Calcolo FizzBuzz fino al numero "
            << lvl << "\n";
    
    // Algoritmo di calcolo FizzBuzz
    for(int i=1; i <= lvl; i++){
        // Se il numero è divisibile sia per 3 che per 5.
        if(i%3 == 0 and i%5 == 0){
            std::cout << i << " FizzBuzz \n"; // Stampa FizzBuzz
        } else if (i%3 == 0){ // Altrimenti, se è solo divisibile per 3
            std::cout << i << " Fizz \n"; // Stampa Fizz
        } else if (i%5 == 0){ // Altrimenti, se è solo divisibile per 5
            std::cout << i << " Buzz \n"; // Stampa Buzz
        } else { // Altrimenti (caso in cui il numero non è NE' divisibile per 3, NE' per 5.
            std::cout << i << "\n"; // Stampa solo il numero.
        }
    }
    
    return 0;
    
}

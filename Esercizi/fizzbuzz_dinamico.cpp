#include <iostream>

int main()
{
    int lvl = 0;
    std::cout << "Inserisci il livello di FizzBuzz ";
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

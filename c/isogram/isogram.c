#include "isogram.h"

bool is_isogram(const char phrase[]) {
    // Checa se é uma string válida
    if (phrase == NULL) {
        return false;
    }

    for (int i = 0; phrase[i] != '\0' ; i++){
        
        // Ignora os dois caracteres especificados na instrução do problema
        if (phrase[i] == '-' || phrase[i] == ' ') {
            continue;
        }
    
        // Verifica repetição de letras convertendo-as para minusculas
        for (int j = i + 1; phrase[j] != '\0' ; j++){
            if ( tolower(phrase[i]) == tolower(phrase[j]) ){
                return false;
            }
        }
    }
    return true;
}
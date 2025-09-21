#include <stdio.h>

// --- Protótipos das Funções Recursivas ---
// Declaramos as funções antes de usá-las na main().
void moverTorreRecursivo(int passos);
void moverBispoRecursivo(int passos);
void moverRainhaRecursivo(int passos);

int main() {
    // --- Desafio Nível Mestre: Criando Movimentos Complexos ---

    // --- 1. Movimento da Torre (usando Recursividade) ---
    printf("--- Movimento da Torre (Recursivo) ---\n");
    int casas_torre = 5;
    moverTorreRecursivo(casas_torre);
    printf("\n");

    // --- 2. Movimento do Bispo (usando Recursividade) ---
    printf("--- Movimento do Bispo (Recursivo) ---\n");
    int casas_bispo = 5;
    moverBispoRecursivo(casas_bispo);
    printf("\n");

    // --- 3. Movimento da Rainha (usando Recursividade) ---
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    int casas_rainha = 8;
    moverRainhaRecursivo(casas_rainha);
    printf("\n");

    // --- 4. Movimento do Cavalo (usando Loops Complexos) ---
    // O movimento agora é duas casas para cima e uma para a direita.
    // Usaremos um único loop com múltiplas condições para controlar
    // cada etapa do movimento em "L".
    printf("--- Movimento do Cavalo (Loop Complexo) ---\n");
    int total_passos_cavalo = 3; // 2 para cima + 1 para a direita

    // Este loop complexo controla todo o movimento em "L".
    // A variável 'passo' determina qual parte do movimento será executada.
    for (int passo = 1; passo <= total_passos_cavalo; passo++) {
        // Se o passo for 1 ou 2, o movimento é vertical.
        if (passo <= 2) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração sem executar o código abaixo.
        }
        
        // Se o passo for 3, o movimento é horizontal.
        printf("Direita\n");
        break; // Interrompe o loop, pois o movimento completo foi realizado.
    }
    printf("\n");


    // --- 5. Movimento do Bispo (com Loops Aninhados) ---
    // Demonstração adicional do movimento do Bispo usando loops aninhados
    // conforme solicitado no desafio.
    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    int casas_diagonais = 5;

    // O loop mais externo controla o movimento vertical (passos para cima).
    for (int passo_vertical = 0; passo_vertical < casas_diagonais; passo_vertical++) {
        
        // O loop mais interno controla o movimento horizontal para cada passo vertical,
        // completando o movimento diagonal.
        for (int passo_horizontal = 0; passo_horizontal < 1; passo_horizontal++) {
            printf("Cima, Direita\n");
        }
    }

    return 0; // Indica que o programa foi concluído com sucesso.
}

/**
 * @brief Move a Torre recursivamente.
 * A função se chama até que o número de passos chegue a zero.
 * @param passos O número de casas restantes para mover.
 */
void moverTorreRecursivo(int passos) {
    // Caso Base: a condição de parada da recursão.
    // Se não houver mais passos, a função simplesmente retorna.
    if (passos <= 0) {
        return;
    }

    // Ação: Imprime o movimento da etapa atual.
    printf("Direita\n");

    // Passo Recursivo: chama a si mesma com um passo a menos.
    moverTorreRecursivo(passos - 1);
}

/**
 * @brief Move o Bispo recursivamente.
 * @param passos O número de casas restantes para mover na diagonal.
 */
void moverBispoRecursivo(int passos) {
    // Caso Base: condição de parada.
    if (passos <= 0) {
        return;
    }

    // Ação da etapa atual.
    printf("Cima, Direita\n");

    // Passo Recursivo.
    moverBispoRecursivo(passos - 1);
}

/**
 * @brief Move a Rainha recursivamente.
 * @param passos O número de casas restantes para mover.
 */
void moverRainhaRecursivo(int passos) {
    // Caso Base: condição de parada.
    if (passos <= 0) {
        return;
    }

    // Ação da etapa atual.
    printf("Esquerda\n");

    // Passo Recursivo.
    moverRainhaRecursivo(passos - 1);
}
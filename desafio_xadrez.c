#include <stdio.h> // Biblioteca padrão de entrada e saída (para usar o printf)

int main() {
    
    // --- 1. Movimento da Torre (usando 'for') ---
    
    printf("--- Movimento da Torre (5 casas para Direita) ---\n");
    
    // Define o número de casas que a Torre andará
    const int PASSOS_TORRE = 5; 
    
    /*
     * Usamos o loop 'for' para a Torre.
     * O 'for' é ideal quando sabemos exatamente o número de repetições (5 passos).
     * - int i = 0: Inicializa um contador 'i' em 0.
     * - i < PASSOS_TORRE: A condição de parada (o loop roda enquanto i for 0, 1, 2, 3, 4).
     * - i++: Incrementa o contador 'i' após cada execução do loop.
     */
    for (int i = 0; i < PASSOS_TORRE; i++) {
        // Imprime a direção a cada passo
        printf("Direita\n");
    }
    
    printf("\n"); // Adiciona uma linha em branco para separar as saídas

    // --- 2. Movimento do Bispo (usando 'while') ---

    printf("--- Movimento do Bispo (5 casas na Diagonal Cima-Direita) ---\n");

    // Define o número de casas que o Bispo andará
    const int PASSOS_BISPO = 5;
    
    // Para o 'while', precisamos inicializar o contador *antes* do loop
    int j = 0; 

    /*
     * Usamos o loop 'while' para o Bispo.
     * - O 'while' (enquanto) verifica a condição (j < 5) ANTES de executar o bloco.
     * - Se a condição for verdadeira, o bloco é executado.
     * - Precisamos incrementar o contador (j++) *dentro* do loop.
     */
    while (j < PASSOS_BISPO) {
        // Imprime a combinação de direções da diagonal
        printf("Cima, Direita\n");
        
        // Incrementa o contador para a próxima verificação
        j++; 
    }

    printf("\n"); // Adiciona uma linha em branco

    // --- 3. Movimento da Rainha (usando 'do-while') ---
    
    printf("--- Movimento da Rainha (8 casas para Esquerda) ---\n");

    // Define o número de casas que a Rainha andará
    const int PASSOS_RAINHA = 8;
    
    // Inicializa o contador *antes* do loop, assim como no 'while'
    int k = 0; 

    /*
     * Usamos o loop 'do-while' para a Rainha.
     * - O 'do-while' (faça-enquanto) é similar ao 'while', mas com uma diferença crucial:
     * - Ele PRIMEIRO executa o bloco de código (o 'do')
     * - e SÓ DEPOIS verifica a condição ('while (k < 8)').
     * - Isso garante que o loop execute *pelo menos uma vez*.
     */
    do {
        // Imprime a direção
        printf("Esquerda\n");
        
        // Incrementa o contador
        k++;

    } while (k < PASSOS_RAINHA); // Ponto e vírgula é obrigatório aqui

    printf("\n"); // Adiciona uma linha em branco

    return 0; // Indica que o programa terminou com sucesso
}
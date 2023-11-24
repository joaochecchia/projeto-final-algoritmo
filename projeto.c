#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct caracteristicasMusica{
    char titulo[30], artista[20], album[20], genero[20];

}

int main(){

    int tamanhoArray = 4; 
    struct caracteristicasMusica *playlist;

    int playlist = (struct caracteristicasMusica *)malloc(tamanhoArray * sizeof(struct caracteristicasMusica));

    if (playlist == NULL) {
        printf("Erro na alocacao de memoria.");
        
    }


    printf("1. Inserir nova musica.");
    printf("2. Mostrar musicas cadastradas na playlist, exibindo quais foram favoritadas.");
    printf("3. Buscar por uma musica.");
    printf("4. Editar informacoes de uma musica.");
    printf("5. Remover musica.");
    printf("6.'Favoritar' musica ja cadastrada na playlist");
    printf("7. Salvar playlist em um arquivo");

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

	char palabra[100];
	char aciertos[100];
	char fallos[100];
	int intentos=3;
	int naciertos=0;
	int nfallos=0;
	int tamano=0;

void registraracierto(char letra){
    aciertos[naciertos]=letra;
    naciertos++;
    if(naciertos==tamano){
        printf("\nGanaste, la palabra era: %s\n", palabra);
        system("pause");
        exit(0);
    }
}
void registrarfallo(char letra){
    fallos[nfallos]=letra;
    nfallos++;
    intentos--;
    printf("\nFallaste, te quedan %i intentos\n",intentos);
    if(intentos==0){
        printf("\nPerdiste\n la palabra secreta era %s\n",palabra);
    }
}
bool aciertoanterior(char letra){
    int i;
    for(i=0;i<naciertos;i++){
        if(aciertos[i]==letra){
            return true;
        }
    }

return false;
}
void desplegartablero(char letra){
    int acierto= false;
    int i;
    for(i=0;i<tamano;i++){
        if(palabra[i]==letra){
        registraracierto(letra);
        printf("%c",letra);
        acierto=true;
        }
        else if(aciertoanterior(palabra[i])){
            printf("%c",palabra[i]);
        }
        else{
            printf("_");
        }
    }
    if(!acierto){
        registrarfallo(letra);
    }
}
int main(){
    char letra;
    printf("Type the secret word: \n"); scanf("%s\n", palabra);
    fflush(stdin);
    system("cls");
    tamano=strlen(palabra);
    while(intentos>6){
        printf("Get me a word: \n"); scanf("%c",&letra);
        fflush(stdin);
        desplegartablero(letra);
    }
    system("pause");

return 0;
}

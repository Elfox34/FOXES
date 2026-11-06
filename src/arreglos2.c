/*Este programa pide un tamaño de un arreglo para despues definir
que voy a guardar en el arreglo t si se pasa del tamaño aca el programa*/
#include <stdio.h>

int main(){
    int number;
    int numbersave;
    int a;
    int k;
    printf("How much do you want in the array? \n");       //Aquí pide el tamaño y lo guarda en numero
    scanf("%d", &number);

    int array[number];  //declaramos el arreglo

    for ( int i = 0; i < number; i++)       //pedimos el numero para guardar en el arreglo
    {
       printf("what number do you want to put in the position %d \n", i+1);
       scanf("%d", &numbersave);
       array[i]=numbersave;         //arreglo empieza en 0 y pone el numero que se introduzca en la termial
    }

    for (int i = 0; i < number; i++)
    {
       printf("%d\n", array[i]);        //aqui imprimimos lo que guardamos en el arreglo
    }
    
    for(int i = 0;i < number; i++)
    {
        a = array[i];                   //en este for cambiamos de lugar los arreglos guardados
        array[i] = array[k - i];
        array[k - i] = a;
    }

    return 0;
}
    

    

/*Escribe un programa en C que:

Pida números enteros al usuario una y otra vez.
Sume solo los números positivos.
Termine cuando el usuario escriba 0.
Al final imprima la suma de los positivos.
Requisitos:

Obligatorio usar while (no for en este ejercicio).
El 0 no se suma; solo sirve para salir.
Los negativos se ignoran (no se suman).
Ejemplo de ejecución:

Ingresa un numero (0 para terminar): 5
Ingresa un numero (0 para terminar): -3
Ingresa un numero (0 para terminar): 10
Ingresa un numero (0 para terminar): 0
Suma de positivos = 15
(Porque 5 + 10 = 15; el -3 se ignora.)*/

#include <stdio.h>

int main()
{
    int a;
    int suma = 0;
    printf("Hola mundo");
    printf("Dame un numero entero \n");
    scanf("%d", &a);


    while (a != 0) // al poner 0 va a salir del while
    {

        if (a > 0)
        {
            // sumar positivos
            suma = suma + a;
        }

        printf("Dame otro numero \n");
        scanf("%d", &a);
    }
    printf("La suma de los positivos es %d \n", suma);

    return 0;
}
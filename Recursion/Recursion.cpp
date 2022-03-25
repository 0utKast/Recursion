
#if 0
#include <iostream>

void cuentaAtras(int cuenta)
{
    std::cout << "coloca " << cuenta << '\n';
    cuentaAtras(cuenta - 1); // cuantaAtras() se llama a sí misma recursivamente
}

int main()
{
    cuentaAtras (5);

    return 0;
}




#include <iostream>

void cuentaAtras(int cuenta)
{
    std::cout << "coloca " << cuenta << '\n';
    if (cuenta > 1) // condición terminación
        cuentaAtras(cuenta - 1); // cuantaAtras() se llama a sí misma recursivamente
   
}

int main()
{
    cuentaAtras(5);

    return 0;
}




#include <iostream>
// devuelve la suma de todos los enteros entre 1 (incluido) and sumhasta (incluido)
// devuelve 0 para números negativos
int sumHasta(int sumhasta)
{
    if (sumhasta <= 0)
        return 0; // base case (condición terminación) si el usuario pasa un argumento inesperado (0 ó negativo)
    else if (sumhasta == 1)
        return 1; // normal base case (condición terminación)
    else
       return sumHasta(sumhasta - 1) + sumhasta; // llamada función recursiva
}

int main()
{
    std::cout << sumHasta(5);

    return 0;
}



#include <iostream>

int fibonacci(int contador)
{
    if (contador == 0)
        return 0; // caso base (condición terminación)
    if (contador == 1)
        return 1; // caso base (condicicón terminación)
    return fibonacci(contador - 1) + fibonacci(contador - 2);
}

// y un programa main que mostrará los primeros 13 números Fibonacci
int main()
{
    for (int contador{ 0 }; contador < 13; ++contador)
        std::cout << fibonacci(contador) << ' ';

    return 0;
}
#endif


#include <iostream>
#include <vector>


int fibonacci(int contador)
{
    // Usamos un std::vector static para la caché de los resultados calculados
    static std::vector<int> resultados{ 0, 1 };

    // si ya hemos visto este contados, usamos el resutado de la cache
    if (contador < static_cast<int>(std::size(resultados)))
        return resultados[contador];
    else
    {
        // Si no es así calculamos el nuevo resultado y lo añadimos
        resultados.push_back(fibonacci(contador - 1) + fibonacci(contador - 2));
        return resultados[contador];
    }
}

// Y un programa principal para mostrar los 13 primeros números Fibonacci
int main()
{
    for (int contador{ 0 }; contador < 13; ++contador)
        std::cout << fibonacci(contador) << ' ';

    return 0;
}


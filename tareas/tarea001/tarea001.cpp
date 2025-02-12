#include <iostream>

int main() {
    int num1, num2;

    // Solicitar los números al usuario
    std::cout << "Primer Numero: ";
    std::cin >> num1;

    std::cout << "Segundo Numero: ";
    std::cin >> num2;

    // Calcular la suma y la multiplicación
    int sum = num1 + num2;
    int mul = num1 * num2;

    // Imprimir los resultados
    std::cout << "La suma de " << num1 << " + " << num2 << " es: " << sum << std::endl;
    std::cout << "La multiplicacion de " << num1 << " * " << num2 << " es: " << mul << std::endl;
    
    system("pause");
    return 0;
}
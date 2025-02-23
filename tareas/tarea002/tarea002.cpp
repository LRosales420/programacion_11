#include <iostream>
using namespace std;

int age;
char ticketType;
double ticketPrice = 100;
double finalPrice;
double testVar = 0;

int main() {
    cout << "Cual es su edad?: ";
    cin >> age;

    if (age < 0){
        cout << "Aca no servimos a seres de edades mayores a las de 2^64" << endl;

    } else if (age < 5) {
        finalPrice = 0;
        cout << "El boleto es gratis para ninos menores de 5 anos." << endl;

    } else {
        cout << "Cual es su tipo de boleto? (Boleto Normal 'N' - Boleto para Estudiantes 'E' - Boleto para Mayores de 60 Anos 'S'): ";
        cin >> ticketType;

        switch (ticketType) {
            case 'N':
            case 'n':
                finalPrice = ticketPrice;
                break;

            case 'E':
            case 'e':
                if (age > 119) {
                    cout << "Acaso eres humano?" << endl;
                    finalPrice = ticketPrice * 0.5;
                } else {
                    finalPrice = ticketPrice * 0.5;
                }
                break;

            case 'S':
            case 's':
                if (age > 60) {
                    finalPrice = ticketPrice * 0.7;
                } else {
                    cout << "No me hagas apuntar al cartel que dice: 'MAYORES DE 60 ANOS' " << endl;
                    finalPrice = ticketPrice;
                }
                break;
                
            default:
                cout << "Tipo de boleto no valido." << endl;
                system("pause");
                return 1;
        }
        cout << "Su precio final: $" << finalPrice << endl;
    }

    system("pause");
    return 0;
}
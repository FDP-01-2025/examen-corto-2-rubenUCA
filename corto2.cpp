//Rubén Martínez
//00076325

#include <iostream>
using namespace std;

int main()
{
    int edad, genero, opcion;
    float zapatoDeportivo, zapatoFormal, zapatoPremium, zapatoCasual, zapatoElegante;

    cout << "Bienvenido al sistema de compra de zapatos" << endl;
    cout << endl;
    cout << "Para iniciar, ingrese su edad: ";
    cin >> edad;

    if (edad >= 0 && edad <= 12)
    {
        cout << "Su talla de zapatos reomendada es: 34" << endl;
    }
    else if (edad >= 13 && edad <= 17)
    {
        cout << "Su talla de zapatos reomendada es: 38" << endl;
    }
    else if (edad >= 18 && edad <= 64)
    {
        cout << "Su talla de zapatos reomendada es: 40" << endl;
    }
    else
    {
        cout << "Su talla de zapatos reomendada es: 42" << endl;
    }

    cout << "A continuación, selecciona tu género:" << endl;
    cout << "1. Masculino." << endl;
    cout << "2. Femenino. " << endl;
    cin >> genero;

    zapatoDeportivo = 80;
    zapatoElegante = 100;
    zapatoCasual = 70;
    zapatoFormal = 120;
    zapatoPremium = 250;

    switch (genero)
    {
    case 1:
        cout << "Zapatos disponibles para hombre:" << endl;
        cout << "1. Zapato Deportivo -- Precio: $" << zapatoDeportivo << " -- Precio con descuento: $" << zapatoDeportivo - (zapatoDeportivo * 0.2) << endl;
        cout << "2. Zapato Formal -- Precio: $" << zapatoFormal << " -- Precio con descuento: $" << zapatoFormal - (zapatoFormal * 0.2) << endl;
        cout << "3. Zapato Premium -- Precio: $" << zapatoPremium << " -- Precio con descuento: $" << zapatoPremium - (zapatoPremium * 0.2) << endl;

        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {

        case 1:
            cout << "Ha seleccionado Zapato deportivo" << endl;
            cout << "Su precio con descuento es: $" << zapatoDeportivo - (zapatoDeportivo * 0.2) << endl;

            if ((zapatoDeportivo - (zapatoDeportivo * 0.2)) < 200)
            {
                cout << "Compra realizada con exito" << endl;
                cout << "Saldo disponible $" << 200 - (zapatoDeportivo - (zapatoDeportivo * 0.2)) << endl;
                cout << "Gracias por su compra" << endl;
            }
            else
            {
                cout << "Fondos insuficientes, Saldo disponible $200" << endl;
                cout << "Te faltan $" << (zapatoDeportivo - (zapatoDeportivo * 0.2)) - 200 << " para tu compra." << endl;
            }
            break;

        case 2:
            cout << "Ha seleccionado Zapato formal" << endl;
            cout << "Su precio con descuento es: $" << zapatoFormal - (zapatoFormal * 0.2) << endl;

            if ((zapatoFormal - (zapatoFormal * 0.2)) < 200)
            {
                cout << "Compra realizada con exito" << endl;
                cout << "Saldo disponible $" << 200 - (zapatoFormal - (zapatoFormal * 0.2)) << endl;
                cout << "Gracias por su compra" << endl;
            }
            else
            {
                cout << "Fondos insuficientes, Saldo disponible $200" << endl;
                cout << "Te faltan $" << (zapatoFormal - (zapatoFormal * 0.2)) - 200 << " para tu compra." << endl;
            }
            break;

        case 3:
            cout << "Ha seleccionado Zapato premium" << endl;
            cout << "Su precio con descuento es: $" << zapatoPremium - (zapatoPremium * 0.2) << endl;

            if ((zapatoPremium - (zapatoPremium * 0.2)) <= 200)
            {
                cout << "Compra realizada con exito" << endl;
                cout << "Saldo disponible $" << 200 - (zapatoPremium - (zapatoPremium * 0.2)) << endl;
                cout << "Gracias por su compra" << endl;
            }
            else
            {
                cout << "Fondos insuficientes, Saldo disponible $200" << endl;
                cout << "Te faltan $" << (zapatoPremium - (zapatoPremium * 0.2)) - 200 << " para tu compra." << endl;
            }
            break;

        default:
            cout << "opcion incorrecta";
            break;
        }

        break;

    case 2:
        cout << "Zapatos disponibles para mujer:" << endl;
        cout << "1. Zapato Casual -- Precio: $" << zapatoDeportivo << " -- Precio con descuento: $" << zapatoCasual - (zapatoCasual * 0.15) << endl;
        cout << "2. Zapato Elegante -- Precio: $" << zapatoElegante << " -- Precio con descuento: $" << zapatoElegante - (zapatoElegante * 0.15) << endl;
        cout << "3. Zapato Premium -- Precio: $" << zapatoPremium << " -- Precio con descuento: $" << zapatoPremium - (zapatoPremium * 0.15) << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {

        case 1:
            cout << "Ha seleccionado Zapato CAsual" << endl;
            cout << "Su precio con descuento es: $" << zapatoCasual - (zapatoCasual * 0.15) << endl;

            if ((zapatoCasual - (zapatoCasual * 0.15)) < 200)
            {
                cout << "Compra realizada con exito" << endl;
                cout << "Saldo disponible $" << 200 - (zapatoCasual - (zapatoCasual * 0.15)) << endl;
                cout << "Gracias por su compra" << endl;
            }
            else
            {
                cout << "Fondos insuficientes, Saldo disponible $200" << endl;
                cout << "Te faltan $" << (zapatoCasual - (zapatoCasual * 0.15)) - 200 << " para tu compra." << endl;
            }
            break;

        case 2:
            cout << "Ha seleccionado Zapato elegante" << endl;
            cout << "Su precio con descuento es: $" << zapatoElegante - (zapatoElegante * 0.15) << endl;

            if ((zapatoElegante - (zapatoElegante * 0.15)) < 200)
            {
                cout << "Compra realizada con exito" << endl;
                cout << "Saldo disponible $" << 200 - (zapatoElegante - (zapatoElegante * 0.15)) << endl;
                cout << "Gracias por su compra" << endl;
            }
            else
            {
                cout << "Fondos insuficientes, Saldo disponible $200" << endl;
                cout << "Te faltan $" << (zapatoElegante - (zapatoElegante * 0.15)) - 200 << " para tu compra." << endl;
            }
            break;

        case 3:
            cout << "Ha seleccionado Zapato premium" << endl;
            cout << "Su precio con descuento es: $" << zapatoPremium - (zapatoPremium * 0.15) << endl;

            if ((zapatoPremium - (zapatoPremium * 0.15)) <= 200)
            {
                cout << "Compra realizada con exito" << endl;
                cout << "Saldo disponible $" << 200 - (zapatoPremium - (zapatoPremium * 0.15)) << endl;
                cout << "Gracias por su compra" << endl;
            }
            else
            {
                cout << "Fondos insuficientes, Saldo disponible $200" << endl;
                cout << "Te faltan $" << (zapatoPremium - (zapatoPremium * 0.15)) - 200 << " para tu compra." << endl;
            }
            break;

        default:
            cout << "opcion incorrecta";
            break;
        }

        break;

    default:
        cout << "opcion incorrecta" << endl;
    }
    return 0;
}
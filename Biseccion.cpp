#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double  f(double x)
{
    x = pow(x,10)-1;
    return x;
}

int main()
{
    double a, b, x, et;
    int i = 1, opc = 0, n;

    do
    {
        cout << "Dame el intervalo a: ";
        cin >> a;

        cout << "Dame el intervalo b: ";
        cin >> b;
    }
    while ((f(a) > 0 && f(b) > 0) || (f(a) < 0 && f(b) < 0) );

    cout << endl << "Menú del método a elegir" << endl;
    cout << "1. Error de truncamiento" << endl;
    cout << "2. Numero de pasos" << endl;
    cout << "Opcion: ";
    cin >> opc;

    switch (opc) {
        case 1:
            cout << "Error de truncamiento: ";
            cin >> et;
            cout << "        |¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
            cout << "\t" << "| i |" << " a          |" << setw(8) << " b             |" << "\t" << setw(8) << " x       |" << endl;
            cout << "        |¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
            cout << setprecision(6) << fixed;
            while(abs(b-a) > et)
            {
                x = (a+b)/2.0;
                cout << "\t| " << i << " |\t" << setw(8) << a << " |\t" << setw(8) << b << " |\t" << setw(8) << x << " | " << endl;
                if(f(a) * f(x) < 0.0)
                {
                    b = x;
                }
                else
                {
                    a = x;
                }
                i++;
            }
            break;
        case 2:
            cout << "Número de pasos: ";
            cin >> n;
            cout << "        |¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
            cout << "\t" << "| i |" << " a          |" << setw(8) << " b             |" << "\t" << setw(8) << " x       |" << endl;
            cout << "        |¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
            cout << setprecision(6) << fixed;
            while (i <= n) {
                x = (a+b)/2.0;
                cout << "\t| " << i << " |\t" << setw(8) << a << " |\t" << setw(8) << b << " |\t" << setw(8) << x << " | " << endl;
                if(f(a) * f(x) < 0.0)
                {
                    b = x;
                }
                else
                {
                    a = x;
                }
                i++;
            }
            break;
        default:
            cout << "Opción invalida" << endl;
            break;
    }


    return 0;
}
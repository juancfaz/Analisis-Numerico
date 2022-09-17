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

    cout << "Dame el intervalo a: ";
    cin >> a;

    cout << "Dame el intervalo b: ";
    cin >> b;

    cout << endl << "Menu del metodo a elegir" << endl;
    cout << "1. Error de truncamiento" << endl;
    cout << "2. Numero de pasos" << endl;
    cout << "Opcion: ";
    cin >> opc;

    switch (opc) {
        case 1:
            cout << "Error de truncamiento: ";
            cin >> et;
            cout << "\t" << "i" << "\t" << setw(8) << "a" << "\t" << setw(10) << "b" << "\t" << setw(10) << "x" << endl;
            while(abs(b-a) > et)
            {
                x = (a+b)/2.0;
                cout << "\t" << i << "\t" << setw(8) << a << "\t" << setw(10) << b << "\t" << setw(10) << x << endl;
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
            cout << "Numero de pasos: ";
            cin >> n;
            cout << "\t" << "i" << "\t" << setw(8) << "a" << "\t" << setw(10) << "b" << "\t" << setw(10) << "x" << endl;
            while (i <= n) {
                x = (a+b)/2.0;
                cout << "\t" << i << "\t" << setw(8) << a << "\t" << setw(10) << b << "\t" << setw(10) << x << endl;
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
            cout << "Opcion invalida" << endl;
            break;
    }


    return 0;
}
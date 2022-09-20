//Juan Carlos Faz Leal

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double  f(double x)
{
    x = exp(-x)-cos(3*x)-0.5;
    return x;
}


int main()
{
    double a, b, x, et;
    int i = 1, opc = 0, n;

    cout << "Bisecci" << char(162) << "n" << endl << endl;

    cout << "Dame el intervalo a: ";
    cin >> a;

    cout << "Dame el intervalo b: ";
    cin >> b;

    while ((f(a) > 0 && f(b) > 0) || (f(a) < 0 && f(b) < 0))
    {
        cout << endl << "Intervalo incorrecto, vuelva a intentar." << endl;

        cout << "Dame el intervalo a: ";
        cin >> a;

        cout << "Dame el intervalo b: ";
        cin >> b;
    }

    cout << endl << "Men" << char(163) << " del m" << char(130) << "todo a elegir" << endl;
    cout << "1. Error de truncamiento" << endl;
    cout << "2. N" << char(163) << "mero de pasos" << endl;
    cout << "Opci" << char(162) << "n: ";
    cin >> opc;

    switch (opc) {
        case 1:
            cout << "Error de truncamiento: ";
            cin >> et;


            while(abs(b-a) >= et)
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
            cout << "        ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
            break;
        case 2:
            cout << "N" << char(163) << "mero de pasos: ";
            cin >> n;
            cout << "        |¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
            cout << "\t" << "| i |" << " a          |" << setw(8) << " b             |" << "\t" << setw(8) << " x       |" << endl;
            cout << "        |¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;

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
            cout << "        ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
            break;
        default:
            cout << "Opci" << char(162) << "n inv" << char(160) << "lida" << endl;
            break;
    }


    return 0;
}

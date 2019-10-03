#include <iostream>
#include <math.h>

using namespace std;

double pd(double, double, double, double);

void fnl();

double a,s,d,f;

int main()
{
pnt:

    cout << endl << endl << "ntr" << endl;

    cin >> a;
    cin >> s;
    cin >> d;
    cin >> f;

    cout << endl;
    fnl();
    cout << endl;

    char nd;

    cin >> nd;

    if (nd == 'n')
    {
        goto pnt;
        cout << endl;
    }

    else
    {
        return 0;
    }
    
}

double pd(double q, double w, double e, double r)
{

    double x = (pow(((q + w + e + r)/ 4000), 2) * pow(0.0001, 2));

    return x;
}

void fnl()
{
    double x = pd(0,s,d,f) + pd(a,0,d,f) + pd(a,s,0,f) + pd(a,s,d,0);

    x = pow(x,0.5);

    cout << x;
}
#ifndef lab4_cpp
#define lab4_cpp

#include "lab4.h"

cc::cc()
{
    cout << "please enter the posative V values, then the negative ones:/n";

    for (int i = 0; i < dtn; i++)
    {
        cin >> Vp[i];
    }
        for (int i = 0; i < dtn; i++)
    {
        cin >> Vn[i];
    }
}

void cc::Vm()
{
        cout << "V Data:/n" << endl;

    for (int i = 0; i < dtn; i++)
    {
        Vd[i] = 0.5 * (Vp[i] - Vn[i]);
        cout << endl << Vd[i] << endl;
    }
}




    //error

void ecc::eVm()
{
    cout << "V error Data:/n" << endl;

    for (int i = 0; i < dtn; i++)
    {
        Vde[i] =pow ((pow (((0 - cc::Vn[i]) / 2), 2) * pow (0.0001, 2)) + (pow (((cc::Vp[i] - 0) / 2), 2) * pow (0.0001, 2)), 2);
        cout << endl << Vde[i] << endl;
    }
}
#endif

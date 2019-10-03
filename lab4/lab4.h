#ifndef lab4_h
#define lab4_h

#include <iostream>
#include <math.h>

using namespace std;

const int dtn = 11;

class cc
{
    static double Vp[dtn], Vn[dtn], Vd[dtn];

    public:

    cc();
    void Vm();

    friend class ecc;
};

class ecc
{
    static double Vde[];

    public:

    void eVm();
};

#endif

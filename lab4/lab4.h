#ifndef lab4_h
#define lab4_h

#include <iostream>
#include <math.h>

using namespace std;

const int dtn = 11;

static double Vp[dtn], Vn[dtn], Vd[dtn];
static double Vde[dtn];

class cc
{
    // double Vp[dtn], Vn[dtn], Vd[dtn];

    public:

    cc();
    void Vm();

    friend class ecc;
};

class ecc
{
    // double Vde[];
    // double Vp[dtn], Vn[dtn], Vd[dtn];

    public:

    // ecc(cc r);
    void eVm();
};

#endif

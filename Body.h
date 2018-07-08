//
// Created by maxja on 08.07.2018.
//

#ifndef DK_BODY_H
#define DK_BODY_H
#include <iostream>
#include <cstdio>
#include <cmath>

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
class Body {
    std::vector<double> x;
    std::vector<double> y;
    std::vector<double> vx;
    std::vector<double> vy;
    double mass;
public:

    Body(){
        x;
        y;
        vx;
        vy;
        double mass = 1.0;
    }
    ~Body(){;}
    void setInit(double a, double b, double c, double d, double h){
        x.reserve(10);
        x[0] = a;
        y[0] = b;
        vx[0] = c;
        vy[0] = d;
        mass = h;
    }
    void test() {cout << x[0];}
};


#endif //DK_BODY_H

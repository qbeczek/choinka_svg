#include <iostream>
#include <stdlib.h>

#include "point.h"
#include "polygon.h"

void makeChoinka();

int main()
{
    makeChoinka();
    return 0;
}

void makeChoinka()
{
    Polygon choinka(25);
    Point a(270, 600);
    Point b(270, 550);
    Point c(150, 550);
    Point d(270, 500);
    Point e(180,500);
    Point f(270,450);
    Point g(200,450);
    Point h(300,350);
    Point i(400,450);
    Point j(330,450);
    Point k(430,500);
    Point l(330,500);
    Point m(450,550);
    Point n(330,550);
    Point o(330,600);

    choinka.push(a);
    choinka.push(b);
    choinka.push(c);
    choinka.push(d);
    choinka.push(e);
    choinka.push(f);
    choinka.push(g);
    choinka.push(h);
    choinka.push(i);
    choinka.push(j);
    choinka.push(k);
    choinka.push(l);
    choinka.push(m);
    choinka.push(n);
    choinka.push(o);
    choinka.makeSVGFile("choinka.svg");
}

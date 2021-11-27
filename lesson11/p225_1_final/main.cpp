#include <iostream>
#include "Point.h"
#include "Cylinder.h"
#include "Circle.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Cylinder cy1(3.5,6.4,5.2,10);
    cy1.setHeight(15);
    cy1.setRadius(7.5);
    cy1.setPoint(5,5);
    cout<<"\n new cylinder:"<<cy1;
    Point &pRef = cy1;
    cout<<"\n Ref as a point:"<<pRef;
    Circle &cRef = cy1;
    cout<<"\n cRef as a Circle:"<<cRef;
    getchar();
    return 0;
}

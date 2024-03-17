#include "trap.h"

Trapecia::Trapecia(){
    main1 = 0;
    main2 = 0;
    latSide = 0;
    height = 0;
    area = 0;
    perimeter = 0;
}

Trapecia::Trapecia(Trapecia& T){
    main1 = T.main1;
    main2 = T.main2;
    latSide = T.latSide;
    height = T.height;
    area = T.area;
    perimeter = T.perimeter;
}

Trapecia::Trapecia(float ma1, float ma2, float lS, float h, float ar, float per){
    main1 = ma1;
    main2 = ma2;
    latSide = lS;
    height = h;
    area = ar;
    perimeter = per;
}

bool Trapecia::operator>(Trapecia& T){
    return perimeter > T.perimeter;
}

bool Trapecia::operator<(Trapecia& T)
{
    return area < T.area;
}

void Trapecia::findAnSide(){
    float niz = (main2 - main1) / 2;
    latSide = sqrt(pow(niz, 2) + pow(height, 2));
}

void Trapecia::findPerimeter(){
    perimeter = 2 * latSide + main1 + main2;
}

void Trapecia::findArea(){
    area = ((main1 + main2)/2) * height;
}

ostream& operator<<(ostream& OS, Trapecia& T){
    OS << "First main side: " << T.main1;
    OS << "\nSecond main side: " << T.main2;
    OS << "\nLateral sides: " << T.latSide;
    OS << "\nHeight: " << T.height;
    OS << "\nArea of trapecia: " << T.area;
    OS << "\nPerimeter of trapecia: " << T.perimeter;

    return OS;
}

istream& operator>>(istream& IS, Trapecia& T){
    IS >> T.main1 >> T.main2 >> T.height;
    cout << endl;
    
    T.findAnSide();
    T.findArea();
    T.findPerimeter();

    return IS;
}

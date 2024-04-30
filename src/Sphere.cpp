#include "Sphere.h"
void Sphere::calculateVolume(){
    volume = radius * radius * radius * 3.14159265F * 4/3;
}

//Sphere::Sphere(float rad): radius(rad){}
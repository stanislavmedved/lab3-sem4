#include "TriangularPyramid.h"
#include <cstdio>

void TriangularPyramid::calculateVolume(){
    volume = base.getArea() * height * 1.0f/3.0f;
}

TriangularPyramid::TriangularPyramid(Triangle _base, float _height):base(_base), height(_height){
    this->calculateVolume();
}

void TriangularPyramid::scale(float scaleFactor){
    this->height *= scaleFactor;
    this->base.scale(scaleFactor);
    calculateVolume();
}

void TriangularPyramid::showInfo(){
    printf(
        "Я треугольная пирамида!\n"
        "Моя высота: %f\n"
        "Площадь моего основания: %f\n"
        "Мой объём: %f",
        height, base.getArea(), volume
    );
}
#include "Cylinder.h"
void Cylinder::calculateVolume(){
    this->volume = this->base.getArea() * height;
}
void Cylinder::scale(float scaleFactor){
    base.scale(scaleFactor);
    this->height *= scaleFactor;
    this->calculateVolume();
}
void Cylinder::showInfo(){
    printf("Я цилиндр!\n"
    "Моя высота = %f\n"
    "Площадь моего основания = %f\n"
    "Мой объём = %f\n",
    this->height,this->base.getArea(), this->volume);
}
std::string Cylinder::getName(){
    return "Цилиндр";
}
Cylinder::Cylinder(float _radius, float _height):height(_height),base(Circle(_radius)){
    this->calculateVolume();
}
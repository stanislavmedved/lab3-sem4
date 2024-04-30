#include "Circle.h"
#include <string>

void Circle::calculateArea(){
    area = this->radius*this->radius*3.14159265F;
}

void Circle::scale(float scaleFactor){
    this->radius *= scaleFactor;
    this->calculateArea();
}

void Circle::showInfo(){
    printf("Я круг!\n"
    "Мой радиус = %f\n"
    "Моя площадь = %f\n", radius, area);
}

std::string Circle::getName(){
    return "Круг";
}

Circle::Circle(float rad): radius(rad){
    this->calculateArea();
}
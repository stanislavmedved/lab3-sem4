#include "Square.h"
void Square::calculateArea(){
    this->area = side * side;
}

Square::Square(float _side): side(_side) {
    calculateArea();
}


#include <iostream>

#include "table.h"

Table::Table(float x, float y, float length, float width)
{
    this->x = x;
    this->y = y;
    this->length = length;
    this->width = width;
}

void Table::flipTheTable()
{
    this->isFlipped = !this->isFlipped;
    std::cout << "The Table was flipped." << std::endl;
}

void Table::placeTheTable(float x, float y)
{
    this->x = x;
    this->y = y;
    std::cout << "The Table was relocated." << std::endl;
}

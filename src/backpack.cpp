#include "backpack.hh"

backpack::backpack(float space)
{
    Space = space;
}

backpack::~backpack()
{
}

float backpack::space()
{
    return Space;
}
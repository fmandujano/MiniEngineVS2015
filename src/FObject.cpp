#include "FObject.h"

FObject::FObject()
{
	setup();
}


FObject::~FObject()
{
}

void FObject::setup()
{
	puts("hola soy un objeto");
}
void FObject::update()
{
}
void FObject::draw()
{
}

void FObject::keyPressed(int key)
{
}
void FObject::keyReleased(int key)
{
}
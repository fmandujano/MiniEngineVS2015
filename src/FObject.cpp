#include "FObject.h"

FObject::FObject()
{
	setup();
}


FObject::~FObject()
{
}


void FObject::RemoveComponent(FComponent *newComponent)
{
	//buscar el componente en la lista
}

void FObject::setup()
{
	puts("hola soy un objeto");
}
void FObject::Update(float deltaTime)
{
	if (Active)
	{
		//iterar en la lisa de componentes
		for (std::list<FComponent*>::iterator it = components.begin();
			it != components.end();
			it++)
		{
			FComponent* comp = static_cast<FComponent*>(*it);
			comp->Update(deltaTime);
		}
	}
}

void FObject::keyPressed(int key)
{
}
void FObject::keyReleased(int key)
{
}

uint64_t generateHash(std::string str)
{
	return 0;
}
#include <iostream>
#include "FComponent.h"



FComponent::FComponent(FObject *_owner)
{
	owner = _owner;
	Enabled = true;

	std::cout << "hola soy nu componnete" << std::endl;
}


FComponent::~FComponent()
{
}

void FComponent::Update(float deltaTime)
{
	if (Enabled)
	{

	}
}

void FComponent::Draw(float deltaTime)
{
	if (Enabled)
	{

	}
}



#include <iostream>
#include "FComponent.h"



FComponent::FComponent(FObject *_owner)
{
	owner = _owner;
	Enabled = true;
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



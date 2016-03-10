#pragma once
#include "FComponent.h"
#include <string>
#include <iostream>
#include <list>

class FObject
{
private:
	uint64_t internalId;
	std::string name;
	std::list<FComponent*> components;

public:
	bool Active;

	FObject(std::string name);
	FObject();
	~FObject();

	void setup();
	void Update(float deltaTime);
	//void Draw(float deltaTime);

	void keyPressed(int key);
	void keyReleased(int key);

	//getters
	int getID();
	std::string ToString();
	std::string getName();

	//components
	
	void RemoveComponent(FComponent *comp);

	uint64_t generateHash(std::string str);

	//templates
	template<class CompClass>
	CompClass AddComponent(std::string name)
	{
		std::cout << "Agregando componente " << name << std::endl;
		return nullptr;
	}

};

#pragma once
#include "FComponent.h"
#include <string>
#include <list>

class FObject
{
private:
	uint64_t internalId;
	std::string name;
	std::list<FComponent> components;

public:
	bool Active;

	FObject(std::string name);
	FObject();
	~FObject();

	void setup();
	void Update(float deltaTime);
	void Draw()float deltaTime;

	void keyPressed(int key);
	void keyReleased(int key);

	//getters
	int getID();
	std::string ToString();
	std::string getName();

	//components
	void AddComponent(FComponent *comp);
	void RemoveComponent(FComponent *comp);

	uint64_t generateHash(std::string str);
};


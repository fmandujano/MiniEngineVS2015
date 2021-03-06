#pragma once
#include <string>
class FObject;

class FComponent
{
public:
	FComponent(FObject *_owner);
	~FComponent();

	bool Enabled;
	void Update(float deltaTime);
	void Draw(float deltaTime);

private:
	FObject *owner;
	std::string name;
};


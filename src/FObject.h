#pragma once
#include <string>

class FObject
{
public:
	uint64_t internalId;
	std::string Id;

	FObject();
	~FObject();

	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
};


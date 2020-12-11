#pragma once

#include <iostream>
using namespace std;

class Background {
public:
	virtual void render() = 0;
};

class HalloweenBackground : public Background {
public:
	void render();
};

class ChristmasBackground : public Background {
public:
	void render();
};

class SpringBackground : public Background {
public:
	void render();
};
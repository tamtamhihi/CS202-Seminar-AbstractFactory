#pragma once

#include <iostream>
using namespace std;

class Emoji {
public:
	virtual void render() = 0;
};

class HalloweenEmoji : public Emoji {
public:
	void render();
};

class ChristmasEmoji : public Emoji {
public:
	void render();
};

class SpringEmoji : public Emoji {
public:
	void render();
};
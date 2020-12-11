#pragma once
#include <iostream>
using namespace std;

class Background {
public:
	virtual void render() = 0;
};

class Emoji {
public:
	virtual void render() = 0;
};

class MessageBox {
public:
	virtual void render() = 0;
};
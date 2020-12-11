#pragma once

#include <iostream>
using namespace std;

class MessageBox {
public:
	virtual void render() = 0;
};

class HalloweenMessageBox : public MessageBox {
public:
	void render();
};

class ChristmasMessageBox : public MessageBox {
public:
	void render();
};

class SpringMessageBox : public MessageBox {
public:
	void render();
};
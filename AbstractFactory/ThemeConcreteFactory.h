#pragma once
#include "ThemeAbstractFactory.h"
#include "ConcreteProduct.h"

class HalloweenFactory : public ThemeAbstractFactory {
public:
	Background* createBackground();
	Emoji* createEmoji();
	MessageBox* createMessageBox();
};

class ChristmasFactory : public ThemeAbstractFactory {
public:
	Background* createBackground();
	Emoji* createEmoji();
	MessageBox* createMessageBox();
};

class SpringFactory : public ThemeAbstractFactory {
public:
	Background* createBackground();
	Emoji* createEmoji();
	MessageBox* createMessageBox();
};


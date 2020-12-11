#pragma once
#include "AbstractProduct.h"

class ThemeAbstractFactory {
public:
	virtual Background* createBackground() = 0;
	virtual Emoji* createEmoji() = 0;
	virtual MessageBox* createMessageBox() = 0;
};

#pragma once
#include "ThemeAbstractFactory.h"

class ChatScreen {
	ThemeAbstractFactory* themeFactory;
	Background* myBackground;
	Emoji* myEmoji;
	MessageBox* myMessageBox;
public:
	ChatScreen(ThemeAbstractFactory* factory);
	void createUI();
	void render();
	~ChatScreen();
};
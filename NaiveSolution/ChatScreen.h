#pragma once
#include "Background.h"
#include "Emoji.h"
#include "MessageBox.h"

enum ChatTheme {
	HALLOWEEN, CHRISTMAS, SPRING
};

class ChatScreen {
	Background* myBackground;
	Emoji* myEmoji;
	MessageBox* myMessageBox;
public:
	ChatScreen(ChatTheme theme);
	void render();
	~ChatScreen();
};
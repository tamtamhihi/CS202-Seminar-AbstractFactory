#include "ChatScreen.h"

ChatScreen::ChatScreen(ChatTheme theme) {
	switch (theme) {
	case HALLOWEEN:
		this->myBackground = new HalloweenBackground();
		this->myEmoji = new HalloweenEmoji();
		this->myMessageBox = new HalloweenMessageBox();
		break;
	case CHRISTMAS:
		this->myBackground = new ChristmasBackground();
		this->myEmoji = new ChristmasEmoji();
		this->myMessageBox = new ChristmasMessageBox();
		break;
	case SPRING:
		this->myBackground = new SpringBackground();
		this->myEmoji = new SpringEmoji();
		this->myMessageBox = new SpringMessageBox();
	}
}

void ChatScreen::render() {
	myBackground->render();
	myEmoji->render();
	myMessageBox->render();
	cout << "\n";
}

ChatScreen::~ChatScreen() {
	delete myBackground;
	delete myEmoji;
	delete myMessageBox;
}
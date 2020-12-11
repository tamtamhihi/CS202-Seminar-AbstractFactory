#include "ChatScreen.h"

ChatScreen::ChatScreen(ThemeAbstractFactory* factory) {
	this->themeFactory = factory;
}
void ChatScreen::createUI() {
	myBackground = themeFactory->createBackground();
	myEmoji = themeFactory->createEmoji();
	myMessageBox = themeFactory->createMessageBox();
}
void ChatScreen::render() {
	myBackground->render();
	myEmoji->render();
	myMessageBox->render();
}
ChatScreen::~ChatScreen() {
	delete myBackground;
	delete myEmoji;
	delete myMessageBox;
}
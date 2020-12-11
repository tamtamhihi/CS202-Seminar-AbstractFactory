#include "ChatScreen.h"

int main() {
	ChatTheme theme = CHRISTMAS;
	ChatScreen myScreen(theme);
	myScreen.render();
	return 0;
}
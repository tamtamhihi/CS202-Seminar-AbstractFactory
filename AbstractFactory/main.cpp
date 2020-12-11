#include "ChatScreen.h"
#include "ThemeConcreteFactory.h"
#include <fstream>
#include <string>

int main() {
	ifstream config("config.txt");
	string theme;
	config >> theme;

	ThemeAbstractFactory* myFactory;
	if (theme == "halloween")
		myFactory = new HalloweenFactory();
	else if (theme == "christmas")
		myFactory = new ChristmasFactory();
	else
		myFactory = new SpringFactory();
	
	ChatScreen myScreen(myFactory);
	myScreen.createUI();
	myScreen.render();
	delete myFactory;
	return 0;
}
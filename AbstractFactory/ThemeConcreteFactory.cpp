#include "ThemeConcreteFactory.h"

// --- HALLOWEEN ---
Background* HalloweenFactory::createBackground() {
	return new HalloweenBackground;
}
Emoji* HalloweenFactory::createEmoji() {
	return new HalloweenEmoji;
}
MessageBox* HalloweenFactory::createMessageBox() {
	return new HalloweenMessageBox;
}

// --- CHRISTMAS ---
Background* ChristmasFactory::createBackground() {
	return new ChristmasBackground;
}
Emoji* ChristmasFactory::createEmoji() {
	return new ChristmasEmoji;
}
MessageBox* ChristmasFactory::createMessageBox() {
	return new ChristmasMessageBox;
}

// --- SPRING ---
Background* SpringFactory::createBackground() {
	return new SpringBackground;
}
Emoji* SpringFactory::createEmoji() {
	return new SpringEmoji;
}
MessageBox* SpringFactory::createMessageBox() {
	return new SpringMessageBox;
}

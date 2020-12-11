#pragma once
#include "AbstractProduct.h"

// --- HALLOWEEN
class HalloweenBackground : public Background {
public:
	void render();
};
class HalloweenEmoji : public Emoji {
public:
	void render();
};
class HalloweenMessageBox : public MessageBox {
public:
	void render();
};

// --- CHRISTMAS ---
class ChristmasBackground : public Background {
public:
	void render();
};
class ChristmasEmoji : public Emoji {
public:
	void render();
};
class ChristmasMessageBox : public MessageBox {
public:
	void render();
};

// --- SPRING ---
class SpringBackground : public Background {
public:
	void render();
};
class SpringEmoji : public Emoji {
public:
	void render();
};
class SpringMessageBox : public MessageBox {
public:
	void render();
};
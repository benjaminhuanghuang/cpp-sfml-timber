// Include important C++ libraries here
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

// Make code easier to type with "using namespace"
using namespace sf;

int main()
{
	// Create a video mode object
	VideoMode vm(800, 600);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!");

	// Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	// // Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	// Create a sprite
	Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// window.clear();

		// // Draw our game scene here
		window.draw(spriteBackground);

		// // Show everything we just drew
		window.display();
	}

	return 0;
}

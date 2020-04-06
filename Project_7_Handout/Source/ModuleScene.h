#ifndef __MODULE_SCENE_H__
#define __MODULE_SCENE_H__

#include "Module.h"
#include "Animation.h"

struct SDL_Texture;

class ModuleScene : public Module
{
public:
	//Constructor
	ModuleScene();

	//Destructor
	~ModuleScene();

	// Called when the module is activated
	// Loads the necessary textures for the map background
	bool Start() override;

	// Called at the middle of the application loop
	// Updates the scene's background animations
	update_status Update() override;
	void updateBackground();

	// Called at the end of the application loop.
	// Performs the render call of all the parts of the scene's background
	update_status PostUpdate() override;

public:
	
	// The scene sprite sheet loaded into an SDL_Texture
<<<<<<< HEAD
=======
	SDL_Texture* textures[64];
	SDL_Texture* bgTexture = nullptr;
	SDL_Texture* centro1 = nullptr;
	SDL_Texture* centro2 = nullptr;
	SDL_Texture* centro3 = nullptr;
	SDL_Texture* centro4 = nullptr;
	int freameCentro1, freameCentro2, freameCentro3, freameCentro4,currentCameraX;

>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593

	
	SDL_Texture* bgTextures[4] = {nullptr};
	int cont[4] = {0};
	

	// The sprite rectangle for the ground
	SDL_Texture* starsTexture = nullptr;

};




#endif
#include "ModuleScene.h"

#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleRender.h"
#include "ModuleAudio.h"
#include "ModuleCollisions.h"
#include "ModuleEnemies.h"

ModuleScene::ModuleScene()
{

}

ModuleScene::~ModuleScene()
{

}

// Load assets
bool ModuleScene::Start()
{
	LOG("Loading background assets");

	bool ret = true;
	cont =0;

	bgTexture = App->textures->Load("Assets/background.png");
	centro1 = App->textures->Load("Assets/centro_1.png");
	centro2 = App->textures->Load("Assets/centro_2.png");
	centro3 = App->textures->Load("Assets/centro_3.png");
	centro4 = App->textures->Load("Assets/centro_4.png");
	


	App->audio->PlayMusic("Assets/stage1.ogg", 1.0f);

	//Bottomside collider
	App->collisions->AddCollider({ 0, 224, 3930, 16 }, Collider::Type::WALL);

	//First two columns colliders
	App->collisions->AddCollider({ 1375, 0, 111, 96 }, Collider::Type::WALL);
	App->collisions->AddCollider({ 1375, 145, 111, 96 }, Collider::Type::WALL);

	// Enemies ---
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 600, 80);
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 625, 80);
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 640, 80);
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 665, 80);

	// TODO 1: Add a new wave of red birds
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 800, 100);
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 825, 100);
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 840, 100);
	App->enemies->AddEnemy(ENEMY_TYPE::REDBIRD, 865, 100);


	// TODO 2: Add a new wave of brown cookies
	App->enemies->AddEnemy(ENEMY_TYPE::BROWNSHIP, 800, 100);
	App->enemies->AddEnemy(ENEMY_TYPE::BROWNSHIP, 825, 100);
	App->enemies->AddEnemy(ENEMY_TYPE::BROWNSHIP, 850, 100);
	App->enemies->AddEnemy(ENEMY_TYPE::BROWNSHIP, 875, 100);

	// TODO 4: Create a new enemy type: The Mech
	App->enemies->AddEnemy(ENEMY_TYPE::MECH, 375, SCREEN_HEIGHT-46);



	return ret;
}

update_status ModuleScene::Update()
{
	App->render->camera.x += SCREEN_SPEED;
	updateBackground();

	//if (cen) {
	//}

	return update_status::UPDATE_CONTINUE;
}

// Update: draw background
update_status ModuleScene::PostUpdate()
{
	
	// Draw everything --------------------------------------
	//App->render->Blit(bgTexture, 0, 0, NULL);
	
	App->render->Blit(centro1, 0 ,14, NULL,1);
	App->render->Blit(centro2, 0, 17, NULL,2);
	App->render->Blit(centro3, 0, 17, NULL,3);
	App->render->Blit(centro4, 0, 0, NULL,4);

	App->render->Blit(centro1, SCREEN_WIDTH*cont, 14, NULL, 1);
	App->render->Blit(centro2, SCREEN_WIDTH, 17, NULL, 2);
	App->render->Blit(centro3, SCREEN_WIDTH, 17, NULL, 3);
	App->render->Blit(centro4, SCREEN_WIDTH, 0, NULL, 4);
	

	
	return update_status::UPDATE_CONTINUE;
}
void ModuleScene::updateBackground() {
	if (((App->render->camera.x * 1) % (SCREEN_WIDTH*2))==1) {
		cont++;
		LOG("\n LOL %d \nd",cont);
		//App->render->Blit(centro1, SCREEN_WIDTH, 0, NULL, 0);
	}
	/*App->render->Blit(centro2, 0, 17, NULL, 2);
	App->render->Blit(centro3, 0, 17, NULL, 3);
	App->render->Blit(centro4, 0, 0, NULL, 4);

	App->render->Blit(centro1, SCREEN_WIDTH - 1, 14, NULL, 1);
	App->render->Blit(centro2, SCREEN_WIDTH, 17, NULL, 2);
	App->render->Blit(centro3, SCREEN_WIDTH, 17, NULL, 3);
	App->render->Blit(centro4, SCREEN_WIDTH, 0, NULL, 4);*/

}

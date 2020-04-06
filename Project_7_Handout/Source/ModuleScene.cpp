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
<<<<<<< HEAD
	/*cont1,cont2,cont3,cont4 = 0;
	freameCentro1 = freameCentro2 = freameCentro3 = freameCentro4 = 0;
	*/

//	bgTexture = App->textures->Load("Assets/background.png");
	/*
	centro1 = App->textures->Load("Assets/centro_1_2.png");
	centro2 = App->textures->Load("Assets/centro_2_2.png");
	centro3 = App->textures->Load("Assets/centro_3_2.png");
	centro4 = App->textures->Load("Assets/centro_4_2.png");
	*/
	bgTextures[0] = App->textures->Load("Assets/centro_1_2.png");
	bgTextures[1] = App->textures->Load("Assets/centro_2_2.png");
	bgTextures[2] = App->textures->Load("Assets/centro_3_2.png");
	bgTextures[3] = App->textures->Load("Assets/centro_4_2.png");

=======
	freameCentro1=freameCentro2=freameCentro3= freameCentro4=0;

	bgTexture = App->textures->Load("Assets/background.png");
	centro1 = App->textures->Load("Assets/centro_1.png");
	centro2 = App->textures->Load("Assets/centro_2.png");
	centro3 = App->textures->Load("Assets/centro_3.png");
	centro4 = App->textures->Load("Assets/centro_4.png");

>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593


	App->audio->PlayMusic("Assets/stage1.ogg", 1.0f);

	//Bottomside collider
	/*App->collisions->AddCollider({ 0, 224, 3930, 16 }, Collider::Type::WALL);

	//First two columns colliders
<<<<<<< HEAD
	App->collisions->AddCollider({ 1375, 0, 111, 96 }, Collider::Type::WALL);
	App->collisions->AddCollider({ 1375, 145, 111, 96 }, Collider::Type::WALL);*/
	
	/*
=======
	/*App->collisions->AddCollider({ 1375, 0, 111, 96 }, Collider::Type::WALL);
	App->collisions->AddCollider({ 1375, 145, 111, 96 }, Collider::Type::WALL);*/

>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593
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
<<<<<<< HEAD
	App->enemies->AddEnemy(ENEMY_TYPE::MECH, 375, SCREEN_HEIGHT-46);
	*/
=======
	App->enemies->AddEnemy(ENEMY_TYPE::MECH, 375, SCREEN_HEIGHT - 46);
>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593



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
<<<<<<< HEAD
update_status ModuleScene::PostUpdate(){
	
	// Draw everything --------------------------------------
	//App->render->Blit(bgTexture, 0, 0, NULL);
	
	for (int i = 0; i < 4; i++){
		App->render->Blit(bgTextures[i], SCREEN_WIDTH * cont[i], 0, NULL, i+1);
		App->render->Blit(bgTextures[i], SCREEN_WIDTH * (cont[i] + 1), 0, NULL, i+1);
		App->render->Blit(bgTextures[i], SCREEN_WIDTH * (cont[i] + 2), 0, NULL, i+1);
	}
	/*
	App->render->Blit(centro1, SCREEN_WIDTH * cont1, 0, NULL,1);
	App->render->Blit(centro2, SCREEN_WIDTH * cont2, 0, NULL,2);
	App->render->Blit(centro3, SCREEN_WIDTH * cont3, 0, NULL,3);
	App->render->Blit(centro4, SCREEN_WIDTH * cont4, 0, NULL,4);

	App->render->Blit(centro1, SCREEN_WIDTH * (cont1 + 1), 0, NULL, 1);
	App->render->Blit(centro2, SCREEN_WIDTH * (cont2 + 1), 0, NULL, 2);
	App->render->Blit(centro3, SCREEN_WIDTH * (cont3 + 1), 0, NULL, 3);
	App->render->Blit(centro4, SCREEN_WIDTH * (cont4 + 1),  0, NULL, 4);
	
	App->render->Blit(centro1, SCREEN_WIDTH * (cont1 + 2), 0, NULL, 1);
	App->render->Blit(centro2, SCREEN_WIDTH * (cont2 + 2), 0, NULL, 2);
	App->render->Blit(centro3, SCREEN_WIDTH * (cont3 + 2), 0, NULL, 3);
	App->render->Blit(centro4, SCREEN_WIDTH * (cont4 + 2), 0, NULL, 4);
	*/

	/*
=======
update_status ModuleScene::PostUpdate()
{

	// Draw everything --------------------------------------
	//App->render->Blit(bgTexture, 0, 0, NULL);

>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593
	App->render->Blit(centro1, freameCentro1, 14, NULL, 1);
	App->render->Blit(centro2, freameCentro2, 17, NULL, 2);
	App->render->Blit(centro3, freameCentro3, 17, NULL, 3);
	App->render->Blit(centro4, freameCentro4, 0, NULL, 4);

	App->render->Blit(centro1, freameCentro1 + SCREEN_WIDTH, 14, NULL, 1);
	App->render->Blit(centro2, freameCentro2 + SCREEN_WIDTH, 17, NULL, 2);
	App->render->Blit(centro3, freameCentro3 + SCREEN_WIDTH, 17, NULL, 3);
	App->render->Blit(centro4, freameCentro4 + SCREEN_WIDTH, 0, NULL, 4);
<<<<<<< HEAD
	*/
	
	return update_status::UPDATE_CONTINUE;
}
void ModuleScene::updateBackground() {
	
	for (int i = 0; i < 4; i++){
		if (((App->render->camera.x) % ((SCREEN_WIDTH / (i+1)) + 1)) == 0) {
			cont[i]++;
		}
	}
	/*
	if (((App->render->camera.x) % ((SCREEN_WIDTH / 1)+1)) == 0){
		cont1++;
	}
	if (((App->render->camera.x) % ((SCREEN_WIDTH / 2)+1)) == 0) {
		cont2++;
	}	
	if (((App->render->camera.x) % ((SCREEN_WIDTH / 3)+1)) == 0) {
		cont3++;
	}
	if (((App->render->camera.x) % ((SCREEN_WIDTH / 4)+1)) == 0) {
		cont4++;
	}*/

	
	/*
	currentCameraX = App->render->camera.x;
	if ((currentCameraX % SCREEN_WIDTH) >= 1) {
=======



	return update_status::UPDATE_CONTINUE;
}
void ModuleScene::updateBackground() {

	currentCameraX = App->render->camera.x;
	if ((currentCameraX % SCREEN_WIDTH ) >= 1) {
>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593
		freameCentro1 = currentCameraX;
	}
	if ((currentCameraX % (SCREEN_WIDTH)) >= 2) {
		freameCentro2 = currentCameraX;
	}
	if ((currentCameraX % (SCREEN_WIDTH)) <= 3) {
		freameCentro3 = currentCameraX;
	}
	if ((currentCameraX % (SCREEN_WIDTH)) >= 4) {
		freameCentro4 = currentCameraX;
	}
<<<<<<< HEAD
	*/
=======



>>>>>>> 44eed230f389fa4180e4ada11db4f49e84c0e593

}

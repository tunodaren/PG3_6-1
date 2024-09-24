#include "Scene.h"

Scene::Scene(){}

void Scene::Init()
{
	inputHandler_ = new InputHandler();

                 /*D押されたら右に動くクラスを作る*/
	inputHandler_->AssignMoveRight2PressKeyD();

                  /*A押されたら左に動くクラスを作る*/
	inputHandler_->AssignMoveLeft2PressKeyA();

	player_ = new Player();
	player_->Init();
}

void Scene::Update()
{
	iCommand_ = inputHandler_->HandleInput();

	//ADどちらか押されていたらそのクラスを実行
	if (iCommand_) {
		iCommand_->Exec(*player_);
	}

	/*プレイヤーの更新関数*/
	player_->Update();
}

void Scene::Draw()
{
	/*プレイヤーの描画関数*/
	player_->Draw();
}
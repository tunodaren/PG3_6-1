#include "ICommand.h"

ICommand::~ICommand() {}

void MoveRightCommand::Exec(Player& player)
{
	//プレイヤーの右に動く関数の実行
	player.MoveRight();
}

void MoveLeftCommand::Exec(Player& player)
{
	//プレイヤーの左に動く関数の実行
	player.MoveLeft();
}

#pragma once
#include <ICommand.h>
#include <Novice.h>

class InputHandler
{
public:
	ICommand* HandleInput();

	//AssignMoveLeft2PressKeyA関数の宣言
	void AssignMoveLeft2PressKeyA();
	//AssignMoveRight2PressKeyD関数の宣言
	void AssignMoveRight2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};


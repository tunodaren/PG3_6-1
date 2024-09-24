#include "InputHandler.h"//同名ヘッダファイルをインクルード

ICommand* InputHandler::HandleInput()
{                         /*Dが押された？*/
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}                           /*Aが押された？*/
	else if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}

	return nullptr;
}

void InputHandler::AssignMoveLeft2PressKeyA()
{                      
	                   /*左に動くMoveLeftCommandクラスを作成*/
	ICommand* command = new MoveLeftCommand();

	/*作ったMoveLeftCommandクラスを保存*/
	pressKeyA_ = command;
}

void InputHandler::AssignMoveRight2PressKeyD()
{
	                   /*右に動くMoveRightCommandクラスを作成*/
	ICommand* command = new MoveRightCommand();

                       /*作ったMoveRightCommandクラスを保存*/
	pressKeyD_ = command;
}


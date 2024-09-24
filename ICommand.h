#pragma once
#include <Player.h>

class ICommand 
	/*ICommandクラスの定義*/
{
public:
	virtual ~ICommand();

	//「Player&」を引数で受け取り返り値無しのExec関数を純粋仮想関数で定義
	virtual void Exec(Player& player) = 0;
};

class MoveRightCommand :public ICommand {
	  //ICommandをpublic継承して右に動く処理クラス「MoveRightCommand」を定義

public:
	//親のICommandクラスが持つ「Player&」を引数で受け取って
	//返り値無しのExec関数をオーバーライドで定義
	void Exec(Player& player) override;
};

class MoveLeftCommand :public ICommand {
	 //ICommandをpublic継承して左に動く処理クラス「MoveLeftCommand」を定義
	
public:
	//親のICommandクラスが持つ「Player&」を引数で受け取って
	//返り値無しのExec関数をオーバーライドで定義
	void Exec(Player& player) override;
};


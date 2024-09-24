#include <Novice.h>
#include "Scene.h"

const char kWindowTitle[] = "学籍番号";

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリ初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	Scene* scene = new Scene();
	scene->Init();

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		/// 更新処理ここから
		/*sceneクラスの更新関数を実行*/
		scene->Update();
		/// 更新処理ここまで


		/// 描画処理ここから
		/*sceneクラスの描画関数を実行*/
		scene->Draw();
		/// 描画処理ここまで

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループ抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}

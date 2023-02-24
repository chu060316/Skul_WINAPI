#include "yaEndingScene.h"
#include "yaEndingBG.h"
#include "yaInput.h"
#include "yaSceneManager.h"

namespace ya
{
	EndingScene::EndingScene()
	{
	}

	EndingScene::~EndingScene()
	{
	}

	void EndingScene::Initialize()
	{
		mEndingBG = new EndingBG();
		AddGameObeject(mEndingBG, eLayerType::BG);

		Scene::Initialize();
	}

	void EndingScene::Update()
	{
		if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
		{
			SceneManager::LoadScene(eSceneType::Title);
		}

		Scene::Update();
	}

	void EndingScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void EndingScene::Release()
	{
		Scene::Release();
	}
	void EndingScene::OnEnter()
	{
	}
	void EndingScene::OnExit()
	{
	}
}






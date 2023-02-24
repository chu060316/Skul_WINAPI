#include "yaPlayeScene.h"
#include "yaSkul.h"
#include "yaInput.h"
#include "yaSceneManager.h"
#include "yaPlayeBG.h"

namespace ya
{
	PlayeScene::PlayeScene()
	{
	}

	PlayeScene::~PlayeScene()
	{
	}

	void PlayeScene::Initialize()
	{
		mSkul = new Skul();
		mPlayeBG = new PlayeBG();
		AddGameObeject(mSkul, eLayerType::Player);
		AddGameObeject(mPlayeBG, eLayerType::BG);

		Scene::Initialize();
	}

	void PlayeScene::Update()
	{
		if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
		{
			SceneManager::LoadScene(eSceneType::Ending);
		}

		Scene::Update();
	}

	void PlayeScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void PlayeScene::Release()
	{
		Scene::Release();
	}
	void PlayeScene::OnEnter()
	{
	}
	void PlayeScene::OnExit()
	{
	}
}

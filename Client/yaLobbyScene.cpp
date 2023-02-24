#include "yaLobbyScene.h"
#include "yaLobbyBG.h"
#include "yaInput.h"
#include "yaSceneManager.h"

namespace ya
{
	LobbyScene::LobbyScene()
	{
	}

	LobbyScene::~LobbyScene()
	{
	}

	void LobbyScene::Initialize()
	{
		mLobbyBG = new LobbyBG();
		AddGameObeject(mLobbyBG, eLayerType::BG);

		Scene::Initialize();
	}

	void LobbyScene::Update()
	{
		if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
		{
			SceneManager::LoadScene(eSceneType::Play);
		}

		Scene::Update();
	}

	void LobbyScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void LobbyScene::Release()
	{
		Scene::Release();
	}
	void LobbyScene::OnEnter()
	{
	}
	void LobbyScene::OnExit()
	{
	}
}






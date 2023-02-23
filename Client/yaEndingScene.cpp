#include "yaEndingScene.h"
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
	}
	void EndingScene::Update()
	{
		if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
		{
			SceneManager::LoadScene(eSceneType::Title);
		}

	}
	void EndingScene::Render(HDC hdc)
	{
	}
	void EndingScene::Release()
	{
	}
	void EndingScene::OnEnter()
	{
	}
	void EndingScene::OnExit()
	{
	}
}







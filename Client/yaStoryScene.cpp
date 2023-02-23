#include "yaStoryScene.h"
#include "yaInput.h"
#include "yaSceneManager.h"

namespace ya
{
	StoryScene::StoryScene()
	{
	}
	StoryScene::~StoryScene()
	{
	}
	void StoryScene::Initialize()
	{
	}
	void StoryScene::Update()
	{
		if (Input::GetKeyState(eKeyCode::N) == eKeyState::Down)
		{
			SceneManager::LoadScene(eSceneType::Play);
		}

	}
	void StoryScene::Render(HDC hdc)
	{
	}
	void StoryScene::Release()
	{
	}
	void StoryScene::OnEnter()
	{
	}
	void StoryScene::OnExit()
	{
	}
}







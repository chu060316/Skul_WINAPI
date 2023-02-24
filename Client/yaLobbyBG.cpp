#include "yaLobbyBG.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"

namespace ya
{
	LobbyBG::LobbyBG()
	{
	}
	LobbyBG::~LobbyBG()
	{
	}
	void LobbyBG::Initialize()
	{
		mImage = Resources::Load<Image>(L"LobbyBG", L"..\\Resources\\LobbyBG.bmp");

		GameObject::Initialize();
	}
	void LobbyBG::Update()
	{
		GameObject::Update();

		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
	}
	void LobbyBG::Render(HDC hdc)
	{
		GameObject::Render(hdc);
		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
		BitBlt(hdc, pos.x - 150, pos.y - 100, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void LobbyBG::Release()
	{
		GameObject::Release();
	}
}

#include "yaTitleBG.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"

namespace ya
{
	TitleBG::TitleBG()
	{
	}
	TitleBG::~TitleBG()
	{
	}
	void TitleBG::Initialize()
	{
		mImage = Resources::Load<Image>(L"TitleBG", L"..\\Resources\\TitleBG.bmp");

		GameObject::Initialize();
	}
	void TitleBG::Update()
	{
		GameObject::Update();

		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
	}
	void TitleBG::Render(HDC hdc)
	{
		GameObject::Render(hdc);
		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
		BitBlt(hdc, pos.x-150, pos.y-100, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void TitleBG::Release()
	{
		GameObject::Release();
	}
}

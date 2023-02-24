#include "yaEndingBG.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"

namespace ya
{
	EndingBG::EndingBG()
	{
	}
	EndingBG::~EndingBG()
	{
	}
	void EndingBG::Initialize()
	{
		mImage = Resources::Load<Image>(L"EndingBG", L"..\\Resources\\EndingBG.bmp");

		GameObject::Initialize();
	}
	void EndingBG::Update()
	{
		GameObject::Update();

		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
	}
	void EndingBG::Render(HDC hdc)
	{
		GameObject::Render(hdc);
		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
		BitBlt(hdc, pos.x - 150, pos.y - 100, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void EndingBG::Release()
	{
		GameObject::Release();
	}
}

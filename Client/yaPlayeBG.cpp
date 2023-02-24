#include "yaPlayeBG.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"

namespace ya
{
	PlayeBG::PlayeBG()
	{
	}
	PlayeBG::~PlayeBG()
	{
	}
	void PlayeBG::Initialize()
	{
		mImage = Resources::Load<Image>(L"PlayeBG", L"..\\Resources\\PlayeBG.bmp");

		GameObject::Initialize();
	}
	void PlayeBG::Update()
	{
		GameObject::Update();

		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
	}
	void PlayeBG::Render(HDC hdc)
	{
		GameObject::Render(hdc);
		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
		BitBlt(hdc, pos.x - 150, pos.y - 100, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void PlayeBG::Release()
	{
		GameObject::Release();
	}
}

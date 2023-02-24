#include "yaSkul.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"

namespace ya
{
	Skul::Skul()
	{
	}
	Skul::~Skul()
	{
	}
	void Skul::Initialize()
	{
		mImage = Resources::Load<Image>(L"Skul", L"..\\Resources\\Idle2.bmp");

		GameObject::Initialize();
	}
	void Skul::Update()
	{
		GameObject::Update();

		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();

		/*if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			pos.x -= 0.3f;
		}

		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			pos.x += 0.3f;
		}

		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			pos.y -= 0.3f;
		}

		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			pos.y += 0.3f;
		}*/

		if (Input::GetKeyState(eKeyCode::A) == eKeyState::Pressed)
		{
			pos.x -= 500.0f * Time::DeltaTime();
		}

		if (Input::GetKeyState(eKeyCode::D) == eKeyState::Pressed)
		{
			pos.x += 500.0f * Time::DeltaTime();
		}

		if (Input::GetKeyState(eKeyCode::W) == eKeyState::Pressed)
		{
			pos.y -= 500.0f * Time::DeltaTime();
		}

		if (Input::GetKeyState(eKeyCode::S) == eKeyState::Pressed)
		{
			pos.y += 500.0f * Time::DeltaTime();
		}

		tr->SetPos(pos);
	}
	void Skul::Render(HDC hdc)
	{
		GameObject::Render(hdc);
		Transform* tr = GetComponent<Transform>();
		Vector2 pos = tr->GetPos();
		BitBlt(hdc, pos.x + 100, pos.y + 500, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
	}
	void Skul::Release()
	{
		GameObject::Release();
	}
}

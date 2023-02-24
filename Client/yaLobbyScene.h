#pragma once
#include "yaScene.h"

namespace ya
{
	class LobbyBG;
	class LobbyScene : public Scene
	{
	public:
		LobbyScene();
		~LobbyScene();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

		virtual void OnEnter() override;
		virtual void OnExit() override;

	private:
		LobbyBG* mLobbyBG;
	};
}

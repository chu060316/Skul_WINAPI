#pragma once
#include "yaScene.h"

namespace ya
{
	class EndingBG;
	class EndingScene : public Scene
	{
	public:
		EndingScene();
		~EndingScene();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

		virtual void OnEnter() override;
		virtual void OnExit() override;

	private:
		EndingBG* mEndingBG;
	};
}

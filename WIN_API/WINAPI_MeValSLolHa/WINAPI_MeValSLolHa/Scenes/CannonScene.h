#pragma once
class Cannon;

class CannonScene : public Scene
{
public:
	CannonScene();
	~CannonScene();

	void Update() override;
	void Render(HDC hdc) override;

private:
	shared_ptr<Cannon> _cannon;

	// 1. 다른 캐논 1개 놓고
	// 2. 공을 발사해서 캐논이 맞으면 사라지게 
	// - 체력 추가
	// - 턴제 추가 
	// - 스페이스바 누르면 더 쌔게 나가게 
};


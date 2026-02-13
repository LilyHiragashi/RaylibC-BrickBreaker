#include "Paddle.h"
#include "Game.h"
Paddle::Paddle(Game* game) : Actor{ {game->GetWidth() * 0.5f, game->GetHeight() - 20.f}, {300.f, 2.f}, GREEN, game}, m_speed {150.f}
{}

void Paddle::Tick(float dt)
{
	if (IsKeyDown(KEY_D))
	{
		location.x += m_speed * dt; // need to multiply by deltatime so we don't move *too* much per frame

	}
	if (IsKeyDown(KEY_A))
	{
		location.x -= m_speed * dt; // need to multiply by deltatime so we don't move *too* much per frame

	}

	if (location.x < size.x * .5)
	{
		location.x = size.x * .5;
	}
	if (location.x > m_game->GetWidth() - size.x * 0.5)
	{
		location.x = m_game->GetWidth() - size.x * 0.5;
	}

}

void Paddle::Render()
{
	DrawRectanglePro({ location.x, location.y, size.x, size.y }, { size.x * 0.5f, size.y * 0.5f }, 0.f, color);

	

}

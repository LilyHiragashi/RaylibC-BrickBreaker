#include "Ball.h"
#include "Game.h"
#include <raymath.h>
Ball::Ball(Game* game) : Actor{ {game->GetWidth() * 0.5f, game->GetHeight() * 0.5f}, {5.f, 5.f}, {0, 251, 251, 255}, game }, velocity{ 1.f, 1.f }, moveSpeed{ 430 }
{

}

void Ball::Tick(float dt)
{
	location += velocity * moveSpeed * dt;

	float radius = Vector2Length(size) * 1.1f;

	if (location.x > m_game->GetWidth() - radius ||
		location.x < radius)
	{
		velocity.x *= -1;
	}
	if (location.y < radius)
	{
		velocity.y *= -1;
	}

	if (location.y > m_game->GetHeight() - radius)
	{

		location = {m_game->GetWidth() * 0.5f, m_game->GetHeight() * 0.5f};

		
	}
}

void Ball::Render()
{
	DrawCircleV(location, Vector2Length(size), color);
}

void Ball::BeginPlay()
{
	float dir = GetRandomValue(-9, 9) * 0.1;
	velocity.x = dir;

	velocity = Vector2Normalize(velocity);
}

#include "raylib.h"
#include "raymath.h"

class Character
{
public:
  Character();

  Vector2 getWorldPos()
  {
    return worldPos;
  }

  void setScreenPos(int winWidth, int winHeight);
  void tick(float deltaTime);

private:
  Texture2D texture{LoadTexture("./characters/knight_idle_spritesheet.png")};
  Texture2D idle{LoadTexture("./characters/knight_idle_spritesheet.png")};
  Texture2D run{LoadTexture("./characters/knight_run_spritesheet.png")};

  Vector2 screenPos{};
  Vector2 worldPos{};

  float width{};
  float height{};

  float rightLeft{1.f};
  // animation variables
  float runningTime{};
  float frame{};
  float updateTime{1.f / 12.f};
  int maxFrames{6};
  float speed{4.f};
};
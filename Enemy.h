#include "raylib.h"
#include "raymath.h"

#include "BaseCharacter.h"
#include "Character.h"

class Enemy : public BaseCharacter
{
public:
  // constructors
  Enemy(Vector2 pos, Texture2D idle_texture, Texture2D run_texture);

  // public methods
  virtual Vector2 getScreenPos() override;
  virtual void tick(float deltaTime) override;
  void setTarget(Character *character);

private:
  Character *target;

  float damagePerSecond{10.f};
  float radius{25.f};
};

#ifndef CHARACTER_H
#define CHARACTER_H

#include "raylib.h"
#include "raymath.h"

#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
  // constructors
  Character(int winWidth, int winHeight);

  // getter and setters
  float getHealth() const { return health; };
  void takeDamage(float damage);

  Rectangle getWeaponCollisionRec() const { return weaponCollisionRec; };

  // public methods
  virtual void tick(float deltaTime) override;
  virtual Vector2 getScreenPos() override;

private:
  int windowWidth{};
  int windowHeight{};

  Texture2D weapon{LoadTexture("./characters/weapon_sword.png")};
  Rectangle weaponCollisionRec{};

  float health{100.f};
};

#endif

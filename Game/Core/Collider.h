#pragma once

#include "Position.h"

class Collider {
public:
  Collider() = default;

  virtual void UpdatePosition(const Position &position) = 0;
  virtual void Translate(const Vector2D &vector2D) = 0;

  bool CheckCollision(const Collider *other) const;
  bool CheckTrigger(const Collider *other) const;

protected:
  virtual bool Check(const Collider *other) const = 0;

  bool is_trigger_;
};
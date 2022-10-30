#include "Vector2D.h"

Vector2D::Vector2D() : x_(0), y_(0) {}

Vector2D::Vector2D(double x, double y) : x_(x), y_(y) {}

Vector2D::Vector2D(const Vector2D &other) : Vector2D(other.x_, other.y_) {}

void Vector2D::SetCoordinates(double x, double y) {
    x_ = x;
    y_ = y;
}

std::pair<double, double> Vector2D::GetCoordinates() const {
    return {x_, y_};
}

double Vector2D::Det(const Vector2D &first, const Vector2D &second) {
    return first.x_ * second.y_ - first.y_ * second.x_;
}

double Vector2D::ScalarMultiply(const Vector2D &first, const Vector2D &second) {
    return first.x_ * second.x_ + first.y_ * second.y_;
}

Vector2D& Vector2D::operator=(const Vector2D &other) {
    x_ = other.x_;
    y_ = other.y_;
    return *this;
}

double Vector2D::operator*(const Vector2D &other) const {
    return ScalarMultiply(*this, other);
}

Vector2D Vector2D::Right = Vector2D(1, 0);
Vector2D Vector2D::Left = Vector2D(-1, 0);
Vector2D Vector2D::Up = Vector2D(0, 1);
Vector2D Vector2D::Down = Vector2D(0, -1);

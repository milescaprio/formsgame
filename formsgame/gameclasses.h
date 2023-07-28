#pragma once
class star;
class enemy;
class enemybullet;
class youbullet;
class star {
private:
	int x_;
	int y_;
	bool alive;
public:
	star() { alive = false; x_ = 0; y_ = 0; }
	void setX(int newx) { x_ = newx; }
	void setY(int newy) { y_ = newy; }
	void show(void) { alive = true; }
	void hide(void) { alive = false; }
	int getX(void) const { return x_; }
	int getY(void) const { return y_; }
	bool shown(void) const { return alive; }
	void incrY(int ystep = 1) { if (shown()) { y_ += ystep; if (y_ > 671 - 8) hide(); } }
	void home(void) { x_ = std::rand() % (659 - 8); y_ = 0; alive = true; }
};

class enemybullet {
private:
	int x_;
	int y_;
	bool alive;
public:
	enemybullet() { alive = false; x_ = 0; y_ = 0; }
	void home(int x, int y) { x_ = x + 16; y_ = y; alive = true; }
	void setX(int newx) { x_ = newx; }
	void setY(int newy) { y_ = newy; }
	void show(void) { alive = true; }
	void hide(void) { alive = false; }
	bool isColliding(int x, int y, int w, int h) const { return ((x_ + 16) >= x && (x_) <= (x + w) && (y_ + 16) >= y && (y_) <= (y + h))*shown(); }
	int getX(void) const { return x_; }
	int getY(void) const { return y_; }
	bool shown(void) const { return alive; }
	void incrY(int ystep = 1) { if (shown()) { y_ += ystep; if (y_ > 671 - 16) hide(); } }
};

class enemy {
private:
	int x_;
	int y_;
	bool alive;
	bool hasfired;
public:
	enemybullet bullet;
public:
	enemy() { alive = false; x_ = 0; y_ = 0;}
	void setX(int newx) { x_ = newx; }
	void setY(int newy) { y_ = newy; }
	void show(void) { alive = true; }
	void hide(void) { alive = false; }
	bool isColliding(int x, int y, int w, int h) const { return ((x_ + 48) >= x && (x_) <= (x + w) && (y_ + 48) >= y && (y_) <= (y + h)) * shown(); }
	int getX(void) const { return x_; }
	int getY(void) const { return y_; }
	bool shown(void) const { return alive; }
	void incrY(int ystep = 1) { if (shown()) { y_ += ystep; if (y_ > 671 - 8) hide(); } if (bullet.shown()) { bullet.incrY(ystep * 2); } }
	void home(void) { x_ = std::rand() % (659 - 48); y_ = 0; alive = true; hasfired = rand() % 2; }
	void fire(void) { if (!hasfired) bullet.home(x_, y_); hasfired = 1; };
};

class youbullet {
private:
	int x_;
	int y_;
	bool alive;
public:
	youbullet() { alive = false; x_ = 0; y_ = 0; }
	void home(int x, int y) { x_ = x + 16; y_ = y; alive = true; }
	void setX(int newx) { x_ = newx; }
	void setY(int newy) { y_ = newy; }
	void show(void) { alive = true; }
	void hide(void) { alive = false; }
	bool isColliding(int x, int y, int w, int h) const { return ((x_ + 16) >= x && (x_) <= (x + w) && (y_ + 16) >= y && (y_) <= (y + h)) * shown(); }
	int getX(void) const { return x_; }
	int getY(void) const { return y_; }
	bool shown(void) const { return alive; }
	void incrY(int ystep = 1) { if (shown()) { y_ -= ystep; if (y_ < 0) hide(); } }
};
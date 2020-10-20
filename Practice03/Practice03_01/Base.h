#ifndef BASE_H
#define BASE_H


class Base
{
public:
	Base();
	virtual ~Base();

public:
	//当たり判定
	//引数の矩形情報と、自分が当たっているか判断
	virtual bool CheckHit(int x1, int y1, int width, int height);

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);
	void SetSize(int  width, int height);
	

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();
	int GetWidth();
	int GetHeight();

private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	int m_Width;  //当たり判定用＿幅
	int m_Height; //当たり判定用＿高さ
};

#endif // !BASE_H

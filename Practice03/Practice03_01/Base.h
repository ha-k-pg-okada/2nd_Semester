#ifndef BASE_H
#define BASE_H


class Base
{
public:
	Base();
   ~Base();

public:
	//“–‚½‚è”»’è
	//ˆø”‚Ì‹éŒ`î•ñ‚ÆA©•ª‚ª“–‚½‚Á‚Ä‚¢‚é‚©”»’f
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

	int m_Width;  //“–‚½‚è”»’è—pQ•
	int m_Height; //“–‚½‚è”»’è—pQ‚‚³
};

#endif // !BASE_H

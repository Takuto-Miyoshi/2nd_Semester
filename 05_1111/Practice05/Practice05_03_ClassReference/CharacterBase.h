#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H

class CharacterBase{
public:
	CharacterBase();
	virtual ~CharacterBase();

	void SetHp( int hp ){ m_Hp = hp; }
	void SetMp( int mp ){ m_Mp = mp; }

	int GetHp()const{ return m_Hp; }
	int GetMp()const{ return m_Mp; }

protected:
	int m_Hp;
	int m_Mp;
};

#endif // !define CHARACTER_BASE_H

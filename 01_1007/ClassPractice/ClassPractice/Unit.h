#ifndef UNIT_H_
#define UNIT_H_

class Unit {

public:
	Unit();
	~Unit();

	// �X�e�[�^�X�̕\��
	void PrintStatus();

private:
	int m_hp,  // �̗�
		m_str, // �U����
		m_mag, // ���@��
		m_tec, // �Z
		m_spd, // �q����
		m_def, // �h���
		m_luc, // �^
		m_mde; // ���@�h���
};

#endif // UNIT_H_
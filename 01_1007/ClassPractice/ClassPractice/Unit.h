#ifndef UNIT_H_
#define UNIT_H_

class Unit {

public:
	Unit();
	~Unit();

	// ステータスの表示
	void PrintStatus();

private:
	Status status;
};

#endif // UNIT_H_
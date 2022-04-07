#ifndef MONSTERENCOUNTER_H
#define MONSTERENCOUNTER_H

#include "Scenario.h"
#include "ScenarioSystem.h"
#include "Monster.h"
#include "Player.h"

class MonsterEncounter : public Scenario
{
public:
	MonsterEncounter(int);
	~MonsterEncounter();
	void scenarioUpdate();

	int checkDecisionInput(string);
private:
	Monster* monster;
	Player player;
};

#endif // !MONSTERENCOUNTER_H


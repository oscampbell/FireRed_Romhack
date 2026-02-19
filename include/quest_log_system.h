#ifndef GUARD_QUEST_LOG_SYSTEM_H
#define GUARD_QUEST_LOG_SYSTEM_H

#define MAX_QUESTS 10
#define MAX_STEPS 30

struct QuestStep
{
    const u8 *description;
};

struct Quest
{
    const u8 *name;
    const struct QuestStep *steps;
    u16 varId;
    u16 numSteps;
};

void CB2_InitQuestLog(void);
void SetQuestStep(u16 questVarId, u16 step);
u16 GetQuestStep(u16 questVarId);

extern const struct Quest gQuests[MAX_QUESTS];

#endif // GUARD_QUEST_LOG_SYSTEM_H

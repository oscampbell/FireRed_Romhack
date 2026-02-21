#include "global.h"
#include "constants/songs.h" // For SE_SELECT
#include "move.h" // For gMovesInfo
#include "gflib.h"
#include "menu.h"
#include "task.h"
#include "overworld.h"
#include "strings.h"
#include "event_data.h"
#include "quest_log_system.h"
#include "menu_helpers.h"
#include "field_fadetransition.h"
#include "text_window.h"
#include "pokemon.h"
#include "constants/vars.h"
#include "constants/species.h"

// Variables for quest tracking (defined in include/constants/vars.h as 0x408C, 0x408D, 0x408E)
#define VAR_QUEST_MAIN   0x408C
#define VAR_QUEST_STACEY 0x408D
#define VAR_QUEST_FIG    0x408E
#define VAR_QUEST_TWILIGHT 0x408F
#define VAR_QUEST_POKEASDA 0x4090
#define VAR_QUEST_PALETTE  0x4091
#define VAR_QUEST_BIRTHDAY 0x4092
#define VAR_QUEST_EEVEE    0x4093

static const struct QuestStep sMainStorySteps[] = {
    {gText_QuestLog_MainStory_Step0},
    {gText_QuestLog_MainStory_Step1},
    {gText_QuestLog_MainStory_Step2},
    {gText_QuestLog_MainStory_Step3},
    {gText_QuestLog_MainStory_Step4},
    {gText_QuestLog_MainStory_Step5},
    {gText_QuestLog_MainStory_Step6},
    {gText_QuestLog_MainStory_Step7},
    {gText_QuestLog_MainStory_Step8},
    {gText_QuestLog_MainStory_Step9},
    {gText_QuestLog_MainStory_Step10},
    {gText_QuestLog_MainStory_Step11},
    {gText_QuestLog_MainStory_Step12},
    {gText_QuestLog_MainStory_Step13},
    {gText_QuestLog_MainStory_Step14},
    {gText_QuestLog_MainStory_Step15},
    {gText_QuestLog_MainStory_Step16},
    {gText_QuestLog_MainStory_Step17},
    {gText_QuestLog_MainStory_Step18},
    {gText_QuestLog_MainStory_Step19},
    {gText_QuestLog_MainStory_Step20},
    {gText_QuestLog_MainStory_Step21},
    {gText_QuestLog_MainStory_Step22},
    {gText_QuestLog_MainStory_Step23},
    {gText_QuestLog_MainStory_Step24},
    {gText_QuestLog_MainStory_Step25},
    {gText_QuestLog_MainStory_Step26},
    {gText_QuestLog_MainStory_Step27},
    {gText_QuestLog_MainStory_Step28},
    {gText_QuestLog_MainStory_Step29},
};

static const struct QuestStep sStaceyQuestSteps[] = {
    {gText_QuestLog_StaceyQuest_Step0},
    {gText_QuestLog_StaceyQuest_Step1},
    {gText_QuestLog_StaceyQuest_Step2},
};

static const struct QuestStep sFigQuestSteps[] = {
    {gText_QuestLog_FigQuest_Step0},
    {gText_QuestLog_FigQuest_Step1},
    {gText_QuestLog_FigQuest_Step2},
};

static const struct QuestStep sTwilightQuestSteps[] = {
    {gText_QuestLog_TwilightQuest_Step0},
    {gText_QuestLog_TwilightQuest_Step1},
    {gText_QuestLog_TwilightQuest_Step2},
    {gText_QuestLog_TwilightQuest_Step3},
    {gText_QuestLog_TwilightQuest_Step4},
};

static const struct QuestStep sPokeASDAQuestSteps[] = {
    {gText_QuestLog_PokeASDAQuest_Step0},
    {gText_QuestLog_PokeASDAQuest_Step1},
    {gText_QuestLog_PokeASDAQuest_Step2},
    {gText_QuestLog_PokeASDAQuest_Step3},
};

static const struct QuestStep sPaletteQuestSteps[] = {
    {gText_QuestLog_PaletteQuest_Step0},
    {gText_QuestLog_PaletteQuest_Step1},
    {gText_QuestLog_PaletteQuest_Step2},
    {gText_QuestLog_PaletteQuest_Step3},
};

static const struct QuestStep sBirthdayQuestSteps[] = {
    {gText_QuestLog_BirthdayQuest_Step0},
    {gText_QuestLog_BirthdayQuest_Step1},
    {gText_QuestLog_BirthdayQuest_Step2},
};

static const struct QuestStep sEeveeQuestSteps[] = {
    {gText_QuestLog_EeveeQuest_Step0},
    {gText_QuestLog_EeveeQuest_Step1},
    {gText_QuestLog_EeveeQuest_Step2},
};

const struct Quest gQuests[MAX_QUESTS] = {
    {
        .name = gText_QuestLog_MainStory,
        .steps = sMainStorySteps,
        .varId = VAR_QUEST_MAIN,
        .numSteps = NELEMS(sMainStorySteps),
    },
    {
        .name = gText_QuestLog_StaceyQuest,
        .steps = sStaceyQuestSteps,
        .varId = VAR_QUEST_STACEY,
        .numSteps = NELEMS(sStaceyQuestSteps),
    },
    {
        .name = gText_QuestLog_FigQuest,
        .steps = sFigQuestSteps,
        .varId = VAR_QUEST_FIG,
        .numSteps = NELEMS(sFigQuestSteps),
    },
    {
        .name = gText_QuestLog_TwilightQuest,
        .steps = sTwilightQuestSteps,
        .varId = VAR_QUEST_TWILIGHT,
        .numSteps = NELEMS(sTwilightQuestSteps),
    },
    {
        .name = gText_QuestLog_PokeASDAQuest,
        .steps = sPokeASDAQuestSteps,
        .varId = VAR_QUEST_POKEASDA,
        .numSteps = NELEMS(sPokeASDAQuestSteps),
    },
    {
        .name = gText_QuestLog_PaletteQuest,
        .steps = sPaletteQuestSteps,
        .varId = VAR_QUEST_PALETTE,
        .numSteps = NELEMS(sPaletteQuestSteps),
    },
    {
        .name = gText_QuestLog_BirthdayQuest,
        .steps = sBirthdayQuestSteps,
        .varId = VAR_QUEST_BIRTHDAY,
        .numSteps = NELEMS(sBirthdayQuestSteps),
    },
    {
        .name = gText_QuestLog_EeveeQuest,
        .steps = sEeveeQuestSteps,
        .varId = VAR_QUEST_EEVEE,
        .numSteps = NELEMS(sEeveeQuestSteps),
    },
};

// UI Implementation

struct QuestLogData
{
    u8 loadState;
    u8 cursor;
    u8 numActiveQuests;
    u8 activeQuestIndices[MAX_QUESTS];
};

static EWRAM_DATA struct QuestLogData *sQuestLogPtr = NULL;

static const struct WindowTemplate sQuestLogWinTemplates[] =
{
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 2,
        .width = 10,
        .height = 16,
        .paletteNum = 15,
        .baseBlock = 0x01
    },
    {
        .bg = 0,
        .tilemapLeft = 13,
        .tilemapTop = 2,
        .width = 15,
        .height = 16,
        .paletteNum = 15,
        .baseBlock = 0xA1
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sQuestLogBgTemplates[] =
{
   {
       .bg = 0,
       .charBaseIndex = 0,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
   },
};

static void QuestLog_InitCallbacks(void)
{
    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
}

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void BufferQuestList(void)
{
    u32 i;
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    for (i = 0; i < sQuestLogPtr->numActiveQuests; i++)
    {
        u8 questIdx = sQuestLogPtr->activeQuestIndices[i];
        AddTextPrinterParameterized(0, FONT_NORMAL, gQuests[questIdx].name, 8, i * 16 + 2, TEXT_SKIP_DRAW, NULL);
    }
    PutWindowTilemap(0);
    CopyWindowToVram(0, COPYWIN_FULL);
}

static void BufferQuestDetails(void)
{
    u8 questIdx = sQuestLogPtr->activeQuestIndices[sQuestLogPtr->cursor];
    u16 step = VarGet(gQuests[questIdx].varId);
    
    FillWindowPixelBuffer(1, PIXEL_FILL(1));
    if (step >= gQuests[questIdx].numSteps)
    {
        AddTextPrinterParameterized(1, FONT_NORMAL, (const u8 *)"COMPLETED", 4, 2, TEXT_SKIP_DRAW, NULL);
    }
    else
    {
        AddTextPrinterParameterized(1, FONT_NORMAL, gQuests[questIdx].steps[step].description, 4, 2, TEXT_SKIP_DRAW, NULL);
    }
    PutWindowTilemap(1);
    CopyWindowToVram(1, COPYWIN_FULL);
}

static void Task_QuestLog(u8 taskId)
{
    switch (sQuestLogPtr->loadState)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        sQuestLogPtr->loadState++;
        break;
    case 1:
        if (gPaletteFade.active)
            return;
        sQuestLogPtr->loadState++;
        break;
    case 2:
        if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            sQuestLogPtr->loadState++;
        }
        if (JOY_NEW(DPAD_UP))
        {
            if (sQuestLogPtr->cursor > 0)
            {
                PlaySE(SE_SELECT);
                sQuestLogPtr->cursor--;
                BufferQuestDetails();
            }
        }
        if (JOY_NEW(DPAD_DOWN))
        {
            if (sQuestLogPtr->cursor < sQuestLogPtr->numActiveQuests - 1)
            {
                PlaySE(SE_SELECT);
                sQuestLogPtr->cursor++;
                BufferQuestDetails();
            }
        }
        break;
    case 3:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
        sQuestLogPtr->loadState++;
        break;
    case 4:
        if (gPaletteFade.active)
            return;
        sQuestLogPtr->loadState++;
        break;
    case 5:
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
        FreeAllWindowBuffers();
        FREE_AND_SET_NULL(sQuestLogPtr);
        DestroyTask(taskId);
        break;
    }
}

void CB2_InitQuestLog(void)
{
    u32 i;
    QuestLog_InitCallbacks();
    sQuestLogPtr = AllocZeroed(sizeof(struct QuestLogData));
    sQuestLogPtr->loadState = 0;
    sQuestLogPtr->cursor = 0;
    sQuestLogPtr->numActiveQuests = 0;

    // Identify active quests
    for (i = 0; i < MAX_QUESTS; i++)
    {
        if (gQuests[i].name != NULL)
        {
            // For now, all defined quests are active if their var is >= 0
            // In a real system, you might use a flag to "start" a quest.
            sQuestLogPtr->activeQuestIndices[sQuestLogPtr->numActiveQuests++] = i;
        }
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sQuestLogBgTemplates, NELEMS(sQuestLogBgTemplates));
    InitWindows(sQuestLogWinTemplates);
    DeactivateAllTextPrinters();
    
    LoadStdWindowGfx(0, 0x21D, BG_PLTT_ID(15));
    LoadPalette(GetTextWindowPalette(2), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
    
    BufferQuestList();
    if (sQuestLogPtr->numActiveQuests > 0)
        BufferQuestDetails();
        
    ShowBg(0);
    SetVBlankCallback(VBlankCB);
    CreateTask(Task_QuestLog, 0);
    SetMainCallback2(MainCB2);
}

void SetQuestStep(u16 questVarId, u16 step)
{
    VarSet(questVarId, step);
}

u16 GetQuestStep(u16 questVarId)
{
    return VarGet(questVarId);
}

bool8 PlayerHasMoveWithType(u8 type)
{
    u32 i, j;
    for (i = 0; i < gPlayerPartyCount; i++)
    {
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u16 move = GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE && gMovesInfo[move].type == type)
                return TRUE;
        }
    }
    return FALSE;
}

bool8 PlayerHasMonWithType(u8 type)
{
    u32 i;
    for (i = 0; i < gPlayerPartyCount; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);
        if (species != SPECIES_NONE && (gSpeciesInfo[species].types[0] == type || gSpeciesInfo[species].types[1] == type))
            return TRUE;
    }
    return FALSE;
}

bool8 PlayerHasSpecies(u16 species)
{
    u32 i;
    for (i = 0; i < gPlayerPartyCount; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) == species)
            return TRUE;
    }
    return FALSE;
}

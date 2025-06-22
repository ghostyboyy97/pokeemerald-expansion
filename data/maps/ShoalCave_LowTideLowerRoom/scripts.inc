# 1 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideLowerRoom_OnLoad
# 4 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_OnLoad:
# 7 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	call ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles
# 8 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 9 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 10 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles::
# 11 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd
# 12 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 13 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 14 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 15 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd::
# 16 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 17 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 18 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4::
# 19 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lockall
# 20 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt
# 21 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 22 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 23 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 24 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_4
# 26 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 27 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 28 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"

# 29 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt::
# 30 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 31 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 32 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	end

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner::
# 37 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lock
# 38 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	faceplayer
# 39 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_USED_POWERFUL_SUMMONER, ShoalCave_LowTideLowerRoom_EventScript_UsedSummon
# 40 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_SummonerIntro, MSGBOX_YESNO
# 42 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_2
ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_1:
# 47 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
# 48 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_2:
# 44 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_PowerfulMonSummoner_1


ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom::
# 53 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichRoom, MSGBOX_DEFAULT
# 55 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_0, 0
# 56 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_1, 1
# 57 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_2, 2
# 58 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_3, MULTI_B_PRESSED
# 62 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 64 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_2
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_1:
# 69 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_5
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_4:
# 73 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_8
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_7:
# 77 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_11
ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_10:
# 82 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_2:
# 66 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_1

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_5:
# 71 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_4

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_8:
# 75 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_InnerRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_7

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_11:
# 79 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_StairsRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_10


ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom::
# 87 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 89 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_0, SPECIES_GREAT_TUSK
# 90 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_1, SPECIES_SCREAM_TAIL
# 91 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_2, SPECIES_BRUTE_BONNET
# 92 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_3, SPECIES_FLUTTER_MANE
# 93 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_4, SPECIES_SLITHER_WING
# 94 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_5, SPECIES_SANDY_SHOCKS
# 95 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_6, SPECIES_ROARING_MOON
# 96 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_7, SPECIES_WALKING_WAKE
# 97 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_8, SPECIES_GOUGING_FIRE
# 98 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_9, SPECIES_RAGING_BOLT
# 99 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 103 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_GREAT_TUSK, DYN_MULTICHOICE_CB_NONE
# 105 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_2
ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_1:
# 110 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 112 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_2:
# 107 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_1


ShoalCave_LowTideLowerRoom_EventScript_InnerRoom::
# 118 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 120 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_0, SPECIES_IRON_TREADS
# 121 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_1, SPECIES_IRON_BUNDLE
# 122 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_2, SPECIES_IRON_HANDS
# 123 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_3, SPECIES_IRON_JUGULIS
# 124 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_4, SPECIES_IRON_MOTH
# 125 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_5, SPECIES_IRON_THORNS
# 126 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_6, SPECIES_IRON_VALIANT
# 127 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_7, SPECIES_IRON_LEAVES
# 128 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_8, SPECIES_IRON_BOULDER
# 129 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_9, SPECIES_IRON_CROWN
# 130 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 134 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_IRON_TREADS, DYN_MULTICHOICE_CB_NONE
# 136 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_2
ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_1:
# 141 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 143 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_2:
# 138 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_1


ShoalCave_LowTideLowerRoom_EventScript_StairsRoom::
# 149 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_WhichPokemon, MSGBOX_DEFAULT
# 151 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_0, SPECIES_NIHILEGO
# 152 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_1, SPECIES_GUZZLORD
# 153 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_2, SPECIES_XURKITREE
# 154 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_3, SPECIES_BUZZWOLE
# 155 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_4, SPECIES_BLACEPHALON
# 156 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_5, SPECIES_STAKATAKA
# 157 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_6, SPECIES_POIPOLE
# 158 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_7, SPECIES_PHEROMOSA
# 159 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_8, SPECIES_CELESTEELA
# 160 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultipush ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10, MULTI_B_PRESSED
# 164 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, SPECIES_NIHILEGO, DYN_MULTICHOICE_CB_NONE
# 166 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_2
ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_1:
# 171 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon
# 173 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_2:
# 168 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom
	goto ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_1


ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon::
# 180 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 181 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8005
# 182 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_ConfirmSummon, MSGBOX_YESNO
# 184 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_2
ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_1:
# 189 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_USED_POWERFUL_SUMMONER
# 190 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_VeryWell, MSGBOX_DEFAULT
# 191 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 30
# 193 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setwildbattle VAR_0x8005, 50
# 194 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitse
# 195 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_ENCOUNTER
# 196 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	delay 40
# 197 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	waitmoncry
# 198 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	dowildbattle
# 199 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end

ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_2:
# 186 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo
	goto ShoalCave_LowTideLowerRoom_EventScript_ConfirmAndUseSummon_1


ShoalCave_LowTideLowerRoom_EventScript_UsedSummon::
# 205 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_CantSummon, MSGBOX_DEFAULT
# 206 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end


ShoalCave_LowTideLowerRoom_EventScript_SummonWomanManNo::
# 212 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_SummonWomanDeclined, MSGBOX_DEFAULT
# 213 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
	end


ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_0:
# 55 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Entrance Room$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_1:
# 56 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Inner Room$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_2:
# 57 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Stairs Room$"

ShoalCave_LowTideLowerRoom_EventScript_ChooseRoom_Text_3:
# 58 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Cancel$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_0:
# 89 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Great Tusk$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_1:
# 90 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Scream Tail$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_2:
# 91 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Brute Bonnet$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_3:
# 92 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Flutter Mane$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_4:
# 93 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Slither Wing$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_5:
# 94 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Sandy Shocks$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_6:
# 95 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Roaring Moon$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_7:
# 96 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Walking Wake$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_8:
# 97 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Gouging Fire$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_9:
# 98 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Raging Bolt$"

ShoalCave_LowTideLowerRoom_EventScript_EntranceRoom_Text_10:
# 99 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Back$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_0:
# 120 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Treads$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_1:
# 121 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Bundle$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_2:
# 122 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Hands$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_3:
# 123 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Jugulis$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_4:
# 124 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Moth$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_5:
# 125 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Thorns$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_6:
# 126 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Valiant$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_7:
# 127 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Leaves$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_8:
# 128 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Boulder$"

ShoalCave_LowTideLowerRoom_EventScript_InnerRoom_Text_9:
# 129 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Iron Crown$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_0:
# 151 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Nihilego$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_1:
# 152 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Guzzlord$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_2:
# 153 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Xurkitree$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_3:
# 154 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Buzzwole$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_4:
# 155 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Blacephalon$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_5:
# 156 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Stakataka$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_6:
# 157 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Poipole$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_7:
# 158 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Pheromosa$"

ShoalCave_LowTideLowerRoom_EventScript_StairsRoom_Text_8:
# 159 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Celesteela$"

ShoalCave_LowTideLowerRoom_Text_SummonerIntro::
# 218 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Hello, young trainer.\p"
	.string "I've come to this remote location\n"
	.string "because I have learned a powerful\l"
	.string "technique that allows me to summon one\l"
	.string "Pokémon from almost anywhere in this\l"
	.string "cave.\p"
	.string "I can only do this once though, would\n"
	.string "you like me to summon a Pokémon here so\l"
	.string "you can battle it?$"

ShoalCave_LowTideLowerRoom_Text_WhichRoom::
# 230 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Which room would you like me to summon a\n"
	.string "Pokémon from?$"

ShoalCave_LowTideLowerRoom_Text_WhichPokemon::
# 235 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "summon so you can battle?$"

ShoalCave_LowTideLowerRoom_Text_ConfirmSummon::
# 240 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "So you want me to summon a\n"
	.string "{STR_VAR_1} for you to battle?$"

ShoalCave_LowTideLowerRoom_Text_VeryWell::
# 245 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Very well, prepare yourself for battle.$"

ShoalCave_LowTideLowerRoom_Text_CantSummon::
# 249 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "I'm sorry, that's call I'm capable of\n"
	.string "doing now.\p"
	.string "You'll have to look around on your own\n"
	.string "if you want to find more of these\l"
	.string "powerful Pokémon.$"

ShoalCave_LowTideLowerRoom_SummonWomanDeclined::
# 257 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "I see. Let me know if you change\n"
	.string "your mind.$"

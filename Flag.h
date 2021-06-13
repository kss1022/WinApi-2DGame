#pragma once

enum SCENE_CREATE
{
	SC_CURRENT,
	SC_NEXT,
	SC_END
};

enum MOVE_DIR
{
	MD_BACK = -1,
	MD_NONE,
	MD_FRONT
};

enum COLLIDER_TYPE
{
	CT_REACT,
	CT_SPEARE,
	CT_LINE,
	CT_POINT,
	CT_PIXEL,
	CT_END
};

enum COLLISION_STATE
{
	CS_ENTER,
	CS_STAY,
	CS_LEAVE,
	CS_END
};

enum ANIMATION_TYPE
{
	AT_ATLAS,
	AT_FRAME,
	AT_END
};

enum ANIMATION_OPTION
{
	AO_LOPE,
	AO_ONCE_RETURN,
	AO_ONCE_DESTROY,
	AO_TIME_RETURN,
	AO_TIME_DESTROY,
	AO_END
};

enum SCENE_CHANGE
{
	SC_NONE,
	SC_CHANGE
};

enum TILE_OPTION
{
	TO_NONE,
	TO_NOMOVE,
};

enum TILE_EDIT_MODE
{
	TEM_TEXTURE,
	TEM_OPTION,
};


enum MOTION_TYPE
{
	MT_NONE,
	MT_MOVE,
	MT_FIGHT,
	MT_DEMAGE,
	MT_DIE
};
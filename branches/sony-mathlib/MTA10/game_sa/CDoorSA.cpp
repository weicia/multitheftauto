/*****************************************************************************
*
*  PROJECT:		Multi Theft Auto v1.0
*  LICENSE:		See LICENSE in the top level directory
*  FILE:		game_sa/CDoorSA.cpp
*  PURPOSE:		Vehicle door entity
*  DEVELOPERS:	Ed Lyons <eai@opencoding.net>
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#include "StdInc.h"

/**
 * \todo Find out what GetAngleOpenRatio actually does
 * @return float Not sure...
 */
float CDoorSA::GetAngleOpenRatio ( )
{
	DEBUG_TRACE("float CDoorSA::GetAngleOpenRatio ( )");
	DWORD dwFunction = FUNC_GetAngleOpenRatio;
	DWORD dwPointer = (DWORD)this;
	float fReturn = 0.0f;
	_asm
	{
		mov		ecx, dwPointer
		call	dwFunction
		fstp	fReturn
	}
	return fReturn;
}

/**
 * Checks if the door is closed
 * @return bool TRUE if the door is closed, FALSE otherwise
 */
bool CDoorSA::IsClosed (  )
{
	DEBUG_TRACE("bool CDoorSA::IsClosed (  )");
	DWORD dwFunction = FUNC_IsClosed;
	DWORD dwPointer = (DWORD)this;
	bool bReturn = false;
	_asm
	{
		mov		ecx, dwPointer
		call	dwFunction
		mov		bReturn, al
	}
	return bReturn;
}

/**
 * Checks if the door is completely open
 * @return bool TRUE if the door is fully opened, FALSE if it is opening, is closed or is missing.
 * \todo Check what this returns if the door has been ripped off
 */
bool CDoorSA::IsFullyOpen (  )
{
	DEBUG_TRACE("bool CDoorSA::IsFullyOpen (  )");
	DWORD dwFunction = FUNC_IsFullyOpen;
	DWORD dwPointer = (DWORD)this;
	bool bReturn = false;
	_asm
	{
		mov		ecx, dwPointer
		call	dwFunction
		mov		bReturn, al
	}
	return bReturn;
}

/**
 * Opens the door
 * @param fUnknown Not sure...
 * \todo Check what the parameter for Open does
 */
void CDoorSA::Open ( float fUnknown )
{
	DEBUG_TRACE("void CDoorSA::Open ( float fUnknown )");
	DWORD dwFunction = FUNC_Open;
	DWORD dwPointer = (DWORD)this;
	_asm
	{
		mov		ecx, dwPointer
		push	fUnknown
		call	dwFunction
	}
}
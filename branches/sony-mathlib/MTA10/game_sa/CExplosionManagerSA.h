/*****************************************************************************
*
*  PROJECT:		Multi Theft Auto v1.0
*  LICENSE:		See LICENSE in the top level directory
*  FILE:		game_sa/CExplosionManagerSA.h
*  PURPOSE:		Header file for explosion manager class
*  DEVELOPERS:	Ed Lyons <eai@opencoding.net>
*               Christian Myhre Lundheim <>
*               Cecill Etheredge <ijsf@gmx.net>
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#ifndef __CGAMESA_EXPLOSIONMANAGER
#define __CGAMESA_EXPLOSIONMANAGER

#include <game/CExplosionManager.h>
#include "CExplosionSA.h"

#define FUNC_AddExplosion				0x736A50 // ##SA##

#define ARRAY_Explosions				0xC88950

#define MAX_EXPLOSIONS					48

class CExplosionManagerSA : public CExplosionManager
{
	CExplosionSA	* Explosions[MAX_EXPLOSIONS];

public:
	// constructor
	CExplosionManagerSA( void );
    ~CExplosionManagerSA( void );

	CExplosion*		AddExplosion( eExplosionType explosiontype, const CVector& vecPosition, CEntity * creator = NULL, bool bMakeSound = true, float fCamShake = -1.0f, bool bNoDamage = false );
	void			RemoveAllExplosionsInArea( const CVector& vecPosition, float fRadius );
	void			RemoveAllExplosions( void );
	CExplosion*		GetExplosion( DWORD ID );
	CExplosion*		FindFreeExplosion( void );
};

#endif
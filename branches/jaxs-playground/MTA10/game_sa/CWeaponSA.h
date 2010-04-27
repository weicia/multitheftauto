/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        game_sa/CWeaponSA.h
*  PURPOSE:     Header file for weapon class
*  DEVELOPERS:  Ed Lyons <eai@opencoding.net>
*               Cecill Etheredge <ijsf@gmx.net>
*               Jax <>
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#ifndef __CGAMESA_WEAPON
#define __CGAMESA_WEAPON

#include "CGameSA.h"
#include <game/CWeapon.h>
#include <game/CPed.h>

#define FUNC_Shutdown                                   0x73A380
#define FUNC_CWeapon_CheckForShootingVehicleOccupant    0x73f480
#define FUNC_CWeapon_Initialize                         0x73b4a0
#define FUNC_CWeapon_Update                             0x73db40
#define FUNC_CWeapon_Fire                               0x742300
#define FUNC_CWeapon_AddGunshell                        0x73a3e0
#define FUNC_CWeapon_DoBulletImpact                     0x73b550
#define FUNC_CWeapon_GenerateDamageEvent                0x73a530

extern CGameSA * pGame;

class CWeaponSAInterface
{
public:
	eWeaponType		m_eWeaponType;
	eWeaponState	m_eState;
	DWORD			m_nAmmoInClip;
	DWORD			m_nAmmoTotal;
	DWORD			m_nTimer;
    DWORD           m_Unknown_1;
    DWORD           m_Unknown_2;
};

class CWeaponSA : public CWeapon
{
public:
	                        CWeaponSA           ( CWeaponSAInterface * pInterface, CPed * pOwner, eWeaponSlot weaponSlot );
	
    void                    Destroy             ( void );

    eWeaponType		        GetType             ( void );
	void			        SetType             ( eWeaponType type );
	eWeaponState	        GetState            ( void );
    void                    SetState            ( eWeaponState state );
	DWORD			        GetAmmoInClip       ( void );
	void			        SetAmmoInClip       ( DWORD dwAmmoInClip );
	DWORD			        GetAmmoTotal        ( void );
	void			        SetAmmoTotal        ( DWORD dwAmmoTotal );
	
	CPed *                  GetPed              ( void );
	eWeaponSlot		        GetSlot             ( void );

	void			        SetAsCurrentWeapon  ( void );
	CWeaponInfo *           GetInfo             ( void ) { return pGame->GetWeaponInfo ( GetType () ); }

    void                    Remove              ( void );

    void                    Initialize          ( eWeaponType type, unsigned int uiAmmo, CPed * pPed );
    void                    Update              ( CPed * pPed );
    bool                    Fire                ( CEntity * pFiringEntity, CVector * pvecOrigin, CVector * pvecOffset, CEntity * pTargetEntity, CVector * pvec_1, CVector * pvec_2 );
    void                    AddGunshell         ( CEntity * pFiringEntity, CVector * pvecOrigin, CVector2D * pvecDirection, float fSize );
    void                    DoBulletImpact      ( CEntity * pFiringEntity, CEntity * pEntity, CVector * pvecOrigin, CVector * pvecTarget, CColPoint * pColPoint, int i_1 );
    unsigned char           GenerateDamageEvent ( CPed * pPed, CEntity * pResponsible, eWeaponType weaponType, int iDamagePerHit, ePedPieceTypes hitZone, int i_2 );

private:
	CWeaponSAInterface *    m_pInterface;
	CPed *                  m_pOwner;
	eWeaponSlot 			m_weaponSlot;
};

#endif
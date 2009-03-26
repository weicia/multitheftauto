/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/deathmatch/logic/packets/CVehiclePuresyncPacket.h
*  PURPOSE:     Vehicle pure synchronization packet class
*  DEVELOPERS:  Christian Myhre Lundheim <>
*               Jax <>
*               Cecill Etheredge <>
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#ifndef __PACKETS_CVEHICLEPURESYNCPACKET_H
#define __PACKETS_CVEHICLEPURESYNCPACKET_H

#include "CCommon.h"
#include "CPacket.h"
#include "CPlayer.h"

class CVehicle;

class CVehiclePuresyncPacket : public CPacket
{
public:
    inline                      CVehiclePuresyncPacket      ( void )                        {};
    inline explicit             CVehiclePuresyncPacket      ( class CPlayer* pPlayer )      { m_pSourceElement = pPlayer; };

    inline ePacketID            GetPacketID                 ( void ) const                  { return PACKET_ID_PLAYER_VEHICLE_PURESYNC; };
    inline unsigned long        GetFlags                    ( void ) const                  { return PACKET_LOW_PRIORITY; };

    bool                        Read                        ( NetServerBitStreamInterface& BitStream );
    bool                        Write                       ( NetServerBitStreamInterface& BitStream ) const;

private:
    void                        ReadVehicleSpecific         ( class CVehicle* pVehicle, NetServerBitStreamInterface& BitStream );
    void                        WriteVehicleSpecific        ( class CVehicle* pVehicle, NetServerBitStreamInterface& BitStream ) const;
};

#endif
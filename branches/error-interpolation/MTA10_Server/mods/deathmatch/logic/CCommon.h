/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        mods/deathmatch/logic/CCommon.h
*  PURPOSE:     Common definitions and enumerations header
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/

#ifndef __CCOMMON_H
#define __CCOMMON_H

#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <vector>
#include <algorithm>
#include <CVector.h>
#include <common/CGenericManager.h>
#include <common/CGeneric.h>
#include <core/CServerInterface.h>

// Globals
extern CServerInterface* g_pServerInterface;
extern CNetServer* g_pNetServer;

#define REMOTE_ADMIN_ID 254
#define CONSOLE_ID 255

#define MAX_HTTP_DOWNLOAD_URL 512

enum eHTTPDownloadType
{
    HTTP_DOWNLOAD_DISABLED = 0,
    HTTP_DOWNLOAD_ENABLED_PORT,
    HTTP_DOWNLOAD_ENABLED_URL
};

enum
{
	VT_LANDSTAL = 400,
	VT_BRAVURA,
	VT_BUFFALO,
	VT_LINERUN,
	VT_PEREN,
	VT_SENTINEL,
	VT_DUMPER,
	VT_FIRETRUK,
	VT_TRASH,
	VT_STRETCH,
	VT_MANANA,
	VT_INFERNUS,
	VT_VOODOO,
	VT_PONY,
	VT_MULE,
	VT_CHEETAH,
	VT_AMBULAN,
    VT_LEVIATHN,
	VT_MOONBEAM,
	VT_ESPERANT,
	VT_TAXI,
	VT_WASHING,
	VT_BOBCAT,
	VT_MRWHOOP,
	VT_BFINJECT,
    VT_HUNTER,
	VT_PREMIER,
	VT_ENFORCER,
	VT_SECURICA,
	VT_BANSHEE,
    VT_PREDATOR,
	VT_BUS,
	VT_RHINO,
	VT_BARRACKS,
	VT_HOTKNIFE,
	VT_ARTICT1,
	VT_PREVION,
	VT_COACH,
	VT_CABBIE,
	VT_STALLION,
	VT_RUMPO,
	VT_RCBANDIT,
	VT_ROMERO,
	VT_PACKER,
	VT_MONSTER,
	VT_ADMIRAL,
	VT_SQUALO,
	VT_SEASPAR,
	VT_PIZZABOY,
    VT_TRAM,
    VT_ARTICT2,
	VT_TURISMO,
    VT_SPEEDER,
    VT_REEFER,
    VT_TROPIC,
	VT_FLATBED,
	VT_YANKEE,
	VT_CADDY,
	VT_SOLAIR,
	VT_TOPFUN,
    VT_SKIMMER,
    VT_PCJ600,
    VT_FAGGIO,
    VT_FREEWAY, 
    VT_RCBARON,
    VT_RCRAIDER,
	VT_GLENDALE,
	VT_OCEANIC,
	VT_SANCHEZ,
	VT_SPARROW,
    VT_PATRIOT,
    VT_QUAD,
    VT_COASTG,
    VT_DINGHY,
    VT_HERMES,
	VT_SABRE,
    VT_RUSTLER,
	VT_ZR350,
	VT_WALTON,
	VT_REGINA,
	VT_COMET,
    VT_BMX,
	VT_BURRITO,
	VT_CAMPER,
    VT_MARQUIS,
	VT_BAGGAGE,
	VT_DOZER,	
    VT_MAVERICK,
    VT_VCNMAV,
	VT_RANCHER,
	VT_FBIRANCHER,
	VT_VIRGO,
	VT_GREENWOOD,
    VT_JETMAX,
	VT_HOTRING,
	VT_SANDKING,
	VT_BLISTAC,
    VT_POLMAV,
	VT_BOXVILLE,
	VT_BENSON,
	VT_MESA,
    VT_RCGOBLIN,
	VT_HOTRINGA,
	VT_HOTRINGB,
    VT_BLOODRA,
    VT_RNCHLURE,
	VT_SUPERGT,
	VT_ELEGANT,
	VT_JOURNEY,
    VT_BIKE,
    VT_MTBIKE,
    VT_BEAGLE,
    VT_CROPDUST,
    VT_STUNT,
	VT_PETRO,
	VT_RDTRAIN,
	VT_NEBULA,
	VT_MAJESTIC,
	VT_BUCCANEE,
    VT_SHAMAL,
    VT_HYDRA,
    VT_FCR900,
    VT_NRG500,
    VT_COPBIKE,
	VT_CEMENT,
	VT_TOWTRUCK,
	VT_FORTUNE,
	VT_CADRONA,
	VT_FBITRUCK,
	VT_WILLARD,
	VT_FORKLIFT,
	VT_TRACTOR,
	VT_COMBINE,
	VT_FELTZER,
	VT_REMINGTN,
	VT_SLAMVAN,
	VT_BLADE,
	VT_FREIGHT,
	VT_STREAK,
    VT_VORTEX,
	VT_VINCENT,
	VT_BULLET,
	VT_CLOVER,
	VT_SADLER,
	VT_FIRELA,
	VT_HUSTLER,
	VT_INTRUDER,
	VT_PRIMO,
    VT_CARGOBOB,
	VT_TAMPA,
	VT_SUNRISE,
	VT_MERIT,
	VT_UTILITY,
    VT_NEVADA,
	VT_YOSEMITE,
	VT_WINDSOR,
	VT_MONSTER_A,
	VT_MONSTER_B,
	VT_URANUS,
	VT_JESTER,
	VT_SULTAN,
	VT_STRATUM,
	VT_ELEGY,
    VT_RAINDANC,
	VT_TIGER,
	VT_FLASH,
	VT_TAHOMA,
	VT_SAVANNA,
	VT_BANDITO,
	VT_FREIFLAT,
	VT_STREAKC,
	VT_KART,
	VT_MOWER,
	VT_DUNERIDE,
	VT_SWEEPER,
	VT_BROADWAY,
	VT_TORNADO,
	VT_AT400,
    VT_DFT30,
	VT_HUNTLEY,
	VT_STAFFORD,
    VT_BF400,
	VT_NEWSVAN,
	VT_TUG,
	VT_PETROTR,
	VT_EMPEROR,
    VT_WAYFARER,
	VT_EUROS,
	VT_HOTDOG,
	VT_CLUB,
	VT_FREIBOX,
    VT_ARTICT3,
    VT_ANDROM,
    VT_DODO,
	VT_RCCAM,
    VT_LAUNCH,
	VT_COPCARLA,
    VT_COPCARSF,
    VT_COPCARVG,
    VT_COPCARRU,
	VT_PICADOR,
	VT_SWATVAN,
	VT_ALPHA,
	VT_PHEONIX,
    VT_GLENSHIT,
    VT_SADLSHIT,
	VT_BAGBOXA,
	VT_BAGBOXB,
	VT_TUGSTAIR,
	VT_BOXBURG,
	VT_FARMTR1,
	VT_UTILTR1,
    VT_MAX
};

#endif

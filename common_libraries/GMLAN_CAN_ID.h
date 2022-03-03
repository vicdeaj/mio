#include "LSP.h"
#ifdef USE_GMLAN_CAN_ID
#ifndef GMLAN_CAN_ID_H
#define GMLAN_CAN_ID_H

//#define USING_GMLAN_V1 // defined in IDE
//#define KM_H // un-comment if you want to use km/h

// CAN ID's receive
#define USDT_REQ_TO_All_LS_ECUs_ID 0x101	
#define	POWER_MODE_ID 0x10002040L

#define DRIVERS_DOOR_STATUS_ID 0x100360A0L
#define DRIVERS_DOOR_STATUS_BCM_ID 0x10036040L
#define DOOR_STATUS_ALL_ID 0x10036000L

#define	SWC_ID 0x100D0040L
#define	ONSTAR_ID 0x1031C097L
#define	RSC_ID 0x10314085L
#define	AMPLIFIER_ID 0x10312081L

#define GEAR_INFORMATION_ID 0x1004a040L
#define PARK_ASSIST_REAR_DISTANCE_ID 0x1011C0BBL
#define DIMMER_ID 0x10022040L
#define LIGHTING_STATUS_ID 0x10042040
#define VSS_ID	0xC050040L
#define PARKING_BRAKE_ID 0x1005e040L
#define MIRROR_MOVEMENT_REQUEST_ID 0x820A0L

#define CHIME_COMMAND_All_ID 0x1001E000L
#define CHIME_COMMAND_BCM_ID 0x1001E040L
#define CHIME_COMMAND_IPC_ID 0x1001E060L
#define CHIME_COMMAND_SDM_ID 0x1001E058L
#define CHIME_COMMAND_UPA_ID 0x1001E0BBL
#define CHIME_COMMAND_IRC_ID 0x1001E080l
#define PERSONAL_CHIME_REQUEST_ID 0x1008A060L

#define AUDIO_SOURCE_STATUS_XM_ID 0x1031C089L // XM
#define AUDIO_SOURCE_STATUS_ONSTAR_ID 0x1031C085L // OnStar
#define ENTERTAINMENT_ID 0x10310000L
#define REMOTE_RECEIVER_STATUS_ID 0x1031E089L

#define VIN_Digits_2_to_9 0x10024040L
#define VIN_Digits_10_to_17 0x10026040L


#define HIGH_VOLTAGE_WAKEUP_ID 0x100


// CAN ID's to send
#define AUDIO_MASTER_ARBITRATION_COMMAND_ID 0x1028A080L
#define AMPLIFIER_CONTROL_ID 0x10292080L
#define ADVANCED_REMOTE_RECEIVER_CONTROL_IRC_ID 0x10296080L
#define AMPLIFIER_MUTE_ID 0x10286080L
#define AMPLIFIER_SETTINGS_ID 0x10284080L
#define REAR_SEAT_AUDIO_STATUS_ID 0x10310080L
#define INFOTAINMENT_ALLOWED_ID 0x10012080L
#define NCA_INTEGRATED_RADIO_CHASSIS_ID 0x0FFFE080L
#define NCA_FROM_SDAR_ID 0x0fFFE089L
#define CHIME_STATUS_ID 0x10020080L
#define PERSONAL_CHIME_STATUS_ID 0x10088080L
#define VOICE_RECOGNITION_STATUS_IRC_ID 0x10298080L

// Radio
#define ARB_TEXT_REQ_SET_DISP_PARAMETERS_IRC_ID 0x1030A080L
#define ARB_TEXT_REQ_SET_DISPLAY_TEXT_IRC_ID 0x1030C080L
#define ARB_TEXT_DISPLAY_GEN_ATTRIBUTE_IRC_ID 0x10300080L
#define ARB_TEXT_DISPLAY_LINE_ATTRIBUTE_IRC_ID 0x10302080L
#define ARB_TEXT_DISPLAY_ICON_ATTRIBUTE_IRC_ID 0x10320080L
#define ARB_TEXT_DISPLAY_STATUS_IRC_ID 0x10306080L

// SDAR
#define ARB_TEXT_REQ_SET_DISP_PARAMETERS_SDAR_ID 0x1030A089L
#define ARB_TEXT_REQ_SET_DISPLAY_TEXT_SDAR_ID 0x1030C089L

//RSE
#define ARB_TEXT_DISPLAY_STATUS_RSE_ID 0x10306085L


#endif // GMLAN_CAN_ID_H
#endif // USE_GMLAN_CAN_ID

/*
* InputFPPRemoteFsm.cpp
*
* Project: ESPixelStick - An ESP8266 / ESP32 and E1.31 based pixel driver
* Copyright (c) 2021 Shelby Merrick
* http://www.forkineye.com
*
*  This program is provided free for you to use in any way that you wish,
*  subject to the laws and regulations where you are using it.  Due diligence
*  is strongly suggested before using this code.  Please give credit where due.
*
*  The Author makes no warranty of any kind, express or implied, with regard
*  to this program or the documentation contained in this document.  The
*  Author shall not be liable in any event for incidental or consequential
*  damages in connection with, or arising out of, the furnishing, performance
*  or use of these programs.
*
*   Fsm object used to parse and play an effect
*/

#include "InputFPPRemotePlayEffect.hpp"
#include "../service/FPPDiscovery.h"

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_Idle::Poll (uint8_t * Buffer, size_t BufferSize)
{
    // DEBUG_START;

    // do nothing

    // DEBUG_END;

} // fsm_PlayEffect_state_Idle::Poll

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_Idle::Init (c_InputFPPRemotePlayEffect* Parent)
{
    // DEBUG_START;

    p_InputFPPRemotePlayEffect = Parent;
    p_InputFPPRemotePlayEffect->pCurrentFsmState = &(Parent->fsm_PlayEffect_state_Idle_imp);

    // DEBUG_END;

} // fsm_PlayEffect_state_Idle::Init

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_Idle::Start (String & ConfigString, float )
{
    // DEBUG_START;

    // DEBUG_V (String ("ConfigString: '") + ConfigString + "'");
    p_InputFPPRemotePlayEffect->PLayEffectEndTime = millis () + (1000 * p_InputFPPRemotePlayEffect->PlayDurationSec);
    
    // tell the effect engine what it is supposed to be doing
    DynamicJsonDocument EffectConfig (512);
    DeserializationError error = deserializeJson ((EffectConfig), (const String)ConfigString);

    // DEBUG_V ("Error Check");
    if (error)
    {
        String CfgFileMessagePrefix = String (F ("Effect Config: '")) + ConfigString + "' ";
        logcon (CN_Heap_colon + String (ESP.getFreeHeap ()));
        logcon (CfgFileMessagePrefix + String (F ("Deserialzation Error. Error code = ")) + error.c_str ());
        logcon (CN_plussigns + ConfigString + CN_minussigns);
    }

    JsonObject ConfigObject = EffectConfig.as<JsonObject> ();

    String EffectName;
    setFromJSON (EffectName, ConfigObject, CN_currenteffect);
    logcon (String (F ("Playing Effect: '")) + EffectName + "'");

    p_InputFPPRemotePlayEffect->EffectsEngine.SetConfig (ConfigObject);
    p_InputFPPRemotePlayEffect->fsm_PlayEffect_state_PlayingEffect_imp.Init (p_InputFPPRemotePlayEffect);

    // DEBUG_END;

} // fsm_PlayEffect_state_Idle::Start

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_Idle::Stop (void)
{
    // DEBUG_START;

    // Do nothing

    // DEBUG_END;

} // fsm_PlayEffect_state_Idle::Stop

//-----------------------------------------------------------------------------
bool fsm_PlayEffect_state_Idle::Sync (float)
{
    // DEBUG_START;

    // Do Nothing

    // DEBUG_END;

    return false;

} // fsm_PlayEffect_state_Idle::Sync

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_Idle::GetStatus (JsonObject& jsonStatus)
{
    // DEBUG_START;

    jsonStatus[CN_TimeRemaining] = F ("00:00");

    // DEBUG_END;

} // fsm_PlayEffect_state_Idle::GetStatus

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_PlayingEffect::Poll (uint8_t * Buffer, size_t BufferSize)
{
    // DEBUG_START;

    p_InputFPPRemotePlayEffect->EffectsEngine.SetBufferInfo (Buffer, BufferSize);
    p_InputFPPRemotePlayEffect->EffectsEngine.Process ();

    if (p_InputFPPRemotePlayEffect->PLayEffectEndTime <= millis ())
    {
        // DEBUG_V ("");
        Stop ();
    }

    // DEBUG_END;

} // fsm_PlayEffect_state_PlayingEffect::Poll

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_PlayingEffect::Init (c_InputFPPRemotePlayEffect* Parent)
{
    // DEBUG_START;

    p_InputFPPRemotePlayEffect = Parent;
    p_InputFPPRemotePlayEffect->pCurrentFsmState = &(Parent->fsm_PlayEffect_state_PlayingEffect_imp);

    p_InputFPPRemotePlayEffect->EffectsEngine.SetOperationalState (true);

    // DEBUG_END;

} // fsm_PlayEffect_state_PlayingEffect::Init

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_PlayingEffect::Start (String &, float)
{
    // DEBUG_START;

    p_InputFPPRemotePlayEffect->EffectsEngine.SetOperationalState (true);
    InputMgr.SetOperationalState (false);

    // DEBUG_END;

} // fsm_PlayEffect_state_PlayingEffect::Start

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_PlayingEffect::Stop (void)
{
    // DEBUG_START;

    p_InputFPPRemotePlayEffect->EffectsEngine.SetOperationalState (false);
    InputMgr.SetOperationalState (true);

    p_InputFPPRemotePlayEffect->fsm_PlayEffect_state_Idle_imp.Init (p_InputFPPRemotePlayEffect);

    // DEBUG_END;

} // fsm_PlayEffect_state_PlayingEffect::Stop

//-----------------------------------------------------------------------------
bool fsm_PlayEffect_state_PlayingEffect::Sync (float)
{
    // DEBUG_START;

    // do nothing

    // DEBUG_END;

    return false;

} // fsm_PlayEffect_state_PlayingEffect::Sync

//-----------------------------------------------------------------------------
void fsm_PlayEffect_state_PlayingEffect::GetStatus (JsonObject& jsonStatus)
{
    // DEBUG_START;

    time_t now = millis ();
    time_t SecondsRemaining = (p_InputFPPRemotePlayEffect->PLayEffectEndTime - now) / 1000;
    if (now > p_InputFPPRemotePlayEffect->PLayEffectEndTime)
    {
        SecondsRemaining = 0;
    }

    time_t MinutesRemaining = min (time_t (999), time_t (SecondsRemaining / 60));
    SecondsRemaining = SecondsRemaining % 60;

    char buf[10];
    sprintf (buf, "%02u:%02u", uint32_t(MinutesRemaining), uint32_t(SecondsRemaining));
    jsonStatus[CN_TimeRemaining] = buf;

    p_InputFPPRemotePlayEffect->EffectsEngine.GetStatus (jsonStatus);

    // DEBUG_END;

} // fsm_PlayEffect_state_PlayingEffect::GetStatus

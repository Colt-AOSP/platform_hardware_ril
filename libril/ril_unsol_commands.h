/* //device/libs/telephony/ril_unsol_commands.h
**
** Copyright 2006, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
    {RIL_UNSOL_RESPONSE_RADIO_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_CALL_STATE_CHANGED, radio::callStateChangedInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_VOICE_NETWORK_STATE_CHANGED, radio::voiceNetworkStateChangedInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS, radio::newSmsInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT, radio::newSmsStatusReportInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS_ON_SIM, radio::newSmsOnSimInd, WAKE_PARTIAL},
    {RIL_UNSOL_ON_USSD, radio::onUssdInd, WAKE_PARTIAL},
    {RIL_UNSOL_ON_USSD_REQUEST, responseVoid, DONT_WAKE},
    {RIL_UNSOL_NITZ_TIME_RECEIVED, radio::nitzTimeReceivedInd, WAKE_PARTIAL},
    {RIL_UNSOL_SIGNAL_STRENGTH, responseRilSignalStrength, DONT_WAKE},
    {RIL_UNSOL_DATA_CALL_LIST_CHANGED, radio::dataCallListChangedInd, WAKE_PARTIAL},
    {RIL_UNSOL_SUPP_SVC_NOTIFICATION, radio::suppSvcNotifyInd, WAKE_PARTIAL},
    {RIL_UNSOL_STK_SESSION_END, radio::stkSessionEndInd, WAKE_PARTIAL},
    {RIL_UNSOL_STK_PROACTIVE_COMMAND, radio::stkProactiveCommandInd, WAKE_PARTIAL},
    {RIL_UNSOL_STK_EVENT_NOTIFY, radio::stkEventNotifyInd, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CALL_SETUP, radio::stkCallSetupInd, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_SMS_STORAGE_FULL, radio::simSmsStorageFullInd, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_REFRESH, radio::simRefreshInd, WAKE_PARTIAL},
    {RIL_UNSOL_CALL_RING, radio::callRingInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_SIM_STATUS_CHANGED, radio::simStatusChangedInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_CDMA_NEW_SMS, radio::cdmaNewSmsInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_BROADCAST_SMS, radio::newBroadcastSmsInd, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_RUIM_SMS_STORAGE_FULL, radio::cdmaRuimSmsStorageFullInd, WAKE_PARTIAL},
    {RIL_UNSOL_RESTRICTED_STATE_CHANGED, radio::restrictedStateChangedInd, WAKE_PARTIAL},
    {RIL_UNSOL_ENTER_EMERGENCY_CALLBACK_MODE, radio::enterEmergencyCallbackModeInd, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_CALL_WAITING, radio::cdmaCallWaitingInd, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_OTA_PROVISION_STATUS, radio::cdmaOtaProvisionStatusInd, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_INFO_REC, radio::cdmaInfoRecInd, WAKE_PARTIAL},
    {RIL_UNSOL_OEM_HOOK_RAW, responseRaw, WAKE_PARTIAL},
    {RIL_UNSOL_RINGBACK_TONE, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_RESEND_INCALL_MUTE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_SUBSCRIPTION_SOURCE_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_PRL_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_EXIT_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RIL_CONNECTED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_VOICE_RADIO_TECH_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CELL_INFO_LIST, responseCellInfoList, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_UICC_SUBSCRIPTION_STATUS_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_SRVCC_STATE_NOTIFY, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_HARDWARE_CONFIG_CHANGED, responseHardwareConfig, WAKE_PARTIAL},
    {RIL_UNSOL_DC_RT_INFO_CHANGED, responseDcRtInfo, WAKE_PARTIAL},
    {RIL_UNSOL_RADIO_CAPABILITY, responseRadioCapability, WAKE_PARTIAL},
    {RIL_UNSOL_ON_SS, responseSSData, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CC_ALPHA_NOTIFY, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_LCEDATA_RECV, responseLceData, WAKE_PARTIAL},
    {RIL_UNSOL_PCO_DATA, responsePcoData, WAKE_PARTIAL},

#pragma once
/*
* ConstNames.hpp - List of strings that can be reused
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
*/

#ifdef ARDUINO_ARCH_ESP8266
    // putting const strings in PROGMEM does not work on the ESP8266
#   define CN_PROGMEM
#else // !ARDUINO_ARCH_ESP8266
#   define CN_PROGMEM PROGMEM
#endif // !def ARDUINO_ARCH_ESP8266

extern const String VERSION;
extern const String BUILD_DATE;

extern const CN_PROGMEM char CN_active [];
extern const CN_PROGMEM char CN_ActiveHigh [];
extern const CN_PROGMEM char CN_activedelay [];
extern const CN_PROGMEM char CN_activevalue [];
extern const CN_PROGMEM char CN_ActiveLow [];
extern const CN_PROGMEM char CN_admin [];
extern const CN_PROGMEM char CN_addr [];
extern const CN_PROGMEM char CN_advancedView [];
extern const CN_PROGMEM char CN_allleds [];
extern const CN_PROGMEM char CN_Alexa [];
extern const CN_PROGMEM char CN_APA102 [];
extern const CN_PROGMEM char CN_ap_fallback [];
extern const CN_PROGMEM char CN_ap_timeout [];
extern const CN_PROGMEM char CN_ap_reboot [];
extern const CN_PROGMEM char CN_appendnullcount [];
extern const CN_PROGMEM char CN_arch [];
extern const CN_PROGMEM char CN_Artnet [];
extern const CN_PROGMEM char CN_as [];
extern const CN_PROGMEM char CN_availabilitytopic [];
extern const CN_PROGMEM char CN_b [];
extern const CN_PROGMEM char CN_b16 [];
extern const CN_PROGMEM char CN_baudrate [];
extern const CN_PROGMEM char CN_blanktime [];
extern const CN_PROGMEM char CN_Boot [];
extern const CN_PROGMEM char CN_bridge [];
extern const CN_PROGMEM char CN_brightness [];
extern const CN_PROGMEM char CN_bytesreceived [];
extern const CN_PROGMEM char CN_built [];
extern const CN_PROGMEM char CN_cfgver [];
extern const CN_PROGMEM char CN_ChannelCount [];
extern const CN_PROGMEM char CN_channels [];
extern const CN_PROGMEM char CN_clean [];
extern const CN_PROGMEM char CN_clock_pin [];
extern const CN_PROGMEM char CN_cmd [];
extern const CN_PROGMEM char CN_color [];
extern const CN_PROGMEM char CN_color_order [];
extern const CN_PROGMEM char CN_command_topic [];
extern const CN_PROGMEM char CN_CompressionType [];
extern const CN_PROGMEM char CN_Configuration_File_colon [];
extern const CN_PROGMEM char CN_config [];
extern const CN_PROGMEM char CN_configured [];
extern const CN_PROGMEM char CN_connected [];
extern const CN_PROGMEM char CN_connecting [];
extern const CN_PROGMEM char CN_count [];
extern const CN_PROGMEM char CN_currenteffect [];
extern const CN_PROGMEM char CN_cs_pin [];
extern const CN_PROGMEM char CN_currentlimit [];
extern const CN_PROGMEM char CN_current_sequence [];
extern const CN_PROGMEM char CN_date [];
extern const CN_PROGMEM char CN_data_pin [];
extern const CN_PROGMEM char CN_ddp [];
extern const CN_PROGMEM char CN_delete [];
extern const CN_PROGMEM char CN_device [];
extern const CN_PROGMEM char CN_dhcp [];
extern const CN_PROGMEM char CN_description [];
extern const CN_PROGMEM char CN_Default [];
extern const CN_PROGMEM char CN_disabled [];
extern const CN_PROGMEM char CN_Disabled [];
extern const CN_PROGMEM char CN_Disconnected [];
extern const CN_PROGMEM char CN_Dotfseq [];
extern const CN_PROGMEM char CN_Dotjson [];
extern const CN_PROGMEM char CN_Dotpl [];
extern const CN_PROGMEM char CN_DMX [];
extern const CN_PROGMEM char CN_duration [];
extern const CN_PROGMEM char CN_e131 [];
extern const CN_PROGMEM char CN_ecb [];
extern const CN_PROGMEM char CN_effect [];
extern const CN_PROGMEM char CN_effect_list [];
extern const CN_PROGMEM char CN_EffectAllLeds [];
extern const CN_PROGMEM char CN_EffectBrightness [];
extern const CN_PROGMEM char CN_EffectColor [];
extern const CN_PROGMEM char CN_EffectMirror [];
extern const CN_PROGMEM char CN_EffectReverse [];
extern const CN_PROGMEM char CN_EffectSpeed [];
extern const CN_PROGMEM char CN_EffectWhiteChannel [];
extern const CN_PROGMEM char CN_Effect [];
extern const CN_PROGMEM char CN_effects [];
extern const CN_PROGMEM char CN_EFUPD [];
extern const CN_PROGMEM char CN_en [];
extern const CN_PROGMEM char CN_enabled [];
extern const CN_PROGMEM char CN_End [];
extern const CN_PROGMEM char CN_entry [];
extern const CN_PROGMEM char CN_errors [];
extern const CN_PROGMEM char CN_Error [];
extern const CN_PROGMEM char CN_ERROR [];
extern const CN_PROGMEM char CN_ESP [];
extern const CN_PROGMEM char CN_ESP32 [];
extern const CN_PROGMEM char CN_ESP8266 [];
extern const CN_PROGMEM char CN_ESPixelStick [];
extern const CN_PROGMEM char CN_eth [];
extern const CN_PROGMEM char CN_Ethernet [];
extern const CN_PROGMEM char CN_EthDrv [];
extern const CN_PROGMEM char CN_false [];
extern const CN_PROGMEM char CN_File [];
extern const CN_PROGMEM char CN_file [];
extern const CN_PROGMEM char CN_filename [];
extern const CN_PROGMEM char CN_files [];
extern const CN_PROGMEM char CN_forkineye [];
extern const CN_PROGMEM char CN_Forkineye [];
extern const CN_PROGMEM char CN_forkineyeSlash [];
extern const CN_PROGMEM char CN_fppd [];
extern const CN_PROGMEM char CN_FPPDiscovery [];
extern const CN_PROGMEM char CN_FPPRemote [];
extern const CN_PROGMEM char CN_FppRemoteIp [];
extern const CN_PROGMEM char CN_Frequency [];
extern const CN_PROGMEM char CN_fseqfilename [];
extern const CN_PROGMEM char CN_gateway [];
extern const CN_PROGMEM char CN_g [];
extern const CN_PROGMEM char CN_gamma [];
extern const CN_PROGMEM char CN_GECE [];
extern const CN_PROGMEM char CN_get [];
extern const CN_PROGMEM char CN_gen_ser_hdr [];
extern const CN_PROGMEM char CN_gen_ser_ftr [];
extern const CN_PROGMEM char CN_gid [];
extern const CN_PROGMEM char CN_group_size [];
extern const CN_PROGMEM char CN_GS8208 [];
extern const CN_PROGMEM char CN_hadisco [];
extern const CN_PROGMEM char CN_haprefix [];
extern const CN_PROGMEM char CN_Heap_colon [];
extern const CN_PROGMEM char CN_HostDescription [];
extern const CN_PROGMEM char CN_HostName [];
extern const CN_PROGMEM char CN_hostname [];
extern const CN_PROGMEM char CN_hv [];
extern const CN_PROGMEM char CN_id [];
extern const CN_PROGMEM char CN_ID [];
extern const CN_PROGMEM char CN_idle [];
extern const CN_PROGMEM char CN_Idle [];
extern const CN_PROGMEM char CN_identifiers [];
extern const CN_PROGMEM char CN_init [];
extern const CN_PROGMEM char CN_interframetime [];
extern const CN_PROGMEM char CN_index [];
extern const CN_PROGMEM char CN_inv [];
extern const CN_PROGMEM char CN_ip [];
extern const CN_PROGMEM char CN_IPS [];
extern const CN_PROGMEM char CN_input [];
extern const CN_PROGMEM char CN_inputbutton [];
extern const CN_PROGMEM char CN_input_config [];
extern const CN_PROGMEM char CN_json [];
extern const CN_PROGMEM char CN_json_attributes_topic [];
extern const CN_PROGMEM char CN_last_clientIP [];
extern const CN_PROGMEM char CN_lastData [];
extern const CN_PROGMEM char CN_lastReceiveTime [];
extern const CN_PROGMEM char CN_length [];
extern const CN_PROGMEM char CN_Length [];
extern const CN_PROGMEM char CN_light [];
extern const CN_PROGMEM char CN_loaded [];
extern const CN_PROGMEM char CN_lwt [];
extern const CN_PROGMEM char CN_mac [];
extern const CN_PROGMEM char CN_manufacturer [];
extern const CN_PROGMEM char CN_mdc_pin [];
extern const CN_PROGMEM char CN_mdio_pin [];
extern const CN_PROGMEM char CN_majorVersion [];
extern const CN_PROGMEM char CN_Max [];
extern const CN_PROGMEM char CN_MaxChannel [];
extern const CN_PROGMEM char CN_MaxChannels [];
extern const CN_PROGMEM char CN_MemoryFree [];
extern const CN_PROGMEM char CN_Min [];
extern const CN_PROGMEM char CN_minorVersion [];
extern const CN_PROGMEM char CN_minussigns [];
extern const CN_PROGMEM char CN_mirror [];
extern const CN_PROGMEM char CN_miso_pin [];
extern const CN_PROGMEM char CN_mode [];
extern const CN_PROGMEM char CN_Mode [];
extern const CN_PROGMEM char CN_model [];
extern const CN_PROGMEM char CN_mode_name [];
extern const CN_PROGMEM char CN_mosi_pin [];
extern const CN_PROGMEM char CN_mqtt [];
extern const CN_PROGMEM char CN_MQTT [];
extern const CN_PROGMEM char CN_multicast [];
extern const CN_PROGMEM char CN_name [];
extern const CN_PROGMEM char CN_Name [];
extern const CN_PROGMEM char CN_NeedAutoConfig [];
extern const CN_PROGMEM char CN_netmask [];
extern const CN_PROGMEM char CN_network [];
extern const CN_PROGMEM char CN_num_chan [];
extern const CN_PROGMEM char CN_num_packets [];
extern const CN_PROGMEM char CN_NumFrames [];
extern const CN_PROGMEM char CN_opt [];
extern const CN_PROGMEM char CN_options [];
extern const CN_PROGMEM char CN_output [];
extern const CN_PROGMEM char CN_output_config [];
extern const CN_PROGMEM char CN_OutputSpi [];
extern const CN_PROGMEM char CN_OutputUart [];
extern const CN_PROGMEM char CN_packet_errors [];
extern const CN_PROGMEM char CN_packetsreceived [];
extern const CN_PROGMEM char CN_ParseFseqFile [];
extern const CN_PROGMEM char CN_passphrase [];
extern const CN_PROGMEM char CN_password [];
extern const CN_PROGMEM char CN_pause [];
extern const CN_PROGMEM char CN_Paused [];
extern const CN_PROGMEM char CN_pixel_count [];
extern const CN_PROGMEM char CN_pktCommand [];
extern const CN_PROGMEM char CN_pktSyncSeqOpen [];
extern const CN_PROGMEM char CN_pktSyncSeqStart [];
extern const CN_PROGMEM char CN_pktSyncSeqStop [];
extern const CN_PROGMEM char CN_pktSyncSeqSync [];
extern const CN_PROGMEM char CN_pktSyncMedOpen [];
extern const CN_PROGMEM char CN_pktSyncMedStart [];
extern const CN_PROGMEM char CN_pktSyncMedStop [];
extern const CN_PROGMEM char CN_pktSyncMedSync [];
extern const CN_PROGMEM char CN_pktBlank [];
extern const CN_PROGMEM char CN_pktPing [];
extern const CN_PROGMEM char CN_pktPlugin [];
extern const CN_PROGMEM char CN_pktFPPCommand [];
extern const CN_PROGMEM char CN_pktError [];
extern const CN_PROGMEM char CN_polarity [];
extern const CN_PROGMEM char CN_port [];
extern const CN_PROGMEM char CN_Powering_Up [];
extern const CN_PROGMEM char CN_Platform [];
extern const CN_PROGMEM char CN_platform [];
extern const CN_PROGMEM char CN_play [];
extern const CN_PROGMEM char CN_Player [];
extern const CN_PROGMEM char CN_playcount [];
extern const CN_PROGMEM char CN_PlayedFileCount [];
extern const CN_PROGMEM char CN_playing [];
extern const CN_PROGMEM char CN_playFseq [];
extern const CN_PROGMEM char CN_playlist [];
extern const CN_PROGMEM char CN_PlayList [];
extern const CN_PROGMEM char CN_plussigns [];
extern const CN_PROGMEM char CN_power_pin [];
extern const CN_PROGMEM char CN_prependnullcount [];
extern const CN_PROGMEM char CN_pwm [];
extern const CN_PROGMEM char CN_Relay [];
extern const CN_PROGMEM char CN_remote [];
extern const CN_PROGMEM char CN_repeat [];
extern const CN_PROGMEM char CN_Renard [];
extern const CN_PROGMEM char CN_r [];
extern const CN_PROGMEM char CN_Ranges [];
extern const CN_PROGMEM char CN_rev [];
extern const CN_PROGMEM char CN_reverse [];
extern const CN_PROGMEM char CN_rgb [];
extern const CN_PROGMEM char CN_RMT [];
extern const CN_PROGMEM char CN_rssi [];
extern const CN_PROGMEM char CN_running [];
extern const CN_PROGMEM char CN_schema [];
extern const CN_PROGMEM char CN_saved [];
extern const CN_PROGMEM char CN_sca [];
extern const CN_PROGMEM char CN_seconds_elapsed [];
extern const CN_PROGMEM char CN_seconds_played [];
extern const CN_PROGMEM char CN_seconds_remaining [];
extern const CN_PROGMEM char CN_sequence_filename [];
extern const CN_PROGMEM char CN_Serial [];
extern const CN_PROGMEM char CN_set [];
extern const CN_PROGMEM char CN_size [];
extern const CN_PROGMEM char CN_Servo_PCA9685 [];
extern const CN_PROGMEM char CN_slashattributes [];
extern const CN_PROGMEM char CN_slashconfig [];
extern const CN_PROGMEM char CN_slashset [];
extern const CN_PROGMEM char CN_slashstatus [];
extern const CN_PROGMEM char CN_Solid [];
extern const CN_PROGMEM char CN_speed [];
extern const CN_PROGMEM char CN_ssid [];
extern const CN_PROGMEM char CN_sta_timeout [];
extern const CN_PROGMEM char CN_stars [];
extern const CN_PROGMEM char CN_Start [];
extern const CN_PROGMEM char CN_Starting [];
extern const CN_PROGMEM char CN_state [];
extern const CN_PROGMEM char CN_statetopic [];
extern const CN_PROGMEM char CN_status [];
extern const CN_PROGMEM char CN_status_name [];
extern const CN_PROGMEM char CN_StayInApMode [];
extern const CN_PROGMEM char CN_StepTime [];
extern const CN_PROGMEM char CN_Stopping [];
extern const CN_PROGMEM char CN_subnet [];
extern const CN_PROGMEM char CN_sw_version [];
extern const CN_PROGMEM char CN_SyncAdjustmentCount [];
extern const CN_PROGMEM char CN_SyncCount [];
extern const CN_PROGMEM char CN_SyncOffset [];
extern const CN_PROGMEM char CN_system [];
extern const CN_PROGMEM char CN_textSLASHplain [];
extern const CN_PROGMEM char CN_time [];
extern const CN_PROGMEM char CN_time_elapsed [];
extern const CN_PROGMEM char CN_TimeRemaining [];
extern const CN_PROGMEM char CN_time_remaining [];
extern const CN_PROGMEM char CN_TLS3001 [];
extern const CN_PROGMEM char CN_TM1814 [];
extern const CN_PROGMEM char CN_topic [];
extern const CN_PROGMEM char CN_topicset [];
extern const CN_PROGMEM char CN_transitions [];
extern const CN_PROGMEM char CN_trig [];
extern const CN_PROGMEM char CN_true [];
extern const CN_PROGMEM char CN_type [];
extern const CN_PROGMEM char CN_typeId [];
extern const CN_PROGMEM char CN_UCS1903 [];
extern const CN_PROGMEM char CN_UCS8903 [];
extern const CN_PROGMEM char CN_ui [];
extern const CN_PROGMEM char CN_unique_id [];
extern const CN_PROGMEM char CN_unichanlim [];
extern const CN_PROGMEM char CN_unifirst [];
extern const CN_PROGMEM char CN_unilast [];
extern const CN_PROGMEM char CN_universe [];
extern const CN_PROGMEM char CN_universe_limit [];
extern const CN_PROGMEM char CN_universe_start [];
extern const CN_PROGMEM char CN_updateinterval [];
extern const CN_PROGMEM char CN_Uptime [];
extern const CN_PROGMEM char CN_used [];
extern const CN_PROGMEM char CN_user [];
extern const CN_PROGMEM char CN_Utilization [];
extern const CN_PROGMEM char CN_variableHeaders [];
extern const CN_PROGMEM char CN_Variant [];
extern const CN_PROGMEM char CN_version [];
extern const CN_PROGMEM char CN_Version [];
extern const CN_PROGMEM char CN_volume [];
extern const CN_PROGMEM char CN_weus [];
extern const CN_PROGMEM char CN_wifi [];
extern const CN_PROGMEM char CN_WiFiDrv [];
extern const CN_PROGMEM char CN_WS2801 [];
extern const CN_PROGMEM char CN_WS2811 [];
extern const CN_PROGMEM char CN_XP [];
extern const CN_PROGMEM char CN_zig_size [];

extern const CN_PROGMEM char CN_wrgb [];
extern const CN_PROGMEM char CN_rgbw [];
extern const CN_PROGMEM char CN_grbw [];
extern const CN_PROGMEM char CN_brgw [];
extern const CN_PROGMEM char CN_rbgw [];
extern const CN_PROGMEM char CN_gbrw [];
extern const CN_PROGMEM char CN_bgrw [];
extern const CN_PROGMEM char CN_grb [];
extern const CN_PROGMEM char CN_brg [];
extern const CN_PROGMEM char CN_rbg [];
extern const CN_PROGMEM char CN_gbr [];
extern const CN_PROGMEM char CN_bgr [];

extern const CN_PROGMEM char MN_01 [];
extern const CN_PROGMEM char MN_02 [];
extern const CN_PROGMEM char MN_03 [];
extern const CN_PROGMEM char MN_04 [];
extern const CN_PROGMEM char MN_05 [];
extern const CN_PROGMEM char MN_06 [];
extern const CN_PROGMEM char MN_07 [];
extern const CN_PROGMEM char MN_08 [];
extern const CN_PROGMEM char MN_09 [];
extern const CN_PROGMEM char MN_10 [];
extern const CN_PROGMEM char MN_11 [];
extern const CN_PROGMEM char MN_12 [];
extern const CN_PROGMEM char MN_13 [];
extern const CN_PROGMEM char MN_14 [];
extern const CN_PROGMEM char MN_15 [];
extern const CN_PROGMEM char MN_16 [];
extern const CN_PROGMEM char MN_17 [];
extern const CN_PROGMEM char MN_18 [];
extern const CN_PROGMEM char MN_19 [];
extern const CN_PROGMEM char MN_20 [];
extern const CN_PROGMEM char MN_21 [];
extern const CN_PROGMEM char MN_22 [];
extern const CN_PROGMEM char MN_23 [];
extern const CN_PROGMEM char MN_24 [];
extern const CN_PROGMEM char MN_25 [];
extern const CN_PROGMEM char MN_26 [];
extern const CN_PROGMEM char MN_27 [];
extern const CN_PROGMEM char MN_28 [];
extern const CN_PROGMEM char MN_29 [];
extern const CN_PROGMEM char MN_30 [];
extern const CN_PROGMEM char MN_31 [];
extern const CN_PROGMEM char MN_32 [];
extern const CN_PROGMEM char MN_33 [];
extern const CN_PROGMEM char MN_34 [];
extern const CN_PROGMEM char MN_35 [];
extern const CN_PROGMEM char MN_36 [];
extern const CN_PROGMEM char MN_37 [];
extern const CN_PROGMEM char MN_38 [];
extern const CN_PROGMEM char MN_39 [];
extern const CN_PROGMEM char MN_40 [];
extern const CN_PROGMEM char MN_41 [];
extern const CN_PROGMEM char MN_42 [];
extern const CN_PROGMEM char MN_43 [];
extern const CN_PROGMEM char MN_44 [];
extern const CN_PROGMEM char MN_45 [];
extern const CN_PROGMEM char MN_46 [];
extern const CN_PROGMEM char MN_47 [];
extern const CN_PROGMEM char MN_48 [];
extern const CN_PROGMEM char MN_49 [];
extern const CN_PROGMEM char MN_50 [];
extern const CN_PROGMEM char MN_51 [];
extern const CN_PROGMEM char MN_52 [];
extern const CN_PROGMEM char MN_53 [];
extern const CN_PROGMEM char MN_54 [];
extern const CN_PROGMEM char MN_55 [];
extern const CN_PROGMEM char MN_56 [];
extern const CN_PROGMEM char MN_57 [];
extern const CN_PROGMEM char MN_58 [];
extern const CN_PROGMEM char MN_59 [];
extern const CN_PROGMEM char MN_60 [];
extern const CN_PROGMEM char MN_61 [];
extern const CN_PROGMEM char MN_62 [];
extern const CN_PROGMEM char MN_63 [];
extern const CN_PROGMEM char MN_64 [];
extern const CN_PROGMEM char MN_65 [];
extern const CN_PROGMEM char MN_66 [];
extern const CN_PROGMEM char MN_67 [];
extern const CN_PROGMEM char MN_68 [];
extern const CN_PROGMEM char MN_69 [];
extern const CN_PROGMEM char MN_70 [];
extern const CN_PROGMEM char MN_71 [];
extern const CN_PROGMEM char MN_72 [];
extern const CN_PROGMEM char MN_73 [];
extern const CN_PROGMEM char MN_74 [];
extern const CN_PROGMEM char MN_75 [];
extern const CN_PROGMEM char MN_76 [];
extern const CN_PROGMEM char MN_77 [];
extern const CN_PROGMEM char MN_78 [];
extern const CN_PROGMEM char MN_79 [];
extern const CN_PROGMEM char MN_80 [];
extern const CN_PROGMEM char MN_81 [];
extern const CN_PROGMEM char MN_82 [];
extern const CN_PROGMEM char MN_83 [];
extern const CN_PROGMEM char MN_84 [];
extern const CN_PROGMEM char MN_85 [];
extern const CN_PROGMEM char MN_86 [];
extern const CN_PROGMEM char MN_87 [];
extern const CN_PROGMEM char MN_88 [];
extern const CN_PROGMEM char MN_89 [];
extern const CN_PROGMEM char MN_90 [];
extern const CN_PROGMEM char MN_91 [];
extern const CN_PROGMEM char MN_92 [];
extern const CN_PROGMEM char MN_93 [];
extern const CN_PROGMEM char MN_94 [];
extern const CN_PROGMEM char MN_95 [];
extern const CN_PROGMEM char MN_96 [];
extern const CN_PROGMEM char MN_97 [];
extern const CN_PROGMEM char MN_98 [];
extern const CN_PROGMEM char MN_99 [];
extern const CN_PROGMEM char MN_100 [];
extern const CN_PROGMEM char MN_101 [];
extern const CN_PROGMEM char MN_102 [];
extern const CN_PROGMEM char MN_103 [];
extern const CN_PROGMEM char MN_104 [];
extern const CN_PROGMEM char MN_105 [];
extern const CN_PROGMEM char MN_106 [];
extern const CN_PROGMEM char MN_107 [];
extern const CN_PROGMEM char MN_108 [];
extern const CN_PROGMEM char MN_109 [];
extern const CN_PROGMEM char MN_110 [];
extern const CN_PROGMEM char MN_111 [];
extern const CN_PROGMEM char MN_112 [];
extern const CN_PROGMEM char MN_113 [];
extern const CN_PROGMEM char MN_114 [];
extern const CN_PROGMEM char MN_115 [];
extern const CN_PROGMEM char MN_116 [];
extern const CN_PROGMEM char MN_117 [];
extern const CN_PROGMEM char MN_118 [];
extern const CN_PROGMEM char MN_119 [];
extern const CN_PROGMEM char MN_120 [];
extern const CN_PROGMEM char MN_121 [];
extern const CN_PROGMEM char MN_122 [];
extern const CN_PROGMEM char MN_123 [];
extern const CN_PROGMEM char MN_124 [];
extern const CN_PROGMEM char MN_125 [];
extern const CN_PROGMEM char MN_126 [];
extern const CN_PROGMEM char MN_127 [];
extern const CN_PROGMEM char MN_128 [];
extern const CN_PROGMEM char MN_129 [];
extern const CN_PROGMEM char MN_130 [];
extern const CN_PROGMEM char MN_131 [];
extern const CN_PROGMEM char MN_132 [];
extern const CN_PROGMEM char MN_133 [];
extern const CN_PROGMEM char MN_134 [];
extern const CN_PROGMEM char MN_135 [];
extern const CN_PROGMEM char MN_136 [];
extern const CN_PROGMEM char MN_137 [];
extern const CN_PROGMEM char MN_138 [];
extern const CN_PROGMEM char MN_139 [];
extern const CN_PROGMEM char MN_140 [];
extern const CN_PROGMEM char MN_141 [];
extern const CN_PROGMEM char MN_142 [];
extern const CN_PROGMEM char MN_143 [];
extern const CN_PROGMEM char MN_144 [];
extern const CN_PROGMEM char MN_145 [];
extern const CN_PROGMEM char MN_146 [];
extern const CN_PROGMEM char MN_147 [];
extern const CN_PROGMEM char MN_148 [];
extern const CN_PROGMEM char MN_149 [];
extern const CN_PROGMEM char MN_150 [];
extern const CN_PROGMEM char MN_151 [];
extern const CN_PROGMEM char MN_152 [];
extern const CN_PROGMEM char MN_153 [];
extern const CN_PROGMEM char MN_154 [];
extern const CN_PROGMEM char MN_155 [];
extern const CN_PROGMEM char MN_156 [];
extern const CN_PROGMEM char MN_157 [];
extern const CN_PROGMEM char MN_158 [];
extern const CN_PROGMEM char MN_159 [];
extern const CN_PROGMEM char MN_160 [];
extern const CN_PROGMEM char MN_161 [];
extern const CN_PROGMEM char MN_162 [];
extern const CN_PROGMEM char MN_163 [];
extern const CN_PROGMEM char MN_164 [];
extern const CN_PROGMEM char MN_165 [];
extern const CN_PROGMEM char MN_166 [];
extern const CN_PROGMEM char MN_167 [];
extern const CN_PROGMEM char MN_168 [];
extern const CN_PROGMEM char MN_169 [];
extern const CN_PROGMEM char MN_170 [];
extern const CN_PROGMEM char MN_171 [];
extern const CN_PROGMEM char MN_172 [];
extern const CN_PROGMEM char MN_173 [];
extern const CN_PROGMEM char MN_174 [];
extern const CN_PROGMEM char MN_175 [];
extern const CN_PROGMEM char MN_176 [];
extern const CN_PROGMEM char MN_177 [];
extern const CN_PROGMEM char MN_178 [];
extern const CN_PROGMEM char MN_179 [];
extern const CN_PROGMEM char MN_180 [];
extern const CN_PROGMEM char MN_181 [];
extern const CN_PROGMEM char MN_182 [];
extern const CN_PROGMEM char MN_183 [];
extern const CN_PROGMEM char MN_184 [];
extern const CN_PROGMEM char MN_185 [];
extern const CN_PROGMEM char MN_186 [];
extern const CN_PROGMEM char MN_187 [];
extern const CN_PROGMEM char MN_188 [];
extern const CN_PROGMEM char MN_189 [];
extern const CN_PROGMEM char MN_190 [];
extern const CN_PROGMEM char MN_191 [];
extern const CN_PROGMEM char MN_192 [];
extern const CN_PROGMEM char MN_193 [];
extern const CN_PROGMEM char MN_194 [];
extern const CN_PROGMEM char MN_195 [];
extern const CN_PROGMEM char MN_196 [];
extern const CN_PROGMEM char MN_197 [];
extern const CN_PROGMEM char MN_198 [];
extern const CN_PROGMEM char MN_199 [];
extern const CN_PROGMEM char MN_200 [];
extern const CN_PROGMEM char MN_201 [];
extern const CN_PROGMEM char MN_202 [];
extern const CN_PROGMEM char MN_203 [];
extern const CN_PROGMEM char MN_204 [];
extern const CN_PROGMEM char MN_205 [];
extern const CN_PROGMEM char MN_206 [];
extern const CN_PROGMEM char MN_207 [];
extern const CN_PROGMEM char MN_208 [];
extern const CN_PROGMEM char MN_209 [];
extern const CN_PROGMEM char MN_210 [];
extern const CN_PROGMEM char MN_211 [];
extern const CN_PROGMEM char MN_212 [];
extern const CN_PROGMEM char MN_213 [];
extern const CN_PROGMEM char MN_214 [];
extern const CN_PROGMEM char MN_215 [];
extern const CN_PROGMEM char MN_216 [];
extern const CN_PROGMEM char MN_217 [];
extern const CN_PROGMEM char MN_218 [];
extern const CN_PROGMEM char MN_219 [];
extern const CN_PROGMEM char MN_220 [];

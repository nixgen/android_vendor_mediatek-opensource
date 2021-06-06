/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CUSTOM_NVRAM_DATA_ITEM_H
#define CUSTOM_NVRAM_DATA_ITEM_H

#include "custom_cfg_module_file.h"
#include "Custom_NvRam_LID.h"

/*****************************************************************************
* NVRAM database define
*****************************************************************************/
BEGIN_NVRAM_DATA

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_LID)
AUDIO_CUSTOM_PARAM_STRUCT *CFG_FILE_SPEECH_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_CUSTOM_FILE_GPS_LID)
ap_nvram_gps_config_struct *CFG_FILE_GPS_CONFIG_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_COMPFLT_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_AUDIO_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_HEADPHONE_COMPFLT_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_HEADPHONE_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_EFFECT_LID)
AUDIO_EFFECT_CUSTOM_PARAM_STRUCT *CFG_FILE_AUDIO_EFFECT_REC_TOTAL
{

};


LID_BIT VER_LID(AP_CFG_RDEB_FILE_WIFI_LID)
WIFI_CFG_PARAM_STRUCT *CFG_FILE_WIFI_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDEB_WIFI_CUSTOM_LID)
WIFI_CUSTOM_PARAM_STRUCT *CFG_FILE_WIFI_CUSTOM_REC_TOTAL
{

};
LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_PARAM_MED_LID)
AUDIO_PARAM_MED_STRUCT *CFG_FILE_AUDIO_PARAM_MED_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_VOLUME_CUSTOM_LID)
AUDIO_VOLUME_CUSTOM_STRUCT *CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_DUAL_MIC_CUSTOM_LID)
AUDIO_CUSTOM_EXTRA_PARAM_STRUCT *CFG_FILE_SPEECH_DUAL_MIC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_WB_PARAM_LID)
AUDIO_CUSTOM_WB_PARAM_STRUCT *CFG_FILE_WB_SPEECH_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_REEB_PRODUCT_INFO_LID)
PRODUCT_INFO *CFG_FILE_PRODUCT_INFO_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_GAIN_TABLE_LID)
AUDIO_GAIN_TABLE_STRUCT *CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_VER1_VOLUME_CUSTOM_LID)
AUDIO_VER1_CUSTOM_VOLUME_STRUCT *CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_HD_REC_PAR_LID)
AUDIO_HD_RECORD_PARAM_STRUCT *CFG_FILE_AUDIO_HD_REC_PAR_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_HD_REC_SCENE_LID)
AUDIO_HD_RECORD_SCENE_TABLE_STRUCT *CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_VOICE_RECOGNIZE_PARAM_LID)
VOICE_RECOGNITION_PARAM_STRUCT *CFG_FILE_VOICE_RECOGNIZE_PAR_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_AUDENH_CONTROL_OPTION_PAR_LID)
AUDIO_AUDENH_CONTROL_OPTION_STRUCT *CFG_FILE_AUDIO_AUDENH_CONTROL_OPTION_PAR_TOTAL
{

};



LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_LID)
AUDIO_BUFFER_DC_CALIBRATION_STRUCT *CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_VOIP_PAR_LID)
AUDIO_VOIP_PARAM_STRUCT *CFG_FILE_AUDIO_VOIP_PAR_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_VIBSPK_COMPFLT_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_VIBSPK_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_MUSIC_DRC_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_MUSICDRC_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_RINGTONE_DRC_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_RINGTONEDRC_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_MAGI_CONFERENCE_LID)
AUDIO_CUSTOM_MAGI_CONFERENCE_STRUCT *CFG_FILE_SPEECH_MAGI_CONFERENCE_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_HAC_PARAM_LID)
AUDIO_CUSTOM_HAC_PARAM_STRUCT *CFG_FILE_SPEECH_HAC_PARAM_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_SPEECH_LPBK_PARAM_LID)
AUDIO_CUSTOM_SPEECH_LPBK_PARAM_STRUCT *CFG_FILE_SPEECH_LPBK_PARAM_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_BT_GAIN_CUSTOM_LID)
AUDIO_BT_GAIN_STRUCT *CFG_FILE_AUDIO_BT_GAIN_CUSTOM_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_FUNC_SWITCH_PARAM_LID)
AUDIO_CUSTOM_AUDIO_FUNC_SWITCH_PARAM_STRUCT *CFG_FILE_AUDIO_FUNC_SWITCH_PARAM_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_CUSTOM_FILE_FUEL_GAUGE_LID)
ap_nvram_fg_config_struct *CFG_FILE_FG_CONFIG_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_PQ_LID)
PQ_CUSTOM_LUT *CFG_FILE_PQ_CUSTOM_REC_TOTAL
{

};

END_NVRAM_DATA

#endif /* CUSTOM_NVRAM_DATA_ITEM_H */

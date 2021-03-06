/*
* Copyright (C) 2017-2019 Intelligo Technology Inc. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*/
#ifndef DEBUSSY_SND_CTRL_H
#define DEBUSSY_SND_CTRL_H

#define DRIVER_COMMAND_VERSION (0x20090000)

#include <sound/soc.h>
#define IGO_CH_OP_MODE_ADDR (0x00000000)
#define IGO_CH_NR_UL_ADDR (0x01000000)
#define IGO_CH_NR_UL_SEC_ADDR (0x01000004)
#define IGO_CH_NR_ADAPTIVE_EN_ADDR (0x01000008)
#define IGO_CH_NR_VOICE_STR_ADDR (0x0100000c)
#define IGO_CH_NR_NOISY_LEVEL_ADDR (0x01000010)
#define IGO_CH_NR_LEVEL_ADDR (0x01000014)
#define IGO_CH_AEC_EN_ADDR (0x02000000)
#define IGO_CH_AES_EN_ADDR (0x02000004)
#define IGO_CH_AEC_BULK_DLY_ADDR (0x02000008)
#define IGO_CH_VAD_STATUS_ADDR (0x03000000)
#define IGO_CH_VAD_CLEAR_ADDR (0x03000004)
#define IGO_CH_VAD_INT_MOD_ADDR (0x03000008)
#define IGO_CH_VAD_INT_PIN_ADDR (0x0300000c)
#define IGO_CH_VAD_KEYWORD_ADDR (0x03000010)
#define IGO_CH_VAD_KEY_GROUP_SEL_ADDR (0x03000014)
#define IGO_CH_VAD_VOICE_ENHANCE_ADDR (0x03000018)
#define IGO_CH_VAD_VOICE_ENROLL_ADDR (0x0300001c)
#define IGO_CH_VAD_ENROLL_CNT_ADDR (0x03000020)
#define IGO_CH_VAD_ENROLL_APPLY_ADDR (0x03000024)
#define IGO_CH_VAD_ENROLL_MD_SZ_ADDR (0x03000028)
#define IGO_CH_VAD_ENROLL_MD_ADDR (0x0300002c)
#define IGO_CH_VAD_ENROLL_RST_ADDR (0x0300102c)
#define IGO_CH_VAD_KEYWORD_HIT_ADDR (0x03001030)
#define IGO_CH_VAD_KEYWORD_HIT_CLEAR_ADDR (0x03001034)
#define IGO_CH_VAD_INIT_GAIN_ADDR (0x03001038)
#define IGO_CH_VAD_BG_MODEL_EN_ADDR (0x0300103c)
#define IGO_CH_VAD_KEYWORD_THR_ADDR (0x03001040)
#define IGO_CH_VAD_KWS_SCORE_ADDR (0x03001044)
#define IGO_CH_VAD_VOICE_SCORE_ADDR (0x03001048)
#define IGO_CH_VAD_BUF_ADDR (0x0300104c)
#define IGO_CH_VAD_BUF_RST_ADDR (0x0300114c)
#define IGO_CH_AGC_MODE_ADDR (0x04000000)
#define IGO_CH_AGC_GAIN_ADDR (0x04000004)
#define IGO_CH_ASR_GAIN_MAX_VOL_ADDR (0x04000008)
#define IGO_CH_UL_TX_GAIN_ADDR (0x0400000c)
#define IGO_CH_UL_TX_MUTE_ADDR (0x04000010)
#define IGO_CH_NR_MODE1_EN_ADDR (0x06000000)
#define IGO_CH_NR_MODE2_EN_ADDR (0x06000004)
#define IGO_CH_NR_MODE3_EN_ADDR (0x06000008)
#define IGO_CH_NR_MODE1_FLOOR_ADDR (0x0600000c)
#define IGO_CH_NR_MODE1_OD_ADDR (0x06000010)
#define IGO_CH_NR_MODE1_THR_ADDR (0x06000014)
#define IGO_CH_NR_MODE1_SMOOTH_MODE_ADDR (0x06000018)
#define IGO_CH_NR_MODE1_SMOOTH_FLOOR_ADDR (0x0600001c)
#define IGO_CH_NR_MODE1_SMOOTH_Y_SUM_THR_ADDR (0x06000020)
#define IGO_CH_NR_MODE1_NOISE_STATE_SMALL_CNT_ADDR (0x06000024)
#define IGO_CH_NR_MODE1_NOISE_STATE_BIG_CNT_ADDR (0x06000028)
#define IGO_CH_NR_MODE1_PP_PARAM0_ADDR (0x0600002c)
#define IGO_CH_NR_MODE1_PP_PARAM1_ADDR (0x06000030)
#define IGO_CH_NR_MODE1_PP_PARAM2_ADDR (0x06000034)
#define IGO_CH_NR_MODE1_PP_PARAM3_ADDR (0x06000038)
#define IGO_CH_NR_MODE1_PP_PARAM4_ADDR (0x0600003c)
#define IGO_CH_NR_MODE1_PP_PARAM5_ADDR (0x06000040)
#define IGO_CH_NR_MODE1_PP_PARAM6_ADDR (0x06000044)
#define IGO_CH_NR_MODE1_PP_PARAM7_ADDR (0x06000048)
#define IGO_CH_NR_MODE1_PP_PARAM8_ADDR (0x0600004c)
#define IGO_CH_NR_MODE1_PP_PARAM9_ADDR (0x06000050)
#define IGO_CH_NR_MODE1_PP_PARAM10_ADDR (0x06000054)
#define IGO_CH_NR_MODE1_PP_PARAM11_ADDR (0x06000058)
#define IGO_CH_NR_MODE1_PP_PARAM12_ADDR (0x0600005c)
#define IGO_CH_NR_MODE1_PP_PARAM13_ADDR (0x06000060)
#define IGO_CH_NR_MODE1_PP_PARAM14_ADDR (0x06000064)
#define IGO_CH_NR_MODE1_PP_PARAM15_ADDR (0x06000068)
#define IGO_CH_NR_MODE1_PP_PARAM16_ADDR (0x0600006c)
#define IGO_CH_NR_MODE1_PP_PARAM17_ADDR (0x06000070)
#define IGO_CH_NR_MODE1_PP_PARAM18_ADDR (0x06000074)
#define IGO_CH_NR_MODE1_PP_PARAM19_ADDR (0x06000078)
#define IGO_CH_NR_MODE1_PP_PARAM20_ADDR (0x0600007c)
#define IGO_CH_NR_MODE1_PP_PARAM21_ADDR (0x06000080)
#define IGO_CH_NR_MODE1_PP_PARAM22_ADDR (0x06000084)
#define IGO_CH_NR_MODE1_PP_PARAM23_ADDR (0x06000088)
#define IGO_CH_NR_MODE1_PP_PARAM24_ADDR (0x0600008c)
#define IGO_CH_NR_MODE1_PP_PARAM25_ADDR (0x06000090)
#define IGO_CH_NR_MODE1_PP_PARAM26_ADDR (0x06000094)
#define IGO_CH_NR_MODE1_PP_PARAM27_ADDR (0x06000098)
#define IGO_CH_NR_MODE1_PP_PARAM28_ADDR (0x0600009c)
#define IGO_CH_NR_MODE1_PP_PARAM29_ADDR (0x060000a0)
#define IGO_CH_NR_MODE1_PP_PARAM30_ADDR (0x060000a4)
#define IGO_CH_NR_MODE1_PP_PARAM31_ADDR (0x060000a8)
#define IGO_CH_NR_MODE1_PP_PARAM32_ADDR (0x060000ac)
#define IGO_CH_NR_MODE1_PP_PARAM33_ADDR (0x060000b0)
#define IGO_CH_NR_MODE1_PP_PARAM34_ADDR (0x060000b4)
#define IGO_CH_NR_MODE1_PP_PARAM35_ADDR (0x060000b8)
#define IGO_CH_NR_MODE1_PP_PARAM36_ADDR (0x060000bc)
#define IGO_CH_NR_MODE1_PP_PARAM37_ADDR (0x060000c0)
#define IGO_CH_NR_MODE1_PP_PARAM38_ADDR (0x060000c4)
#define IGO_CH_NR_MODE1_PP_PARAM39_ADDR (0x060000c8)
#define IGO_CH_NR_MODE1_PP_PARAM40_ADDR (0x060000cc)
#define IGO_CH_NR_MODE1_PP_PARAM41_ADDR (0x060000d0)
#define IGO_CH_NR_MODE1_PP_PARAM42_ADDR (0x060000d4)
#define IGO_CH_NR_MODE1_PP_PARAM43_ADDR (0x060000d8)
#define IGO_CH_NR_MODE1_PP_PARAM44_ADDR (0x060000dc)
#define IGO_CH_NR_MODE1_PP_PARAM45_ADDR (0x060000e0)
#define IGO_CH_NR_MODE1_PP_PARAM46_ADDR (0x060000e4)
#define IGO_CH_NR_MODE1_PP_PARAM47_ADDR (0x060000e8)
#define IGO_CH_NR_MODE1_UL_FLOOR_STEP_ADDR (0x060000ec)
#define IGO_CH_NR_MODE1_PP_PARAM49_ADDR (0x060000f0)
#define IGO_CH_NR_MODE1_PP_PARAM50_ADDR (0x060000f4)
#define IGO_CH_NR_MODE1_PP_PARAM51_ADDR (0x060000f8)
#define IGO_CH_NR_MODE1_PP_PARAM52_ADDR (0x060000fc)
#define IGO_CH_NR_MODE2_FLOOR_ADDR (0x06000100)
#define IGO_CH_NR_MODE2_PARAM0_ADDR (0x06000104)
#define IGO_CH_NR_MODE2_PARAM1_ADDR (0x06000108)
#define IGO_CH_NR_MODE2_PARAM2_ADDR (0x0600010c)
#define IGO_CH_NR_MODE2_PARAM3_ADDR (0x06000110)
#define IGO_CH_NR_MODE2_PARAM4_ADDR (0x06000114)
#define IGO_CH_NR_MODE2_PARAM5_ADDR (0x06000118)
#define IGO_CH_NR_MODE2_PARAM6_ADDR (0x0600011c)
#define IGO_CH_NR_MODE2_PARAM7_ADDR (0x06000120)
#define IGO_CH_NR_MODE2_PARAM8_ADDR (0x06000124)
#define IGO_CH_NR_MODE3_FLOOR_ADDR (0x06000128)
#define IGO_CH_NR_MODE3_PARAM0_ADDR (0x0600012c)
#define IGO_CH_NR_MODE3_PARAM1_ADDR (0x06000130)
#define IGO_CH_NR_MODE3_PARAM2_ADDR (0x06000134)
#define IGO_CH_NR_MODE3_PARAM3_ADDR (0x06000138)
#define IGO_CH_NR_MODE3_PARAM4_ADDR (0x0600013c)
#define IGO_CH_NR_MODE3_PARAM5_ADDR (0x06000140)
#define IGO_CH_NR_MODE3_PARAM6_ADDR (0x06000144)
#define IGO_CH_NR_MODE3_PARAM7_ADDR (0x06000148)
#define IGO_CH_NR_MODE3_PARAM8_ADDR (0x0600014c)
#define IGO_CH_NR_MODE3_PARAM9_ADDR (0x06000150)
#define IGO_CH_NR_MODE3_PARAM10_ADDR (0x06000154)
#define IGO_CH_NR_MODE3_PARAM11_ADDR (0x06000158)
#define IGO_CH_NR_MODE3_PARAM12_ADDR (0x0600015c)
#define IGO_CH_NR_MODE3_PARAM13_ADDR (0x06000160)
#define IGO_CH_NR_MODE3_PARAM14_ADDR (0x06000164)
#define IGO_CH_NR_MODE3_PARAM15_ADDR (0x06000168)
#define IGO_CH_NR_SIGNLE_TONE_DETECT_EN_ADDR (0x0600016c)
#define IGO_CH_AEC_PARAM0_ADDR (0x07000000)
#define IGO_CH_AEC_PARAM1_ADDR (0x07000004)
#define IGO_CH_AEC_PARAM2_ADDR (0x07000008)
#define IGO_CH_AEC_PARAM3_ADDR (0x0700000c)
#define IGO_CH_AEC_PARAM4_ADDR (0x07000010)
#define IGO_CH_AEC_PARAM5_ADDR (0x07000014)
#define IGO_CH_AEC_PARAM6_ADDR (0x07000018)
#define IGO_CH_AEC_PARAM7_ADDR (0x0700001c)
#define IGO_CH_AEC_PARAM8_ADDR (0x07000020)
#define IGO_CH_AEC_PARAM9_ADDR (0x07000024)
#define IGO_CH_AEC_PARAM10_ADDR (0x07000028)
#define IGO_CH_AEC_PARAM11_ADDR (0x0700002c)
#define IGO_CH_AEC_PARAM12_ADDR (0x07000030)
#define IGO_CH_AEC_REF_GAIN_ADDR (0x07000034)
#define IGO_CH_VAD_KWS_MODE_ADDR (0x08000000)
#define IGO_CH_DBG_AEC_REC_EN_ADDR (0x09000000)
#define IGO_CH_DBG_STREAMING_ADDR (0x09000004)
#define IGO_CH_POWER_MODE_ADDR (0x0c000000)
#define IGO_CH_FW_VER_ADDR (0x0c000004)
#define IGO_CH_FW_SUB_VER_ADDR (0x0c000008)
#define IGO_CH_FW_BUILD_ADDR (0x0c00000c)
#define IGO_CH_CHIP_ID_ADDR (0x0c000010)
#define IGO_CH_MCLK_ADDR (0x0c000014)
#define IGO_CH_CK_OUTPUT_ADDR (0x0c000018)
#define IGO_CH_CALI_STATUS_ADDR (0x0c00001c)
#define IGO_CH_HIF_CALI_EN_ADDR (0x0c000020)
#define IGO_CH_IGO_CMD_VER_ADDR (0x0c000024)
#define IGO_CH_CRC_CHECK_ADDR (0x0c000028)
#define IGO_CH_SWITCH_MODE_ADDR (0x0c00002c)
#define IGO_CH_DL_RX_ADDR (0x0d000000)
#define IGO_CH_DL_TX_ADDR (0x0d000004)
#define IGO_CH_UL_RX_PRI_ADDR (0x0d000008)
#define IGO_CH_UL_RX_SEC0_ADDR (0x0d00000c)
#define IGO_CH_UL_RX_SEC1_ADDR (0x0d000010)
#define IGO_CH_UL_RX_SEC2_ADDR (0x0d000014)
#define IGO_CH_UL_RX_AEC_ADDR (0x0d000018)
#define IGO_CH_UL_TX_ADDR (0x0d00001c)
#define IGO_CH_UL_TX_SIDETONE_ADDR (0x0d000020)
#define IGO_CH_DAI_0_MODE_ADDR (0x0d000024)
#define IGO_CH_DAI_0_CLK_SRC_ADDR (0x0d000028)
#define IGO_CH_DAI_0_CLK_ADDR (0x0d00002c)
#define IGO_CH_DAI_0_DATA_BIT_ADDR (0x0d000030)
#define IGO_CH_DAI_1_MODE_ADDR (0x0d000034)
#define IGO_CH_DAI_1_CLK_SRC_ADDR (0x0d000038)
#define IGO_CH_DAI_1_CLK_ADDR (0x0d00003c)
#define IGO_CH_DAI_1_DATA_BIT_ADDR (0x0d000040)
#define IGO_CH_DAI_2_MODE_ADDR (0x0d000044)
#define IGO_CH_DAI_2_CLK_SRC_ADDR (0x0d000048)
#define IGO_CH_DAI_2_CLK_ADDR (0x0d00004c)
#define IGO_CH_DAI_2_DATA_BIT_ADDR (0x0d000050)
#define IGO_CH_DAI_3_MODE_ADDR (0x0d000054)
#define IGO_CH_DAI_3_CLK_SRC_ADDR (0x0d000058)
#define IGO_CH_DAI_3_CLK_ADDR (0x0d00005c)
#define IGO_CH_DAI_3_DATA_BIT_ADDR (0x0d000060)
#define IGO_CH_DMIC_M_CLK_SRC_ADDR (0x0d000064)
#define IGO_CH_DMIC_M_BCLK_ADDR (0x0d000068)
#define IGO_CH_DMIC_S_BCLK_ADDR (0x0d00006c)
#define IGO_CH_DMIC_INPUT_GAIN_ADDR (0x0d000070)
#define IGO_CH_HW_BYPASS_DAI_0_ADDR (0x0e000000)
#define IGO_CH_HW_BYPASS_DMIC_S0_ADDR (0x0e000004)
#define IGO_CH_SW_BYPASS_EN_ADDR (0x0e000008)

enum op_mode{
    OP_MODE_CONFIG = 0,
    OP_MODE_XNR = 1,
    OP_MODE_NR = 2,
    OP_MODE_LPNR = 3,
    OP_MODE_BYPASS = 4,
    OP_MODE_VAD = 5,
    OP_MODE_LPVAD = 6,
    OP_MODE_KWS = 7,
    OP_MODE_BARGEIN = 8,
    OP_MODE_RSV = 10,
};

enum nr_ul{
    NR_UL_DISABLE = 0,
    NR_UL_ENABLE = 1,
};

enum nr_ul_sec{
    NR_UL_SEC_DISABLE = 0,
    NR_UL_SEC_MODE0 = 1,
    NR_UL_SEC_MODE1 = 2,
    NR_UL_SEC_MODE2 = 3,
};

enum nr_adaptive_en{
    NR_ADAPTIVE_EN_DISABLE = 0,
    NR_ADAPTIVE_EN_ENABLE = 1,
};

enum nr_voice_str{
    NR_VOICE_STR_LV_0 = 0,
    NR_VOICE_STR_LV_1 = 1,
    NR_VOICE_STR_LV_2 = 2,
};

enum nr_noisy_level{
    NR_NOISY_LEVEL_LV_0 = 0,
    NR_NOISY_LEVEL_LV_1 = 1,
    NR_NOISY_LEVEL_LV_2 = 2,
};

enum nr_level{
    NR_LEVEL_LV_0 = 0,
    NR_LEVEL_LV_1 = 1,
    NR_LEVEL_LV_2 = 2,
    NR_LEVEL_LV_3 = 3,
    NR_LEVEL_LV_4 = 4,
};

enum aec_en{
    AEC_EN_DISABLE = 0,
    AEC_EN_ENABLE = 1,
};

enum aes_en{
    AES_EN_DISABLE = 0,
    AES_EN_LV_0 = 1,
    AES_EN_LV_1 = 2,
    AES_EN_LV_2 = 3,
    AES_EN_LV_3 = 4,
    AES_EN_LV_4 = 5,
    AES_EN_LV_5 = 6,
};

enum vad_status{
    VAD_STATUS_STANDBY = 0,
    VAD_STATUS_TRIGGERED = 1,
    VAD_STATUS_HW_VAD_TRIGGERED = 2,
};

enum vad_clear{
    VAD_CLEAR_NOP = 0,
    VAD_CLEAR_ENABLE = 1,
};

enum vad_int_mod{
    VAD_INT_MOD_DISABLE = 0,
    VAD_INT_MOD_EDGE = 1,
    VAD_INT_MOD_LEVEL = 2,
};

enum vad_int_pin{
    VAD_INT_PIN_DAI0_BCLK = 0,
    VAD_INT_PIN_DAI0_LRCLK = 1,
    VAD_INT_PIN_DAI0_RXDAT = 2,
    VAD_INT_PIN_DAI0_TXDAT = 3,
    VAD_INT_PIN_DAI1_BCLK = 4,
    VAD_INT_PIN_DAI1_LRCLK = 5,
    VAD_INT_PIN_DAI1_RXDAT = 6,
    VAD_INT_PIN_DAI1_TXDAT = 7,
    VAD_INT_PIN_DAI2_BCLK = 8,
    VAD_INT_PIN_DAI2_LRCLK = 9,
    VAD_INT_PIN_DAI2_RXDAT = 10,
    VAD_INT_PIN_DAI2_TXDAT = 11,
    VAD_INT_PIN_DAI3_BCLK = 12,
    VAD_INT_PIN_DAI3_LRCLK = 13,
    VAD_INT_PIN_DAI3_RXDAT = 14,
    VAD_INT_PIN_DAI3_TXDAT = 15,
};

enum vad_key_group_sel{
    VAD_KEY_GROUP_SEL_GROUP_0 = 0,
    VAD_KEY_GROUP_SEL_GROUP_1 = 1,
    VAD_KEY_GROUP_SEL_GROUP_2 = 2,
    VAD_KEY_GROUP_SEL_GROUP_3 = 3,
};

enum vad_voice_enhance{
    VAD_VOICE_ENHANCE_DISABLE = 0,
    VAD_VOICE_ENHANCE_ENABLE = 1,
};

enum vad_voice_enroll{
    VAD_VOICE_ENROLL_DISABLE = 0,
    VAD_VOICE_ENROLL_ENROLL = 1,
};

enum vad_enroll_cnt{
    VAD_ENROLL_CNT_CNT_0 = 0,
    VAD_ENROLL_CNT_CNT_1 = 1,
    VAD_ENROLL_CNT_CNT_2 = 2,
    VAD_ENROLL_CNT_CNT_3 = 3,
    VAD_ENROLL_CNT_CNT_4 = 4,
    VAD_ENROLL_CNT_ENROLL_DONE = 5,
};

enum vad_enroll_apply{
    VAD_ENROLL_APPLY_DISABLE = 0,
    VAD_ENROLL_APPLY_APLLY = 1,
};

enum vad_enroll_rst{
    VAD_ENROLL_RST_DISABLE = 0,
    VAD_ENROLL_RST_ENROLL_RST = 1,
};

enum vad_keyword_hit_clear{
    VAD_KEYWORD_HIT_CLEAR_NOP = 0,
    VAD_KEYWORD_HIT_CLEAR_ENABLE = 1,
};

enum vad_bg_model_en{
    VAD_BG_MODEL_EN_ENABLE = 0,
    VAD_BG_MODEL_EN_DISABLE = 1,
};

enum vad_keyword_thr{
    VAD_KEYWORD_THR_THR_P_0 = 0,
    VAD_KEYWORD_THR_THR_P_2 = 1,
    VAD_KEYWORD_THR_THR_P_4 = 2,
    VAD_KEYWORD_THR_THR_P_6 = 3,
    VAD_KEYWORD_THR_THR_P_8 = 4,
    VAD_KEYWORD_THR_THR_P_10 = 5,
    VAD_KEYWORD_THR_THR_P_12 = 6,
    VAD_KEYWORD_THR_THR_N_2 = 7,
    VAD_KEYWORD_THR_THR_N_4 = 8,
    VAD_KEYWORD_THR_THR_N_6 = 9,
    VAD_KEYWORD_THR_THR_N_8 = 10,
    VAD_KEYWORD_THR_THR_N_10 = 11,
    VAD_KEYWORD_THR_THR_N_12 = 12,
};

enum vad_buf_rst{
    VAD_BUF_RST_DISABLE = 0,
    VAD_BUF_RST_ENABLE = 1,
};

enum agc_mode{
    AGC_MODE_DISABLE = 0,
    AGC_MODE_ONE_STAGE_AGC = 1,
    AGC_MODE_TWO_STAGE_AGC = 2,
    AGC_MODE_ASR_GAIN = 3,
    AGC_MODE_FFPU = 4,
};

enum agc_gain{
    AGC_GAIN_0_DB = 0,
    AGC_GAIN_6_DB = 1,
    AGC_GAIN_9P5_DB = 2,
    AGC_GAIN_12_DB = 3,
    AGC_GAIN_15P5_DB = 4,
    AGC_GAIN_18_DB = 5,
    AGC_GAIN_21P5_DB = 6,
    AGC_GAIN_24_DB = 7,
    AGC_GAIN_27P5_DB = 8,
    AGC_GAIN_30_DB = 9,
};

enum asr_gain_max_vol{
    ASR_GAIN_MAX_VOL_0_DB = 0,
    ASR_GAIN_MAX_VOL_N_2_DB = 1,
    ASR_GAIN_MAX_VOL_N_6_DB = 2,
    ASR_GAIN_MAX_VOL_N_12_DB = 3,
    ASR_GAIN_MAX_VOL_N_18_DB = 4,
    ASR_GAIN_MAX_VOL_N_24_DB = 5,
    ASR_GAIN_MAX_VOL_N_30_DB = 6,
    ASR_GAIN_MAX_VOL_N_36_DB = 7,
};

enum ul_tx_gain{
    UL_TX_GAIN_0_DB = 0,
    UL_TX_GAIN_P_1_DB = 1,
    UL_TX_GAIN_P_2_DB = 2,
    UL_TX_GAIN_P_3_DB = 3,
    UL_TX_GAIN_P_4_DB = 4,
    UL_TX_GAIN_P_5_DB = 5,
    UL_TX_GAIN_P_6_DB = 6,
    UL_TX_GAIN_P_7_DB = 7,
    UL_TX_GAIN_P_8_DB = 8,
    UL_TX_GAIN_P_9_DB = 9,
    UL_TX_GAIN_P_10_DB = 10,
    UL_TX_GAIN_P_11_DB = 11,
    UL_TX_GAIN_P_12_DB = 12,
    UL_TX_GAIN_P_13_DB = 13,
    UL_TX_GAIN_P_14_DB = 14,
    UL_TX_GAIN_P_15_DB = 15,
    UL_TX_GAIN_P_16_DB = 16,
    UL_TX_GAIN_N_1_DB = 17,
    UL_TX_GAIN_N_2_DB = 18,
    UL_TX_GAIN_N_3_DB = 19,
    UL_TX_GAIN_N_4_DB = 20,
    UL_TX_GAIN_N_5_DB = 21,
    UL_TX_GAIN_N_6_DB = 22,
    UL_TX_GAIN_N_7_DB = 23,
    UL_TX_GAIN_N_8_DB = 24,
    UL_TX_GAIN_N_9_DB = 25,
    UL_TX_GAIN_N_10_DB = 26,
    UL_TX_GAIN_N_11_DB = 27,
    UL_TX_GAIN_N_12_DB = 28,
    UL_TX_GAIN_N_13_DB = 29,
    UL_TX_GAIN_N_14_DB = 30,
    UL_TX_GAIN_N_15_DB = 31,
    UL_TX_GAIN_N_16_DB = 32,
};

enum ul_tx_mute{
    UL_TX_MUTE_DISABLE = 0,
    UL_TX_MUTE_ENABLE = 1,
};

enum nr_mode1_en{
    NR_MODE1_EN_DISABLE = 0,
    NR_MODE1_EN_ENABLE = 1,
};

enum nr_mode2_en{
    NR_MODE2_EN_DISABLE = 0,
    NR_MODE2_EN_ENABLE = 1,
};

enum nr_mode3_en{
    NR_MODE3_EN_DISABLE = 0,
    NR_MODE3_EN_ENABLE = 1,
};

enum nr_mode1_floor{
    NR_MODE1_FLOOR_LVL_DEFAULT = 0,
    NR_MODE1_FLOOR_LVL_0 = 1,
    NR_MODE1_FLOOR_LVL_1 = 2,
    NR_MODE1_FLOOR_LVL_2 = 3,
    NR_MODE1_FLOOR_LVL_3 = 4,
    NR_MODE1_FLOOR_LVL_4 = 5,
    NR_MODE1_FLOOR_LVL_5 = 6,
    NR_MODE1_FLOOR_LVL_6 = 7,
    NR_MODE1_FLOOR_LVL_7 = 8,
    NR_MODE1_FLOOR_LVL_8 = 9,
};

enum nr_mode1_od{
    NR_MODE1_OD_LVL_DEFAULT = 0,
    NR_MODE1_OD_LVL_0 = 1,
    NR_MODE1_OD_LVL_1 = 2,
    NR_MODE1_OD_LVL_2 = 3,
    NR_MODE1_OD_LVL_3 = 4,
    NR_MODE1_OD_LVL_4 = 5,
    NR_MODE1_OD_LVL_5 = 6,
};

enum nr_mode1_thr{
    NR_MODE1_THR_LVL_DEFAULT = 0,
    NR_MODE1_THR_LVL_0 = 1,
    NR_MODE1_THR_LVL_1 = 2,
    NR_MODE1_THR_LVL_2 = 3,
    NR_MODE1_THR_LVL_3 = 4,
};

enum nr_mode1_smooth_mode{
    NR_MODE1_SMOOTH_MODE_MODE0 = 0,
    NR_MODE1_SMOOTH_MODE_MODE1 = 1,
};

enum nr_mode1_pp_param10{
    NR_MODE1_PP_PARAM10_LVL_0 = 0,
    NR_MODE1_PP_PARAM10_LVL_1 = 1,
    NR_MODE1_PP_PARAM10_LVL_2 = 2,
};

enum nr_mode1_pp_param41{
    NR_MODE1_PP_PARAM41_LVL_DEFAULT = 0,
    NR_MODE1_PP_PARAM41_LVL_0 = 1,
    NR_MODE1_PP_PARAM41_LVL_1 = 2,
    NR_MODE1_PP_PARAM41_LVL_2 = 3,
};

enum nr_mode1_pp_param43{
    NR_MODE1_PP_PARAM43_DISABLE = 0,
    NR_MODE1_PP_PARAM43_ENABLE = 1,
};

enum nr_mode1_pp_param46{
    NR_MODE1_PP_PARAM46_LVL_DEFAULT = 0,
    NR_MODE1_PP_PARAM46_LVL_0 = 1,
    NR_MODE1_PP_PARAM46_LVL_1 = 2,
    NR_MODE1_PP_PARAM46_LVL_2 = 3,
};

enum nr_mode1_pp_param47{
    NR_MODE1_PP_PARAM47_DISABLE = 0,
    NR_MODE1_PP_PARAM47_ENABLE = 1,
};

enum nr_mode3_param0{
    NR_MODE3_PARAM0_DISABLE = 0,
    NR_MODE3_PARAM0_ENABLE = 1,
};

enum nr_signle_tone_detect_en{
    NR_SIGNLE_TONE_DETECT_EN_DISABLE = 0,
    NR_SIGNLE_TONE_DETECT_EN_ENABLE = 1,
};

enum aec_param5{
    AEC_PARAM5_DISABLE = 0,
    AEC_PARAM5_ENABLE = 1,
};

enum aec_ref_gain{
    AEC_REF_GAIN_0_DB = 0,
    AEC_REF_GAIN_6_DB = 1,
    AEC_REF_GAIN_12_DB = 2,
    AEC_REF_GAIN_18_DB = 3,
};

enum vad_kws_mode{
    VAD_KWS_MODE_DEFAULT = 0,
    VAD_KWS_MODE_M0 = 1,
    VAD_KWS_MODE_M1 = 2,
};

enum dbg_aec_rec_en{
    DBG_AEC_REC_EN_DISABLE = 0,
    DBG_AEC_REC_EN_48K = 1,
    DBG_AEC_REC_EN_16K_STEREO = 2,
};

enum dbg_streaming{
    DBG_STREAMING_DISABLE = 0,
    DBG_STREAMING_ENABLE = 1,
};

enum power_mode{
    POWER_MODE_STANDBY = 0,
    POWER_MODE_WORKING = 1,
};

enum ck_output{
    CK_OUTPUT_DISABLE = 0,
    CK_OUTPUT_12M = 1,
};

enum cali_status{
    CALI_STATUS_NONE = 0,
    CALI_STATUS_READY = 1,
};

enum hif_cali_en{
    HIF_CALI_EN_DISABLE = 0,
    HIF_CALI_EN_QCK_EN = 1,
};

enum crc_check{
    CRC_CHECK_FAIL = 0,
    CRC_CHECK_PASS = 1,
};

enum switch_mode{
    SWITCH_MODE_NONE = 0,
    SWITCH_MODE_VAD = 1,
    SWITCH_MODE_COMMAND = 2,
    SWITCH_MODE_BYPASS = 3,
    SWITCH_MODE_IDLE = 4,
    SWITCH_MODE_SWBYPASS = 5,
};

enum dl_rx{
    DL_RX_DISABLE = 0,
    DL_RX_DAI0_RX_L = 1,
    DL_RX_DAI0_RX_R = 2,
    DL_RX_DAI1_RX_L = 3,
    DL_RX_DAI1_RX_R = 4,
    DL_RX_DAI2_RX_L = 5,
    DL_RX_DAI2_RX_R = 6,
    DL_RX_DAI3_RX_L = 7,
    DL_RX_DAI3_RX_R = 8,
    DL_RX_DMIC_M0_P = 9,
    DL_RX_DMIC_M0_N = 10,
    DL_RX_DMIC_M1_P = 11,
    DL_RX_DMIC_M1_N = 12,
    DL_RX_DMIC_COMBO_M0_P = 13,
    DL_RX_DMIC_COMBO_M0_N = 14,
};

enum dl_tx{
    DL_TX_DISABLE = 0,
    DL_TX_DAI0_TX_L = 1,
    DL_TX_DAI0_TX_R = 2,
    DL_TX_DAI1_TX_L = 3,
    DL_TX_DAI1_TX_R = 4,
    DL_TX_DAI2_TX_L = 5,
    DL_TX_DAI2_TX_R = 6,
    DL_TX_DAI3_TX_L = 7,
    DL_TX_DAI3_TX_R = 8,
    DL_TX_DMIC_S0_P = 9,
    DL_TX_DMIC_S0_N = 10,
    DL_TX_DMIC_S1_P = 11,
    DL_TX_DMIC_S1_N = 12,
    DL_TX_DMIC_COMBO_S0_P = 13,
    DL_TX_DMIC_COMBO_S0_N = 14,
};

enum ul_rx_pri{
    UL_RX_PRI_DISABLE = 0,
    UL_RX_PRI_DAI0_RX_L = 1,
    UL_RX_PRI_DAI0_RX_R = 2,
    UL_RX_PRI_DAI1_RX_L = 3,
    UL_RX_PRI_DAI1_RX_R = 4,
    UL_RX_PRI_DAI2_RX_L = 5,
    UL_RX_PRI_DAI2_RX_R = 6,
    UL_RX_PRI_DAI3_RX_L = 7,
    UL_RX_PRI_DAI3_RX_R = 8,
    UL_RX_PRI_DMIC_M0_P = 9,
    UL_RX_PRI_DMIC_M0_N = 10,
    UL_RX_PRI_DMIC_M1_P = 11,
    UL_RX_PRI_DMIC_M1_N = 12,
    UL_RX_PRI_DMIC_COMBO_M0_P = 13,
    UL_RX_PRI_DMIC_COMBO_M0_N = 14,
};

enum ul_rx_sec0{
    UL_RX_SEC0_DISABLE = 0,
    UL_RX_SEC0_DAI0_RX_L = 1,
    UL_RX_SEC0_DAI0_RX_R = 2,
    UL_RX_SEC0_DAI1_RX_L = 3,
    UL_RX_SEC0_DAI1_RX_R = 4,
    UL_RX_SEC0_DAI2_RX_L = 5,
    UL_RX_SEC0_DAI2_RX_R = 6,
    UL_RX_SEC0_DAI3_RX_L = 7,
    UL_RX_SEC0_DAI3_RX_R = 8,
    UL_RX_SEC0_DMIC_M0_P = 9,
    UL_RX_SEC0_DMIC_M0_N = 10,
    UL_RX_SEC0_DMIC_M1_P = 11,
    UL_RX_SEC0_DMIC_M1_N = 12,
    UL_RX_SEC0_DMIC_COMBO_M0_P = 13,
    UL_RX_SEC0_DMIC_COMBO_M0_N = 14,
};

enum ul_rx_sec1{
    UL_RX_SEC1_DISABLE = 0,
    UL_RX_SEC1_DAI0_RX_L = 1,
    UL_RX_SEC1_DAI0_RX_R = 2,
    UL_RX_SEC1_DAI1_RX_L = 3,
    UL_RX_SEC1_DAI1_RX_R = 4,
    UL_RX_SEC1_DAI2_RX_L = 5,
    UL_RX_SEC1_DAI2_RX_R = 6,
    UL_RX_SEC1_DAI3_RX_L = 7,
    UL_RX_SEC1_DAI3_RX_R = 8,
    UL_RX_SEC1_DMIC_M0_P = 9,
    UL_RX_SEC1_DMIC_M0_N = 10,
    UL_RX_SEC1_DMIC_M1_P = 11,
    UL_RX_SEC1_DMIC_M1_N = 12,
    UL_RX_SEC1_DMIC_COMBO_M0_P = 13,
    UL_RX_SEC1_DMIC_COMBO_M0_N = 14,
};

enum ul_rx_sec2{
    UL_RX_SEC2_DISABLE = 0,
    UL_RX_SEC2_DAI0_RX_L = 1,
    UL_RX_SEC2_DAI0_RX_R = 2,
    UL_RX_SEC2_DAI1_RX_L = 3,
    UL_RX_SEC2_DAI1_RX_R = 4,
    UL_RX_SEC2_DAI2_RX_L = 5,
    UL_RX_SEC2_DAI2_RX_R = 6,
    UL_RX_SEC2_DAI3_RX_L = 7,
    UL_RX_SEC2_DAI3_RX_R = 8,
    UL_RX_SEC2_DMIC_M0_P = 9,
    UL_RX_SEC2_DMIC_M0_N = 10,
    UL_RX_SEC2_DMIC_M1_P = 11,
    UL_RX_SEC2_DMIC_M1_N = 12,
    UL_RX_SEC2_DMIC_COMBO_M0_P = 13,
    UL_RX_SEC2_DMIC_COMBO_M0_N = 14,
};

enum ul_rx_aec{
    UL_RX_AEC_DISABLE = 0,
    UL_RX_AEC_DAI0_RX_L = 1,
    UL_RX_AEC_DAI0_RX_R = 2,
    UL_RX_AEC_DAI1_RX_L = 3,
    UL_RX_AEC_DAI1_RX_R = 4,
    UL_RX_AEC_DAI2_RX_L = 5,
    UL_RX_AEC_DAI2_RX_R = 6,
    UL_RX_AEC_DAI3_RX_L = 7,
    UL_RX_AEC_DAI3_RX_R = 8,
    UL_RX_AEC_DMIC_M0_P = 9,
    UL_RX_AEC_DMIC_M0_N = 10,
    UL_RX_AEC_DMIC_M1_P = 11,
    UL_RX_AEC_DMIC_M1_N = 12,
    UL_RX_AEC_DMIC_COMBO_M0_P = 13,
    UL_RX_AEC_DMIC_COMBO_M0_N = 14,
};

enum ul_tx{
    UL_TX_DISABLE = 0,
    UL_TX_DAI0_TX_L = 1,
    UL_TX_DAI0_TX_R = 2,
    UL_TX_DAI1_TX_L = 3,
    UL_TX_DAI1_TX_R = 4,
    UL_TX_DAI2_TX_L = 5,
    UL_TX_DAI2_TX_R = 6,
    UL_TX_DAI3_TX_L = 7,
    UL_TX_DAI3_TX_R = 8,
    UL_TX_DMIC_S0_P = 9,
    UL_TX_DMIC_S0_N = 10,
    UL_TX_DMIC_S1_P = 11,
    UL_TX_DMIC_S1_N = 12,
    UL_TX_DMIC_COMBO_S0_P = 13,
    UL_TX_DMIC_COMBO_S0_N = 14,
};

enum ul_tx_sidetone{
    UL_TX_SIDETONE_DISABLE = 0,
    UL_TX_SIDETONE_DAI0_TX_L = 1,
    UL_TX_SIDETONE_DAI0_TX_R = 2,
    UL_TX_SIDETONE_DAI1_TX_L = 3,
    UL_TX_SIDETONE_DAI1_TX_R = 4,
    UL_TX_SIDETONE_DAI2_TX_L = 5,
    UL_TX_SIDETONE_DAI2_TX_R = 6,
    UL_TX_SIDETONE_DAI3_TX_L = 7,
    UL_TX_SIDETONE_DAI3_TX_R = 8,
    UL_TX_SIDETONE_DMIC_S0_P = 9,
    UL_TX_SIDETONE_DMIC_S0_N = 10,
    UL_TX_SIDETONE_DMIC_S1_P = 11,
    UL_TX_SIDETONE_DMIC_S1_N = 12,
    UL_TX_SIDETONE_DMIC_COMBO_S0_P = 13,
    UL_TX_SIDETONE_DMIC_COMBO_S0_N = 14,
};

enum dai_0_mode{
    DAI_0_MODE_DISABLE = 0,
    DAI_0_MODE_SLAVE = 1,
    DAI_0_MODE_MASTER = 2,
};

enum dai_0_clk_src{
    DAI_0_CLK_SRC_DISABLE = 0,
    DAI_0_CLK_SRC_MCLK = 1,
    DAI_0_CLK_SRC_INTERNAL = 2,
};

enum dai_0_clk{
    DAI_0_CLK_16K = 0,
    DAI_0_CLK_32K = 1,
    DAI_0_CLK_48K = 2,
};

enum dai_0_data_bit{
    DAI_0_DATA_BIT_32 = 0,
    DAI_0_DATA_BIT_16 = 1,
};

enum dai_1_mode{
    DAI_1_MODE_DISABLE = 0,
    DAI_1_MODE_SLAVE = 1,
    DAI_1_MODE_MASTER = 2,
};

enum dai_1_clk_src{
    DAI_1_CLK_SRC_DISABLE = 0,
    DAI_1_CLK_SRC_MCLK = 1,
    DAI_1_CLK_SRC_INTERNAL = 2,
    DAI_1_CLK_SRC_DAI_0 = 3,
};

enum dai_1_clk{
    DAI_1_CLK_16K = 0,
    DAI_1_CLK_32K = 1,
    DAI_1_CLK_48K = 2,
};

enum dai_1_data_bit{
    DAI_1_DATA_BIT_32 = 0,
    DAI_1_DATA_BIT_16 = 1,
};

enum dai_2_mode{
    DAI_2_MODE_DISABLE = 0,
    DAI_2_MODE_SLAVE = 1,
    DAI_2_MODE_MASTER = 2,
};

enum dai_2_clk_src{
    DAI_2_CLK_SRC_DISABLE = 0,
    DAI_2_CLK_SRC_MCLK = 1,
    DAI_2_CLK_SRC_INTERNAL = 2,
    DAI_2_CLK_SRC_DAI_0 = 3,
};

enum dai_2_clk{
    DAI_2_CLK_16K = 0,
    DAI_2_CLK_32K = 1,
    DAI_2_CLK_48K = 2,
};

enum dai_2_data_bit{
    DAI_2_DATA_BIT_32 = 0,
    DAI_2_DATA_BIT_16 = 1,
};

enum dai_3_mode{
    DAI_3_MODE_DISABLE = 0,
    DAI_3_MODE_SLAVE = 1,
    DAI_3_MODE_MASTER = 2,
};

enum dai_3_clk_src{
    DAI_3_CLK_SRC_DISABLE = 0,
    DAI_3_CLK_SRC_MCLK = 1,
    DAI_3_CLK_SRC_INTERNAL = 2,
    DAI_3_CLK_SRC_DAI_0 = 3,
};

enum dai_3_clk{
    DAI_3_CLK_16K = 0,
    DAI_3_CLK_32K = 1,
    DAI_3_CLK_48K = 2,
};

enum dai_3_data_bit{
    DAI_3_DATA_BIT_32 = 0,
    DAI_3_DATA_BIT_16 = 1,
};

enum dmic_m_clk_src{
    DMIC_M_CLK_SRC_DMIC_S = 0,
    DMIC_M_CLK_SRC_MCLK = 1,
    DMIC_M_CLK_SRC_INTERNAL = 2,
};

enum dmic_input_gain{
    DMIC_INPUT_GAIN_0_DB = 0,
    DMIC_INPUT_GAIN_6_DB = 1,
    DMIC_INPUT_GAIN_12_DB = 2,
    DMIC_INPUT_GAIN_18_DB = 3,
};

enum hw_bypass_dai_0{
    HW_BYPASS_DAI_0_DISABLE = 0,
    HW_BYPASS_DAI_0_ENABLE = 1,
};

enum hw_bypass_dmic_s0{
    HW_BYPASS_DMIC_S0_DISABLE = 0,
    HW_BYPASS_DMIC_S0_ENABLE = 1,
};

enum sw_bypass_en{
    SW_BYPASS_EN_DISABLE = 0,
    SW_BYPASS_EN_ENABLE = 1,
};

void debussy_add_codec_controls(struct snd_soc_codec* codec);


#endif

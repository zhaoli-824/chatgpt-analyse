/*
 * static_model.c
 *
 * automatically generated from J1DYDA-IED.cid
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_LD0_LLN0_dsParameter;
extern DataSet iedModelds_MEAS_LLN0_dsAin;
extern DataSet iedModelds_MEAS_LLN0_dsAin1;
extern DataSet iedModelds_MEAS_LLN0_dsDin;


extern DataSetEntry iedModelds_LD0_LLN0_dsParameter_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_dsParameter_fcda1;

DataSetEntry iedModelds_LD0_LLN0_dsParameter_fcda0 = {
  "LD0",
  false,
  "LPHD1$SP$SettingGrp$setVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_dsParameter_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_dsParameter_fcda1 = {
  "LD0",
  false,
  "LPHD1$SP$DeviceName$setVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_dsParameter = {
  "LD0",
  "LLN0$dsParameter",
  2,
  &iedModelds_LD0_LLN0_dsParameter_fcda0,
  &iedModelds_MEAS_LLN0_dsAin
};

extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda5;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda6;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda7;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda8;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda9;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda10;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda11;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda12;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda13;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda14;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda15;

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda0 = {
  "MEAS",
  false,
  "GGIO1$MX$MV01", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda1 = {
  "MEAS",
  false,
  "GGIO1$MX$MV02", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda2 = {
  "MEAS",
  false,
  "GGIO1$MX$MV03", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda3 = {
  "MEAS",
  false,
  "GGIO1$MX$MV04", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda4 = {
  "MEAS",
  false,
  "GGIO1$MX$MV05", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda5 = {
  "MEAS",
  false,
  "GGIO1$MX$MV06", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda6
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda6 = {
  "MEAS",
  false,
  "GGIO1$MX$MV07", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda7
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda7 = {
  "MEAS",
  false,
  "GGIO1$MX$MV08", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda8
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda8 = {
  "MEAS",
  false,
  "GGIO1$MX$MV09", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda9
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda9 = {
  "MEAS",
  false,
  "GGIO1$MX$MV10", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda10
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda10 = {
  "MEAS",
  false,
  "GGIO1$MX$MV11", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda11
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda11 = {
  "MEAS",
  false,
  "GGIO1$MX$MV12", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda12
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda12 = {
  "MEAS",
  false,
  "GGIO1$MX$MV13", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda13
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda13 = {
  "MEAS",
  false,
  "GGIO1$MX$MV14", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda14
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda14 = {
  "MEAS",
  false,
  "GGIO1$MX$MV15", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin_fcda15
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin_fcda15 = {
  "MEAS",
  false,
  "GGIO1$MX$MV16", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_dsAin = {
  "MEAS",
  "LLN0$dsAin",
  16,
  &iedModelds_MEAS_LLN0_dsAin_fcda0,
  &iedModelds_MEAS_LLN0_dsAin1
};

extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda5;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda6;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda7;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda8;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda9;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda10;
extern DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda11;

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda0 = {
  "MEAS",
  false,
  "GGIO2$MX$MV01", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda1 = {
  "MEAS",
  false,
  "GGIO2$MX$MV02", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda2 = {
  "MEAS",
  false,
  "GGIO2$MX$MV03", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda3 = {
  "MEAS",
  false,
  "GGIO2$MX$MV04", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda4 = {
  "MEAS",
  false,
  "GGIO2$MX$MV05", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda5 = {
  "MEAS",
  false,
  "GGIO2$MX$MV06", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda6
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda6 = {
  "MEAS",
  false,
  "GGIO2$MX$MV07", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda7
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda7 = {
  "MEAS",
  false,
  "GGIO2$MX$MV08", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda8
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda8 = {
  "MEAS",
  false,
  "GGIO2$MX$MV09", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda9
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda9 = {
  "MEAS",
  false,
  "GGIO2$MX$MV10", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda10
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda10 = {
  "MEAS",
  false,
  "GGIO2$MX$MV11", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsAin1_fcda11
};

DataSetEntry iedModelds_MEAS_LLN0_dsAin1_fcda11 = {
  "MEAS",
  false,
  "GGIO2$MX$MV12", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_dsAin1 = {
  "MEAS",
  "LLN0$dsAin1",
  12,
  &iedModelds_MEAS_LLN0_dsAin1_fcda0,
  &iedModelds_MEAS_LLN0_dsDin
};

extern DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda5;

DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda0 = {
  "MEAS",
  false,
  "GGIO6$ST$SPS01", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsDin_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda1 = {
  "MEAS",
  false,
  "GGIO6$ST$SPS02", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsDin_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda2 = {
  "MEAS",
  false,
  "GGIO6$ST$SPS03", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsDin_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda3 = {
  "MEAS",
  false,
  "GGIO6$ST$SPS04", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsDin_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda4 = {
  "MEAS",
  false,
  "GGIO6$ST$SPS05", 
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_dsDin_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_dsDin_fcda5 = {
  "MEAS",
  false,
  "GGIO6$ST$SPS06", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_dsDin = {
  "MEAS",
  "LLN0$dsDin",
  6,
  &iedModelds_MEAS_LLN0_dsDin_fcda0,
  NULL
};

LogicalDevice iedModel_LD0 = {
    LogicalDeviceModelType,
    "LD0",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_LD0_LLN0
};

LogicalNode iedModel_LD0_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
};

DataObject iedModel_LD0_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_LLN0,
    NULL,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_dU,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_LD0,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
};

DataObject iedModel_LD0_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_vendor,
    0
};

DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_serNum,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_model,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_location,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_location = {
    DataAttributeModelType,
    "location",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_OutOv = {
    DataObjectModelType,
    "OutOv",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_OutOv_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv,
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_OutOv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv,
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_OutOv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv,
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_OutOv_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_OutOv,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_InOv,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_InOv = {
    DataObjectModelType,
    "InOv",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_InOv_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_InOv_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_InOv,
    (ModelNode*) &iedModel_LD0_LPHD1_InOv_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_InOv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_InOv,
    (ModelNode*) &iedModel_LD0_LPHD1_InOv_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_InOv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_InOv,
    (ModelNode*) &iedModel_LD0_LPHD1_InOv_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_InOv_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_InOv,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_NumPwrUp = {
    DataObjectModelType,
    "NumPwrUp",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr,
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_NumPwrUp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_NumPwrUp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_NumPwrUp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_NumPwrUp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_NumPwrUp,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_WrmStr = {
    DataObjectModelType,
    "WrmStr",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg,
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_WrmStr_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr,
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_WrmStr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr,
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_WrmStr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr,
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_WrmStr_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_WrmStr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_WacTrg = {
    DataObjectModelType,
    "WacTrg",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_WacTrg_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg,
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_WacTrg_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg,
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_WacTrg_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg,
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_WacTrg_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_WacTrg,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PwrUp = {
    DataObjectModelType,
    "PwrUp",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PwrUp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrUp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrUp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrUp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PwrDn = {
    DataObjectModelType,
    "PwrDn",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PwrDn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrDn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrDn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrDn_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PwrSupAlm = {
    DataObjectModelType,
    "PwrSupAlm",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_RsStat = {
    DataObjectModelType,
    "RsStat",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    0
};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw = {
    DataAttributeModelType,
    "SBOw",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_ctlNum,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_origin,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_SBOw_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_SBOw,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_ctlNum,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_origin,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_stVal,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_ctlNum,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_origin,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_Cancel,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_pulseConfig = {
    DataAttributeModelType,
    "pulseConfig",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_ctlModel,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig_cmdQual,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_pulseConfig_cmdQual = {
    DataAttributeModelType,
    "cmdQual",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig_onDur,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_pulseConfig_onDur = {
    DataAttributeModelType,
    "onDur",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig_offDur,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_pulseConfig_offDur = {
    DataAttributeModelType,
    "offDur",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig_numPls,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_pulseConfig_numPls = {
    DataAttributeModelType,
    "numPls",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_pulseConfig,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_sboTimeout,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_sboClass,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_sboClass = {
    DataAttributeModelType,
    "sboClass",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_RsStat_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_RsStat,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_SettingGrp = {
    DataObjectModelType,
    "SettingGrp",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp_setVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_SettingGrp_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp_minVal,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_SettingGrp_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp_maxVal,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_SettingGrp_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp_stepSize,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_SettingGrp_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_SettingGrp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp_dataNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_SettingGrp_dataNs = {
    DataAttributeModelType,
    "dataNs",
    (ModelNode*) &iedModel_LD0_LPHD1_SettingGrp,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_DeviceName = {
    DataObjectModelType,
    "DeviceName",
    (ModelNode*) &iedModel_LD0_LPHD1,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName_setVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_DeviceName_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName,
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName_dU,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_DeviceName_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName,
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName_cdcNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_DeviceName_cdcNs = {
    DataAttributeModelType,
    "cdcNs",
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName,
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName_cdcName,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_DeviceName_cdcName = {
    DataAttributeModelType,
    "cdcName",
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName,
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName_dataNs,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_DeviceName_dataNs = {
    DataAttributeModelType,
    "dataNs",
    (ModelNode*) &iedModel_LD0_LPHD1_DeviceName,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};


LogicalDevice iedModel_MEAS = {
    LogicalDeviceModelType,
    "MEAS",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0
};

LogicalNode iedModel_MEAS_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
};

DataObject iedModel_MEAS_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_LLN0,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_dU,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
};

DataObject iedModel_MEAS_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_vendor,
    0
};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_serNum,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_model,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam_location,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyNam_location = {
    DataAttributeModelType,
    "location",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_OutOv = {
    DataObjectModelType,
    "OutOv",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_OutOv_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_OutOv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_OutOv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_OutOv_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_OutOv,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_Proxy_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_InOv = {
    DataObjectModelType,
    "InOv",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_InOv_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_InOv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_InOv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv,
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_InOv_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_InOv,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_NumPwrUp = {
    DataObjectModelType,
    "NumPwrUp",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr,
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_NumPwrUp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_NumPwrUp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_NumPwrUp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_NumPwrUp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_NumPwrUp,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_WrmStr = {
    DataObjectModelType,
    "WrmStr",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg,
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_WrmStr_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr,
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_WrmStr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr,
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_WrmStr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr,
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_WrmStr_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_WrmStr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_WacTrg = {
    DataObjectModelType,
    "WacTrg",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_WacTrg_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg,
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_WacTrg_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg,
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_WacTrg_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg,
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_WacTrg_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_WacTrg,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_PwrUp = {
    DataObjectModelType,
    "PwrUp",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_PwrUp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrUp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrUp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrUp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrUp,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_PwrDn = {
    DataObjectModelType,
    "PwrDn",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_PwrDn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrDn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrDn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrDn_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrDn,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_PwrSupAlm = {
    DataObjectModelType,
    "PwrSupAlm",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm_stVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_PwrSupAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrSupAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrSupAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_PwrSupAlm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_PwrSupAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_RsStat = {
    DataObjectModelType,
    "RsStat",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    0
};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw = {
    DataAttributeModelType,
    "SBOw",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_ctlNum,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_origin,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_SBOw_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_SBOw,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_ctlNum,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_origin,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_stVal,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_ctlNum,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_origin,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_Cancel,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_pulseConfig = {
    DataAttributeModelType,
    "pulseConfig",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_ctlModel,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig_cmdQual,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_pulseConfig_cmdQual = {
    DataAttributeModelType,
    "cmdQual",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig_onDur,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_pulseConfig_onDur = {
    DataAttributeModelType,
    "onDur",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig_offDur,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_pulseConfig_offDur = {
    DataAttributeModelType,
    "offDur",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig_numPls,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_pulseConfig_numPls = {
    DataAttributeModelType,
    "numPls",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_pulseConfig,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_sboTimeout,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_sboClass,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_sboClass = {
    DataAttributeModelType,
    "sboClass",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_RsStat_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_RsStat,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_SettingGrp = {
    DataObjectModelType,
    "SettingGrp",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp_setVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_SettingGrp_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp_minVal,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_SettingGrp_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp_maxVal,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_SettingGrp_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp_stepSize,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_SettingGrp_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_SettingGrp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp_dataNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_SettingGrp_dataNs = {
    DataAttributeModelType,
    "dataNs",
    (ModelNode*) &iedModel_MEAS_LPHD1_SettingGrp,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LPHD1_DeviceName = {
    DataObjectModelType,
    "DeviceName",
    (ModelNode*) &iedModel_MEAS_LPHD1,
    NULL,
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName_setVal,
    0
};

DataAttribute iedModel_MEAS_LPHD1_DeviceName_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName,
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName_dU,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_DeviceName_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName,
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName_cdcNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_DeviceName_cdcNs = {
    DataAttributeModelType,
    "cdcNs",
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName,
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName_cdcName,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_DeviceName_cdcName = {
    DataAttributeModelType,
    "cdcName",
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName,
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName_dataNs,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LPHD1_DeviceName_dataNs = {
    DataAttributeModelType,
    "dataNs",
    (ModelNode*) &iedModel_MEAS_LPHD1_DeviceName,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod,
};

DataObject iedModel_MEAS_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_GGIO1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_Health,
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO1_Health_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO1_Health,
    (ModelNode*) &iedModel_MEAS_GGIO1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_Health,
    (ModelNode*) &iedModel_MEAS_GGIO1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt_dU,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV01 = {
    DataObjectModelType,
    "MV01",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV01_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV01_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV01,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV02 = {
    DataObjectModelType,
    "MV02",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV02_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV02_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV02,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV03 = {
    DataObjectModelType,
    "MV03",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV03_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV03_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV03,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV04 = {
    DataObjectModelType,
    "MV04",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV04_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV04_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV04,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV05 = {
    DataObjectModelType,
    "MV05",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV05_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV05_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV05,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV06 = {
    DataObjectModelType,
    "MV06",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV06_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV06_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV06,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV07 = {
    DataObjectModelType,
    "MV07",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV07_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV07_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV07,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV08 = {
    DataObjectModelType,
    "MV08",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV08_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV08_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV08,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV09 = {
    DataObjectModelType,
    "MV09",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV09_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV09_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV09,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV10 = {
    DataObjectModelType,
    "MV10",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV10_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV10_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV10,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV11 = {
    DataObjectModelType,
    "MV11",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV11_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV11_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV11,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV12 = {
    DataObjectModelType,
    "MV12",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV12_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV12_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV12,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV13 = {
    DataObjectModelType,
    "MV13",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV13_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV13_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV13,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV14 = {
    DataObjectModelType,
    "MV14",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV14_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV14_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV14,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV15 = {
    DataObjectModelType,
    "MV15",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV15_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV15_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV15,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV16 = {
    DataObjectModelType,
    "MV16",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV16_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV16_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV16,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV17 = {
    DataObjectModelType,
    "MV17",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV17_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV17_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV17,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV18 = {
    DataObjectModelType,
    "MV18",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV18_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV18_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV18,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV19 = {
    DataObjectModelType,
    "MV19",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV19_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV19_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV19,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV20 = {
    DataObjectModelType,
    "MV20",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV20_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV20_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV20,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV21 = {
    DataObjectModelType,
    "MV21",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV21_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV21_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV21,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV22 = {
    DataObjectModelType,
    "MV22",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV22_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV22_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV22,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV23 = {
    DataObjectModelType,
    "MV23",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV23_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV23_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV23,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV24 = {
    DataObjectModelType,
    "MV24",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV24_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV24_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV24,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV25 = {
    DataObjectModelType,
    "MV25",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV25_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV25_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV25,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV26 = {
    DataObjectModelType,
    "MV26",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV26_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV26_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV26,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV27 = {
    DataObjectModelType,
    "MV27",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV27_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV27_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV27,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV28 = {
    DataObjectModelType,
    "MV28",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV28_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV28_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV28,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV29 = {
    DataObjectModelType,
    "MV29",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV29_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV29_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV29,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV30 = {
    DataObjectModelType,
    "MV30",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV30_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV30_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV30,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV31 = {
    DataObjectModelType,
    "MV31",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV31_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV31_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV31,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO1_MV32 = {
    DataObjectModelType,
    "MV32",
    (ModelNode*) &iedModel_MEAS_GGIO1,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO1_MV32_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_q,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_db,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_units,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO1_MV32_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO1_MV32,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_GGIO2 = {
    LogicalNodeModelType,
    "GGIO2",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod,
};

DataObject iedModel_MEAS_GGIO2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO2_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_GGIO2_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_Health,
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO2_Health_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO2_Health,
    (ModelNode*) &iedModel_MEAS_GGIO2_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_Health,
    (ModelNode*) &iedModel_MEAS_GGIO2_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_GGIO2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt_dU,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV01 = {
    DataObjectModelType,
    "MV01",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV01_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV01_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV01,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV02 = {
    DataObjectModelType,
    "MV02",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV02_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV02_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV02,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV03 = {
    DataObjectModelType,
    "MV03",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV03_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV03_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV03,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV04 = {
    DataObjectModelType,
    "MV04",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV04_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV04_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV04,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV05 = {
    DataObjectModelType,
    "MV05",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV05_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV05_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV05,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV06 = {
    DataObjectModelType,
    "MV06",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV06_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV06_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV06,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV07 = {
    DataObjectModelType,
    "MV07",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV07_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV07_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV07,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV08 = {
    DataObjectModelType,
    "MV08",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV08_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV08_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV08,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV09 = {
    DataObjectModelType,
    "MV09",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV09_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV09_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV09,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV10 = {
    DataObjectModelType,
    "MV10",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV10_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV10_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV10,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV11 = {
    DataObjectModelType,
    "MV11",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV11_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV11_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV11,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV12 = {
    DataObjectModelType,
    "MV12",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV12_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV12_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV12,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV13 = {
    DataObjectModelType,
    "MV13",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV13_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV13_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV13,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV14 = {
    DataObjectModelType,
    "MV14",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV14_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV14_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV14,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV15 = {
    DataObjectModelType,
    "MV15",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV15_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV15_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV15,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV16 = {
    DataObjectModelType,
    "MV16",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV16_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV16_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV16,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV17 = {
    DataObjectModelType,
    "MV17",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV17_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV17_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV17,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV18 = {
    DataObjectModelType,
    "MV18",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV18_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV18_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV18,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV19 = {
    DataObjectModelType,
    "MV19",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV19_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV19_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV19,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV20 = {
    DataObjectModelType,
    "MV20",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV20_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV20_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV20,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV21 = {
    DataObjectModelType,
    "MV21",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV21_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV21_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV21,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV22 = {
    DataObjectModelType,
    "MV22",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV22_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV22_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV22,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV23 = {
    DataObjectModelType,
    "MV23",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV23_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV23_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV23,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV24 = {
    DataObjectModelType,
    "MV24",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV24_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV24_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV24,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV25 = {
    DataObjectModelType,
    "MV25",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV25_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV25_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV25,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV26 = {
    DataObjectModelType,
    "MV26",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV26_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV26_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV26,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV27 = {
    DataObjectModelType,
    "MV27",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV27_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV27_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV27,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV28 = {
    DataObjectModelType,
    "MV28",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV28_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV28_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV28,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV29 = {
    DataObjectModelType,
    "MV29",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV29_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV29_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV29,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV30 = {
    DataObjectModelType,
    "MV30",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV30_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV30_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV30,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV31 = {
    DataObjectModelType,
    "MV31",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV31_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV31_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV31,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO2_MV32 = {
    DataObjectModelType,
    "MV32",
    (ModelNode*) &iedModel_MEAS_GGIO2,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_mag,
    0
};

DataAttribute iedModel_MEAS_GGIO2_MV32_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_q,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_db,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_units,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_zeroDb,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_sVC,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_sVC_scaleFactor,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_sVC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_sVC_offset,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_sVC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_smpRate,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_hhLim,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_hLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_hhLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_hhLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_lLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_hLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_hLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_llLim,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_lLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_lLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_min,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_llLim_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_llLim,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_max,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_min_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_min,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_max_f,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_rangeC_max,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32_dU,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO2_MV32_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO2_MV32,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_GGIO6 = {
    LogicalNodeModelType,
    "GGIO6",
    (ModelNode*) &iedModel_MEAS,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod,
};

DataObject iedModel_MEAS_GGIO6_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod,
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_GGIO6_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_Health,
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh,
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO6_Health_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_Health,
    (ModelNode*) &iedModel_MEAS_GGIO6_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_Health,
    (ModelNode*) &iedModel_MEAS_GGIO6_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01,
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_GGIO6_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt,
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt_dU,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS01 = {
    DataObjectModelType,
    "SPS01",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS01_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS01_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS01_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS01_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS01,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS02 = {
    DataObjectModelType,
    "SPS02",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS02_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS02_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS02_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS02_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS02,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS03 = {
    DataObjectModelType,
    "SPS03",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS03_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS03_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS03_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS03_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS03,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS04 = {
    DataObjectModelType,
    "SPS04",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS04_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS04_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS04_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS04_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS04,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS05 = {
    DataObjectModelType,
    "SPS05",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS05_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS05_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS05_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS05_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS05,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS06 = {
    DataObjectModelType,
    "SPS06",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS06_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS06_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS06_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS06_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS06,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS07 = {
    DataObjectModelType,
    "SPS07",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS07_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS07_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS07_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS07_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS07,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS08 = {
    DataObjectModelType,
    "SPS08",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS08_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS08_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS08_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS08_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS08,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS09 = {
    DataObjectModelType,
    "SPS09",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS09_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS09_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS09_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS09_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS09,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS10 = {
    DataObjectModelType,
    "SPS10",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS10_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS10_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS10,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS11 = {
    DataObjectModelType,
    "SPS11",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS11_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS11_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS11,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS12 = {
    DataObjectModelType,
    "SPS12",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS12_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS12_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS12,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS13 = {
    DataObjectModelType,
    "SPS13",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS13_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS13_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS13,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS14 = {
    DataObjectModelType,
    "SPS14",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS14_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS14_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS14,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS15 = {
    DataObjectModelType,
    "SPS15",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS15_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS15_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS15,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS16 = {
    DataObjectModelType,
    "SPS16",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS16_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS16_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS16,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS17 = {
    DataObjectModelType,
    "SPS17",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS17_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS17_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS17_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS17_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS17,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS18 = {
    DataObjectModelType,
    "SPS18",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS18_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS18_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS18_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS18_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS18,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS19 = {
    DataObjectModelType,
    "SPS19",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS19_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS19_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS19_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS19_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS19,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS20 = {
    DataObjectModelType,
    "SPS20",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS20_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS20_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS20_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS20_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS20,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS21 = {
    DataObjectModelType,
    "SPS21",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS21_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS21_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS21_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS21_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS21,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS22 = {
    DataObjectModelType,
    "SPS22",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS22_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS22_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS22_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS22_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS22,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS23 = {
    DataObjectModelType,
    "SPS23",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS23_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS23_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS23_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS23_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS23,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS24 = {
    DataObjectModelType,
    "SPS24",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS24_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS24_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS24_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS24_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS24,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS25 = {
    DataObjectModelType,
    "SPS25",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS25_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS25_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS25_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS25_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS25,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS26 = {
    DataObjectModelType,
    "SPS26",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS26_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS26_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS26_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS26_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS26,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS27 = {
    DataObjectModelType,
    "SPS27",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS27_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS27_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS27_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS27_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS27,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS28 = {
    DataObjectModelType,
    "SPS28",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS28_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS28_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS28_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS28_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS28,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS29 = {
    DataObjectModelType,
    "SPS29",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS29_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS29_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS29_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS29_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS29,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS30 = {
    DataObjectModelType,
    "SPS30",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS30_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS30_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS30_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS30_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS30,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS31 = {
    DataObjectModelType,
    "SPS31",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS31_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS31_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS31_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS31_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS31,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_GGIO6_SPS32 = {
    DataObjectModelType,
    "SPS32",
    (ModelNode*) &iedModel_MEAS_GGIO6,
    NULL,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32_stVal,
    0
};

DataAttribute iedModel_MEAS_GGIO6_SPS32_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS32_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS32_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32,
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32_dU,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_GGIO6_SPS32_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MEAS_GGIO6_SPS32,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_MEAS_LLN0_report0;
extern ReportControlBlock iedModel_MEAS_LLN0_report1;
extern ReportControlBlock iedModel_MEAS_LLN0_report2;
extern ReportControlBlock iedModel_MEAS_LLN0_report3;
extern ReportControlBlock iedModel_MEAS_LLN0_report4;
extern ReportControlBlock iedModel_MEAS_LLN0_report5;

ReportControlBlock iedModel_MEAS_LLN0_report0 = {&iedModel_MEAS_LLN0, "urcbAin101", "urcbAin", false, "dsAin", 1, 31, 62, 0, 120000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report1};
ReportControlBlock iedModel_MEAS_LLN0_report1 = {&iedModel_MEAS_LLN0, "urcbAin102", "urcbAin", false, "dsAin", 1, 31, 62, 0, 120000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report2};
ReportControlBlock iedModel_MEAS_LLN0_report2 = {&iedModel_MEAS_LLN0, "urcbAin201", "urcbAin2", false, "dsAin1", 1, 31, 62, 0, 120000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report3};
ReportControlBlock iedModel_MEAS_LLN0_report3 = {&iedModel_MEAS_LLN0, "urcbAin202", "urcbAin2", false, "dsAin1", 1, 31, 62, 0, 120000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report4};
ReportControlBlock iedModel_MEAS_LLN0_report4 = {&iedModel_MEAS_LLN0, "urcbAin301", "urcbAin3", false, "dsDin", 1, 31, 62, 0, 120000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report5};
ReportControlBlock iedModel_MEAS_LLN0_report5 = {&iedModel_MEAS_LLN0, "urcbAin302", "urcbAin3", false, "dsDin", 1, 31, 62, 0, 120000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "J1DYDA",
    &iedModel_LD0,
    &iedModelds_LD0_LLN0_dsParameter,
    &iedModel_MEAS_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_LD0_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2003");

iedModel_LD0_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString("zd");

iedModel_LD0_LPHD1_SettingGrp_dU.mmsValue = MmsValue_newMmsString("定值区号");

iedModel_LD0_LPHD1_SettingGrp_dataNs.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_LD0_LPHD1_DeviceName_dU.mmsValue = MmsValue_newMmsString("被保护设备");

iedModel_LD0_LPHD1_DeviceName_cdcNs.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_LD0_LPHD1_DeviceName_cdcName.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_LD0_LPHD1_DeviceName_dataNs.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_MEAS_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2003");

iedModel_MEAS_LPHD1_SettingGrp_dataNs.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_MEAS_LPHD1_DeviceName_cdcNs.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_MEAS_LPHD1_DeviceName_cdcName.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_MEAS_LPHD1_DeviceName_dataNs.mmsValue = MmsValue_newVisibleString("JBK_MODEL:2010");

iedModel_MEAS_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_GGIO1_MV01_dU.mmsValue = MmsValue_newMmsString("微水");

iedModel_MEAS_GGIO1_MV02_dU.mmsValue = MmsValue_newMmsString("水活性");

iedModel_MEAS_GGIO1_MV03_dU.mmsValue = MmsValue_newMmsString("H2含量");

iedModel_MEAS_GGIO1_MV04_dU.mmsValue = MmsValue_newMmsString("CO含量");

iedModel_MEAS_GGIO1_MV05_dU.mmsValue = MmsValue_newMmsString("CO2含量");

iedModel_MEAS_GGIO1_MV06_dU.mmsValue = MmsValue_newMmsString("CH4含量");

iedModel_MEAS_GGIO1_MV07_dU.mmsValue = MmsValue_newMmsString("C2H2含量");

iedModel_MEAS_GGIO1_MV08_dU.mmsValue = MmsValue_newMmsString("C2H4含量");

iedModel_MEAS_GGIO1_MV09_dU.mmsValue = MmsValue_newMmsString("C2H6含量");

iedModel_MEAS_GGIO1_MV10_dU.mmsValue = MmsValue_newMmsString("总烃含量");

iedModel_MEAS_GGIO1_MV11_dU.mmsValue = MmsValue_newMmsString("总可燃气体含量");

iedModel_MEAS_GGIO1_MV12_dU.mmsValue = MmsValue_newMmsString("O2含量");

iedModel_MEAS_GGIO1_MV13_dU.mmsValue = MmsValue_newMmsString("N2含量");

iedModel_MEAS_GGIO1_MV14_dU.mmsValue = MmsValue_newMmsString("备用1");

iedModel_MEAS_GGIO1_MV15_dU.mmsValue = MmsValue_newMmsString("备用2");

iedModel_MEAS_GGIO1_MV16_dU.mmsValue = MmsValue_newMmsString("备用3");

iedModel_MEAS_GGIO2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_GGIO2_MV01_dU.mmsValue = MmsValue_newMmsString("阀侧套管a压力");

iedModel_MEAS_GGIO2_MV02_dU.mmsValue = MmsValue_newMmsString("阀侧套管b压力");

iedModel_MEAS_GGIO2_MV03_dU.mmsValue = MmsValue_newMmsString("顶层油温1");

iedModel_MEAS_GGIO2_MV04_dU.mmsValue = MmsValue_newMmsString("顶层油温2");

iedModel_MEAS_GGIO2_MV05_dU.mmsValue = MmsValue_newMmsString("绕组温度（网侧）");

iedModel_MEAS_GGIO2_MV06_dU.mmsValue = MmsValue_newMmsString("本体油位1");

iedModel_MEAS_GGIO2_MV07_dU.mmsValue = MmsValue_newMmsString("油枕压力");

iedModel_MEAS_GGIO2_MV08_dU.mmsValue = MmsValue_newMmsString("铁芯电流");

iedModel_MEAS_GGIO2_MV09_dU.mmsValue = MmsValue_newMmsString("夹件电流");

iedModel_MEAS_GGIO2_MV10_dU.mmsValue = MmsValue_newMmsString("调压油位");

iedModel_MEAS_GGIO2_MV11_dU.mmsValue = MmsValue_newMmsString("备用2");

iedModel_MEAS_GGIO2_MV12_dU.mmsValue = MmsValue_newMmsString("备用3");

iedModel_MEAS_GGIO6_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MEAS_GGIO6_SPS01_dU.mmsValue = MmsValue_newMmsString("档位BCD1");

iedModel_MEAS_GGIO6_SPS02_dU.mmsValue = MmsValue_newMmsString("档位BCD2");

iedModel_MEAS_GGIO6_SPS03_dU.mmsValue = MmsValue_newMmsString("档位BCD3");

iedModel_MEAS_GGIO6_SPS04_dU.mmsValue = MmsValue_newMmsString("档位BCD4");

iedModel_MEAS_GGIO6_SPS05_dU.mmsValue = MmsValue_newMmsString("档位BCD5");

iedModel_MEAS_GGIO6_SPS06_dU.mmsValue = MmsValue_newMmsString("档位BCD6");
}

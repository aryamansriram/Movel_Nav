
(cl:in-package :asdf)

(defsystem "ublox_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Ack" :depends-on ("_package_Ack"))
    (:file "_package_Ack" :depends-on ("_package"))
    (:file "AidALM" :depends-on ("_package_AidALM"))
    (:file "_package_AidALM" :depends-on ("_package"))
    (:file "AidEPH" :depends-on ("_package_AidEPH"))
    (:file "_package_AidEPH" :depends-on ("_package"))
    (:file "AidHUI" :depends-on ("_package_AidHUI"))
    (:file "_package_AidHUI" :depends-on ("_package"))
    (:file "CfgANT" :depends-on ("_package_CfgANT"))
    (:file "_package_CfgANT" :depends-on ("_package"))
    (:file "CfgCFG" :depends-on ("_package_CfgCFG"))
    (:file "_package_CfgCFG" :depends-on ("_package"))
    (:file "CfgDAT" :depends-on ("_package_CfgDAT"))
    (:file "_package_CfgDAT" :depends-on ("_package"))
    (:file "CfgDGNSS" :depends-on ("_package_CfgDGNSS"))
    (:file "_package_CfgDGNSS" :depends-on ("_package"))
    (:file "CfgGNSS" :depends-on ("_package_CfgGNSS"))
    (:file "_package_CfgGNSS" :depends-on ("_package"))
    (:file "CfgGNSS_Block" :depends-on ("_package_CfgGNSS_Block"))
    (:file "_package_CfgGNSS_Block" :depends-on ("_package"))
    (:file "CfgHNR" :depends-on ("_package_CfgHNR"))
    (:file "_package_CfgHNR" :depends-on ("_package"))
    (:file "CfgINF" :depends-on ("_package_CfgINF"))
    (:file "_package_CfgINF" :depends-on ("_package"))
    (:file "CfgINF_Block" :depends-on ("_package_CfgINF_Block"))
    (:file "_package_CfgINF_Block" :depends-on ("_package"))
    (:file "CfgMSG" :depends-on ("_package_CfgMSG"))
    (:file "_package_CfgMSG" :depends-on ("_package"))
    (:file "CfgNAV5" :depends-on ("_package_CfgNAV5"))
    (:file "_package_CfgNAV5" :depends-on ("_package"))
    (:file "CfgNAVX5" :depends-on ("_package_CfgNAVX5"))
    (:file "_package_CfgNAVX5" :depends-on ("_package"))
    (:file "CfgNMEA" :depends-on ("_package_CfgNMEA"))
    (:file "_package_CfgNMEA" :depends-on ("_package"))
    (:file "CfgNMEA6" :depends-on ("_package_CfgNMEA6"))
    (:file "_package_CfgNMEA6" :depends-on ("_package"))
    (:file "CfgNMEA7" :depends-on ("_package_CfgNMEA7"))
    (:file "_package_CfgNMEA7" :depends-on ("_package"))
    (:file "CfgPRT" :depends-on ("_package_CfgPRT"))
    (:file "_package_CfgPRT" :depends-on ("_package"))
    (:file "CfgRATE" :depends-on ("_package_CfgRATE"))
    (:file "_package_CfgRATE" :depends-on ("_package"))
    (:file "CfgRST" :depends-on ("_package_CfgRST"))
    (:file "_package_CfgRST" :depends-on ("_package"))
    (:file "CfgSBAS" :depends-on ("_package_CfgSBAS"))
    (:file "_package_CfgSBAS" :depends-on ("_package"))
    (:file "CfgTMODE3" :depends-on ("_package_CfgTMODE3"))
    (:file "_package_CfgTMODE3" :depends-on ("_package"))
    (:file "CfgUSB" :depends-on ("_package_CfgUSB"))
    (:file "_package_CfgUSB" :depends-on ("_package"))
    (:file "EsfINS" :depends-on ("_package_EsfINS"))
    (:file "_package_EsfINS" :depends-on ("_package"))
    (:file "EsfMEAS" :depends-on ("_package_EsfMEAS"))
    (:file "_package_EsfMEAS" :depends-on ("_package"))
    (:file "EsfRAW" :depends-on ("_package_EsfRAW"))
    (:file "_package_EsfRAW" :depends-on ("_package"))
    (:file "EsfRAW_Block" :depends-on ("_package_EsfRAW_Block"))
    (:file "_package_EsfRAW_Block" :depends-on ("_package"))
    (:file "EsfSTATUS" :depends-on ("_package_EsfSTATUS"))
    (:file "_package_EsfSTATUS" :depends-on ("_package"))
    (:file "EsfSTATUS_Sens" :depends-on ("_package_EsfSTATUS_Sens"))
    (:file "_package_EsfSTATUS_Sens" :depends-on ("_package"))
    (:file "HnrPVT" :depends-on ("_package_HnrPVT"))
    (:file "_package_HnrPVT" :depends-on ("_package"))
    (:file "Inf" :depends-on ("_package_Inf"))
    (:file "_package_Inf" :depends-on ("_package"))
    (:file "MgaGAL" :depends-on ("_package_MgaGAL"))
    (:file "_package_MgaGAL" :depends-on ("_package"))
    (:file "MonGNSS" :depends-on ("_package_MonGNSS"))
    (:file "_package_MonGNSS" :depends-on ("_package"))
    (:file "MonHW" :depends-on ("_package_MonHW"))
    (:file "_package_MonHW" :depends-on ("_package"))
    (:file "MonHW6" :depends-on ("_package_MonHW6"))
    (:file "_package_MonHW6" :depends-on ("_package"))
    (:file "MonVER" :depends-on ("_package_MonVER"))
    (:file "_package_MonVER" :depends-on ("_package"))
    (:file "MonVER_Extension" :depends-on ("_package_MonVER_Extension"))
    (:file "_package_MonVER_Extension" :depends-on ("_package"))
    (:file "NavATT" :depends-on ("_package_NavATT"))
    (:file "_package_NavATT" :depends-on ("_package"))
    (:file "NavCLOCK" :depends-on ("_package_NavCLOCK"))
    (:file "_package_NavCLOCK" :depends-on ("_package"))
    (:file "NavDGPS" :depends-on ("_package_NavDGPS"))
    (:file "_package_NavDGPS" :depends-on ("_package"))
    (:file "NavDGPS_SV" :depends-on ("_package_NavDGPS_SV"))
    (:file "_package_NavDGPS_SV" :depends-on ("_package"))
    (:file "NavDOP" :depends-on ("_package_NavDOP"))
    (:file "_package_NavDOP" :depends-on ("_package"))
    (:file "NavPOSECEF" :depends-on ("_package_NavPOSECEF"))
    (:file "_package_NavPOSECEF" :depends-on ("_package"))
    (:file "NavPOSLLH" :depends-on ("_package_NavPOSLLH"))
    (:file "_package_NavPOSLLH" :depends-on ("_package"))
    (:file "NavPVT" :depends-on ("_package_NavPVT"))
    (:file "_package_NavPVT" :depends-on ("_package"))
    (:file "NavPVT7" :depends-on ("_package_NavPVT7"))
    (:file "_package_NavPVT7" :depends-on ("_package"))
    (:file "NavRELPOSNED" :depends-on ("_package_NavRELPOSNED"))
    (:file "_package_NavRELPOSNED" :depends-on ("_package"))
    (:file "NavRELPOSNED9" :depends-on ("_package_NavRELPOSNED9"))
    (:file "_package_NavRELPOSNED9" :depends-on ("_package"))
    (:file "NavSAT" :depends-on ("_package_NavSAT"))
    (:file "_package_NavSAT" :depends-on ("_package"))
    (:file "NavSAT_SV" :depends-on ("_package_NavSAT_SV"))
    (:file "_package_NavSAT_SV" :depends-on ("_package"))
    (:file "NavSBAS" :depends-on ("_package_NavSBAS"))
    (:file "_package_NavSBAS" :depends-on ("_package"))
    (:file "NavSBAS_SV" :depends-on ("_package_NavSBAS_SV"))
    (:file "_package_NavSBAS_SV" :depends-on ("_package"))
    (:file "NavSOL" :depends-on ("_package_NavSOL"))
    (:file "_package_NavSOL" :depends-on ("_package"))
    (:file "NavSTATUS" :depends-on ("_package_NavSTATUS"))
    (:file "_package_NavSTATUS" :depends-on ("_package"))
    (:file "NavSVIN" :depends-on ("_package_NavSVIN"))
    (:file "_package_NavSVIN" :depends-on ("_package"))
    (:file "NavSVINFO" :depends-on ("_package_NavSVINFO"))
    (:file "_package_NavSVINFO" :depends-on ("_package"))
    (:file "NavSVINFO_SV" :depends-on ("_package_NavSVINFO_SV"))
    (:file "_package_NavSVINFO_SV" :depends-on ("_package"))
    (:file "NavTIMEGPS" :depends-on ("_package_NavTIMEGPS"))
    (:file "_package_NavTIMEGPS" :depends-on ("_package"))
    (:file "NavTIMEUTC" :depends-on ("_package_NavTIMEUTC"))
    (:file "_package_NavTIMEUTC" :depends-on ("_package"))
    (:file "NavVELECEF" :depends-on ("_package_NavVELECEF"))
    (:file "_package_NavVELECEF" :depends-on ("_package"))
    (:file "NavVELNED" :depends-on ("_package_NavVELNED"))
    (:file "_package_NavVELNED" :depends-on ("_package"))
    (:file "RxmALM" :depends-on ("_package_RxmALM"))
    (:file "_package_RxmALM" :depends-on ("_package"))
    (:file "RxmEPH" :depends-on ("_package_RxmEPH"))
    (:file "_package_RxmEPH" :depends-on ("_package"))
    (:file "RxmRAW" :depends-on ("_package_RxmRAW"))
    (:file "_package_RxmRAW" :depends-on ("_package"))
    (:file "RxmRAWX" :depends-on ("_package_RxmRAWX"))
    (:file "_package_RxmRAWX" :depends-on ("_package"))
    (:file "RxmRAWX_Meas" :depends-on ("_package_RxmRAWX_Meas"))
    (:file "_package_RxmRAWX_Meas" :depends-on ("_package"))
    (:file "RxmRAW_SV" :depends-on ("_package_RxmRAW_SV"))
    (:file "_package_RxmRAW_SV" :depends-on ("_package"))
    (:file "RxmRTCM" :depends-on ("_package_RxmRTCM"))
    (:file "_package_RxmRTCM" :depends-on ("_package"))
    (:file "RxmSFRB" :depends-on ("_package_RxmSFRB"))
    (:file "_package_RxmSFRB" :depends-on ("_package"))
    (:file "RxmSFRBX" :depends-on ("_package_RxmSFRBX"))
    (:file "_package_RxmSFRBX" :depends-on ("_package"))
    (:file "RxmSVSI" :depends-on ("_package_RxmSVSI"))
    (:file "_package_RxmSVSI" :depends-on ("_package"))
    (:file "RxmSVSI_SV" :depends-on ("_package_RxmSVSI_SV"))
    (:file "_package_RxmSVSI_SV" :depends-on ("_package"))
    (:file "TimTM2" :depends-on ("_package_TimTM2"))
    (:file "_package_TimTM2" :depends-on ("_package"))
    (:file "UpdSOS" :depends-on ("_package_UpdSOS"))
    (:file "_package_UpdSOS" :depends-on ("_package"))
    (:file "UpdSOS_Ack" :depends-on ("_package_UpdSOS_Ack"))
    (:file "_package_UpdSOS_Ack" :depends-on ("_package"))
  ))
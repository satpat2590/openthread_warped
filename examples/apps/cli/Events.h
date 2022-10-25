#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //moduleid is a uint8_t
    //moduleEventId is a uint8_t
    //dataType is an int
    // std::vector<std::vector<int> > m_events;


    typedef struct events { //database
        int moduleId;
        int moduleEvents[15][2];
    }eventDef;

    typedef struct payload { //for each moduleEvent
        int moduleId;
        int moduleEventId;
        int dataType;
        int moduleType;
        int time_powered_up;
        int deviceId; 
        uint8_t data[];
    }makingLovetoBjarneStroustrup;



    // std::vector<payload *> packedData;


    void push_it(int moduleId, int* dataType, events &input) { //used for creating the internal database... aka events
        
    }



    






moduleName: "out-of-box",


moduleId: 0





moduleEventName: "FULL_OOB_REQUESTED_VIA_BLE",


moduleId: 0




Testing 0: null







moduleEventName: "FULL_OOB_REQUESTED_VIA_OT",


moduleId: 1




Testing 0: null







moduleEventName: "FULL_OOB_REQUESTED_VIA_BUTTONS",


moduleId: 2




Testing 0: null







moduleEventName: "FULL_OOB_SUCCESS",


moduleId: 3




Testing 0: null







moduleEventName: "FULL_OOB_FAILURE",


moduleId: 4




Testing 0: null







moduleEventName: "PARTIAL_OOB_REQUESTED_VIA_OT",


moduleId: 5




Testing 0: null







moduleEventName: "PARTIAL_OOB_SUCCESS",


moduleId: 6




Testing 0: null







moduleEventName: "PARTIAL_OOB_FAILURE",


moduleId: 7




Testing 0: null







moduleEventName: "FULL_OOB_TIMEOUT_FAILURE",


moduleId: 8




Testing 0: null







moduleEventName: "PARTIAL_OOB_REQUESTED_VIA_WIRELESS_DEBUG",


moduleId: 9




Testing 0: null







moduleEventName: "FULL_OOB_REQUESTED_VIA_WIRELESS_DEBUG",


moduleId: 10




Testing 0: null








moduleName: "firmware-update",


moduleId: 1





moduleEventName: "APPLY_APP",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "softwareRev",











moduleEventName: "APPLY_APP_SUCCESS",


moduleId: 1




Testing 0: [
we continued!



moduleEventName: "softwareRev",











moduleEventName: "APPLY_APP_FAILURE",


moduleId: 2




Testing 0: [
we continued!



moduleEventName: "lastUpdateStatus",







moduleEventName: "lastUpdateSubStatus",











moduleEventName: "APPLY_BOOT",


moduleId: 3




Testing 0: [
we continued!



moduleEventName: "softwareRev",











moduleEventName: "APPLY_BOOT_SUCCESS",


moduleId: 4




Testing 0: [
we continued!



moduleEventName: "softwareRev",











moduleEventName: "APPLY_BOOT_FAILURE",


moduleId: 5




Testing 0: [
we continued!



moduleEventName: "lastUpdateStatus",







moduleEventName: "lastUpdateSubStatus",











moduleEventName: "APP_ROLLBACK_SUCCESS",


moduleId: 6




Testing 0: [
we continued!



moduleEventName: "softwareRev",











moduleEventName: "APP_ROLLBACK_FAILURE",


moduleId: 7




Testing 0: [
we continued!



moduleEventName: "lastUpdateStatus",







moduleEventName: "lastUpdateSubStatus",











moduleEventName: "APPLY_ROLLBACK",


moduleId: 8




Testing 0: [
we continued!



moduleEventName: "softwareRev",











moduleEventName: "DELETE_ROLLBACK_SUCCESS",


moduleId: 9




Testing 0: null







moduleEventName: "DELETE_ROLLBACK_FAILURE",


moduleId: 10




Testing 0: null








moduleName: "natural-show-runner",


moduleId: 2





moduleEventName: "EVENT_ACTIVATE_NATURAL_SHOW_PUSHED_PART_1",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "naturalShowId",







moduleEventName: "stepNumber",







moduleEventName: "offset",












moduleEventName: "EVENT_ACTIVATE_NATURAL_SHOW_PUSHED_PART_2",


moduleId: 1




Testing 0: [
we continued!



moduleEventName: "interceptTime",







moduleEventName: "stepFadeTime",












moduleEventName: "EVENT_GO_TO_SHOW_STEP_PUSHED_PART_1",


moduleId: 2




Testing 0: [
we continued!



moduleEventName: "naturalShowId",







moduleEventName: "stepNumber",







moduleEventName: "fadeTime",












moduleEventName: "EVENT_GO_TO_SHOW_STEP_PUSHED_PART_2",


moduleId: 3




Testing 0: [
we continued!



moduleEventName: "forceActivate",












moduleEventName: "EVENT_PRESET_ACTIVATE_GOTO_NATURAL_SHOW_PUSHED_PART_1",


moduleId: 4




Testing 0: [
we continued!



moduleEventName: "naturalShowId",







moduleEventName: "intensity.value()",







moduleEventName: "intensity.has_value()",







moduleEventName: "fade",












moduleEventName: "EVENT_PRESET_ACTIVATE_GOTO_NATURAL_SHOW_PUSHED_PART_2",


moduleId: 5




Testing 0: [
we continued!



moduleEventName: "delay",







moduleEventName: "timeOfDay",












moduleEventName: "EVENT_PRESET_ACTIVATE_GOTO_NATURAL_SHOW_PUSHED_PART_3",


moduleId: 6




Testing 0: [
we continued!



moduleEventName: "timeAfterSunrise",







moduleEventName: "timeAfterSunset",












moduleEventName: "EVENT_ACTIVATE_NATURAL_SHOW_EXERCISED_PART_1",


moduleId: 7




Testing 0: [
we continued!



moduleEventName: "naturalShowId",







moduleEventName: "stepNumber",







moduleEventName: "offset",












moduleEventName: "EVENT_ACTIVATE_NATURAL_SHOW_EXERCISED_PART_2",


moduleId: 8




Testing 0: [
we continued!



moduleEventName: "interceptTime",







moduleEventName: "stepFadeTime",












moduleEventName: "EVENT_GO_TO_SHOW_STEP_EXERCISED_PART_1",


moduleId: 9




Testing 0: [
we continued!



moduleEventName: "naturalShowId",







moduleEventName: "stepNumber",







moduleEventName: "fadeTime",












moduleEventName: "EVENT_GO_TO_SHOW_STEP_EXERCISED_PART_2",


moduleId: 10




Testing 0: [
we continued!



moduleEventName: "forceActivate",












moduleEventName: "EVENT_PRESET_ACTIVATE_GOTO_NATURAL_SHOW_EXERCISED_PART_1",


moduleId: 11




Testing 0: [
we continued!



moduleEventName: "naturalShowId",







moduleEventName: "intensity.value()",







moduleEventName: "intensity.has_value()",







moduleEventName: "fade",












moduleEventName: "EVENT_PRESET_ACTIVATE_GOTO_NATURAL_SHOW_EXERCISED_PART_2",


moduleId: 12




Testing 0: [
we continued!



moduleEventName: "delay",







moduleEventName: "timeOfDay",












moduleEventName: "EVENT_PRESET_ACTIVATE_GOTO_NATURAL_SHOW_EXERCISED_PART_3",


moduleId: 13




Testing 0: [
we continued!



moduleEventName: "timeAfterSunrise",







moduleEventName: "timeAfterSunset",













moduleName: "hardware-detection",


moduleId: 3





moduleEventName: "OVER_TEMPERATURE_DETECTED",


moduleId: 0




Testing 0: null







moduleEventName: "OVER_TEMPERATURE_RECOVERED",


moduleId: 1




Testing 0: null







moduleEventName: "OVER_VOLTAGE_ERROR",


moduleId: 2




Testing 0: null







moduleEventName: "OVER_CURRENT_ERROR",


moduleId: 3




Testing 0: null







moduleEventName: "SHORTED_FET_CONFIRMED",


moduleId: 4




Testing 0: null







moduleEventName: "SHORTED_FET_NOT_CONFIRMED",


moduleId: 5




Testing 0: null







moduleEventName: "SHORTED_FET_CAPPING_LOAD",


moduleId: 6




Testing 0: null







moduleEventName: "ZERO_CROSS_MISSED",


moduleId: 7




Testing 0: null







moduleEventName: "SCR_OPEN_DETECT_FAILURE",


moduleId: 8




Testing 0: null







moduleEventName: "SCR_OPEN_DETECT_RECOVERY",


moduleId: 9




Testing 0: null







moduleEventName: "LOAD_DRIVER_LINE_SYNC_LOST",


moduleId: 10




Testing 0: null







moduleEventName: "LOAD_DRIVER_LINE_SYNC_COMPLETE",


moduleId: 11




Testing 0: null







moduleEventName: "LOAD_DRIVER_MISWIRE_DETECTED",


moduleId: 12




Testing 0: null







moduleEventName: "LOAD_DRIVER_BLUEWIRE_MISWIRE_DETECTED",


moduleId: 13




Testing 0: null







moduleEventName: "PHASE_CHANGED",


moduleId: 14




Testing 0: [
we continued!



moduleEventName: "newPhase",











moduleEventName: "INIT_LINE_SYNC_TIMEOUT",


moduleId: 15




Testing 0: null







moduleEventName: "LINE_SYNC_OUT_OF_RANGE",


moduleId: 16




Testing 0: [
we continued!



moduleEventName: "lineSyncOutOfRangeValue",












moduleName: "captouch-micro",


moduleId: 4





moduleEventName: "TI_RECAL_MAX_COUNT_ERROR",


moduleId: 0




Testing 0: null







moduleEventName: "INTERMICRO_TIMEOUT_ERROR",


moduleId: 1




Testing 0: null







moduleEventName: "TI_RESET_UNKNOWN",


moduleId: 2




Testing 0: null







moduleEventName: "TI_RESET_BROWNOUT",


moduleId: 3




Testing 0: null







moduleEventName: "TI_RESET_RST_NMI",


moduleId: 4




Testing 0: null







moduleEventName: "TI_RESET_PMMSWBOR",


moduleId: 5




Testing 0: null







moduleEventName: "TI_RESET_LOW_POWER_WAKEUP",


moduleId: 6




Testing 0: null







moduleEventName: "TI_RESET_SECURITY_VIOLATION",


moduleId: 7




Testing 0: null







moduleEventName: "TI_RESET_SVSHIFG",


moduleId: 8




Testing 0: null







moduleEventName: "TI_RESET_PMMSWPOR",


moduleId: 9




Testing 0: null







moduleEventName: "TI_RESET_WATCHDOG_TIMEOUT",


moduleId: 10




Testing 0: null







moduleEventName: "TI_RESET_FRCTL_PASSWORD_VIOLATION",


moduleId: 11




Testing 0: null







moduleEventName: "TI_RESET_FRAM_BIT_ERROR_DETECTION",


moduleId: 12




Testing 0: null







moduleEventName: "TI_RESET_PERIPHERAL_AREA_FETCH",


moduleId: 13




Testing 0: null







moduleEventName: "TI_RESET_FLL_UNLOCK",


moduleId: 14




Testing 0: null







moduleEventName: "EOL_CAPTOUCH_TEST_COMPLETE",


moduleId: 15




Testing 0: null







moduleEventName: "EOL_CAPTOUCH_BOARD_TEST_COMPLETE",


moduleId: 16




Testing 0: null







moduleEventName: "TI_MICRO_CANNOT_CALIBRATE",


moduleId: 17




Testing 0: null







moduleEventName: "TI_RECAL_NEGATIVE_TOUCH",


moduleId: 18




Testing 0: null







moduleEventName: "TI_RECAL_ENVIRONMENTAL_SHIFT",


moduleId: 19




Testing 0: null







moduleEventName: "TI_RESET_WATCHDOG_PASSWORD_VIOLATION",


moduleId: 20




Testing 0: null







moduleEventName: "TI_RESET_PMM_PASSWORD_VIOLATION",


moduleId: 21




Testing 0: null








moduleName: "buttons",


moduleId: 5





moduleEventName: "BUTTON_STUCK",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "buttonNumber",











moduleEventName: "EOL_ON_BUTTON_TEST_COMPLETE",


moduleId: 1




Testing 0: null







moduleEventName: "EOL_OFF_BUTTON_TEST_COMPLETE",


moduleId: 2




Testing 0: null








moduleName: "bluewire-multilocation",


moduleId: 6





moduleEventName: "EOL_MULTILOCATION_TEST_COMPLETE",


moduleId: 0




Testing 0: null







moduleEventName: "BLUEWIRE_MISWIRE_DETECTED",


moduleId: 1




Testing 0: null







moduleEventName: "BLUEWIRE_INVALID_STATE_ERROR",


moduleId: 2




Testing 0: null








moduleName: "inter-micro",


moduleId: 7





moduleEventName: "BREAK_RECEIVED_DURING_MESSAGE",


moduleId: 0




Testing 0: null







moduleEventName: "PACKET_ERROR_INVALID_CHECKSUM",


moduleId: 1




Testing 0: null







moduleEventName: "TIMEOUT_ERROR",


moduleId: 2




Testing 0: null







moduleEventName: "RX_PACKET_QUEUE_FULL",


moduleId: 3




Testing 0: null







moduleEventName: "PACKET_ERROR_INVALID_COMMAND",


moduleId: 4




Testing 0: null







moduleEventName: "TX_PACKET_QUEUE_FULL",


moduleId: 5




Testing 0: null








moduleName: "ble",


moduleId: 8





moduleEventName: "CLAIMING_IDLE",


moduleId: 0




Testing 0: null







moduleEventName: "ENTER_CLAIMING",


moduleId: 1




Testing 0: null







moduleEventName: "CLAIMED",


moduleId: 2




Testing 0: null







moduleEventName: "CLAIMING_TIMEOUT",


moduleId: 3




Testing 0: null







moduleEventName: "UNKNOWN_CLAIMING_STATE",


moduleId: 4




Testing 0: null







moduleEventName: "DIAGNOSTIC_IDLE",


moduleId: 5




Testing 0: null







moduleEventName: "ENTER_DIAGNOSTIC",


moduleId: 6




Testing 0: null







moduleEventName: "DIAGNOSTIC_OOB_FAILED",


moduleId: 7




Testing 0: null







moduleEventName: "DIAGNOSTIC_TIMEOUT",


moduleId: 8




Testing 0: null







moduleEventName: "UNKNOWN_DIAGNOSTIC_STATE",


moduleId: 9




Testing 0: null







moduleEventName: "SELECTED",


moduleId: 10




Testing 0: null







moduleEventName: "START_SCANNING",


moduleId: 11




Testing 0: null







moduleEventName: "STOP_SCANNING",


moduleId: 12




Testing 0: null







moduleEventName: "START_ADVERTISEMENTS",


moduleId: 13




Testing 0: null







moduleEventName: "STOP_ADVERTISEMENTS",


moduleId: 14




Testing 0: null







moduleEventName: "CLOSE_CONNECTION",


moduleId: 15




Testing 0: null







moduleEventName: "FORCE_CLOSE_CONNECTION",


moduleId: 16




Testing 0: null







moduleEventName: "CONNECTION_CLOSED_GRACEFULLY",


moduleId: 17




Testing 0: null







moduleEventName: "BLE_STACK_INIT_FAILED",


moduleId: 18




Testing 0: null







moduleEventName: "BLE_CLASSES_INIT_FAILED",


moduleId: 19




Testing 0: null







moduleEventName: "BLE_SYSTEM_SET_SOFT_TIMER_FAILED",


moduleId: 20




Testing 0: null







moduleEventName: "GATT_SERVER_SEND_NOTIFICATION_ERROR",


moduleId: 21




Testing 0: [
we continued!



moduleEventName: "bleModule",







moduleEventName: "errorCode",











moduleEventName: "BLE_STOP_SCANNING_ERROR",


moduleId: 22




Testing 0: [
we continued!



moduleEventName: "errorCode",











moduleEventName: "ERROR_CALLING_BLE_STACK_FUNCTION",


moduleId: 23




Testing 0: [
we continued!



moduleEventName: "errorCode",












moduleName: "network-init",


moduleId: 9





moduleEventName: "ENTERING_WIRELESS_DEBUG",


moduleId: 0




Testing 0: null







moduleEventName: "EXITING_WIRELESS_DEBUG",


moduleId: 1




Testing 0: null







moduleEventName: "STARTING_BLE",


moduleId: 2




Testing 0: null







moduleEventName: "STOPPING_BLE",


moduleId: 3




Testing 0: null







moduleEventName: "STARTING_OPEN_THREAD",


moduleId: 4




Testing 0: null







moduleEventName: "STOPPING_OPEN_THREAD",


moduleId: 5




Testing 0: null








moduleName: "data-object",


moduleId: 10





moduleEventName: "PRESET_FAILED_TO_INIT",


moduleId: 0




Testing 0: null







moduleEventName: "PRESET_FAILED_TO_CLOSE",


moduleId: 1




Testing 0: null







moduleEventName: "PRESET_FAILED_TO_REBUILD_JUMP_TABLE",


moduleId: 2




Testing 0: null







moduleEventName: "PRESET_FAILED_TO_ADVANCE",


moduleId: 3




Testing 0: null







moduleEventName: "MULTICAST_FAILED_TO_INIT",


moduleId: 4




Testing 0: null







moduleEventName: "MULTICAST_FAILED_TO_ADVANCE",


moduleId: 5




Testing 0: null







moduleEventName: "NETWORK_PARAMS_FAILED_TO_INIT",


moduleId: 6




Testing 0: null







moduleEventName: "NETWORK_PARAMS_FAILED_TO_ADVANCE",


moduleId: 7




Testing 0: null







moduleEventName: "GENERIC_COMPONENT_FAILED_TO_DECODE",


moduleId: 8




Testing 0: null







moduleEventName: "EMITTER_CONTROLLER_CONFIG_WRONG_SIZE",


moduleId: 9




Testing 0: null







moduleEventName: "EMITTER_CONTROLLER_CONFIG_BUFFER_TOO_BIG",


moduleId: 10




Testing 0: null







moduleEventName: "EMITTER_CONTROLLER_CONFIG_UNSUPPORTED_VERSION",


moduleId: 11




Testing 0: null







moduleEventName: "SWITCHLEG_WRONG_SIZE",


moduleId: 12




Testing 0: null







moduleEventName: "PRESET_DECODE_OUT_OF_MEMORY",


moduleId: 13




Testing 0: null








moduleName: "oem-self-test",


moduleId: 11





moduleEventName: "TEST_STARTED",


moduleId: 0




Testing 0: null







moduleEventName: "TEST_ENDED_SUCCESS",


moduleId: 1




Testing 0: null







moduleEventName: "TEST_ENDED_WD",


moduleId: 2




Testing 0: null







moduleEventName: "TEST_ENDED_BLE_CLAIMING",


moduleId: 3




Testing 0: null







moduleEventName: "TEST_ENDED_BLE_DIAGNOSTIC",


moduleId: 4




Testing 0: null







moduleEventName: "TEST_ENDED_UNEXPECTED_FAILED",


moduleId: 5




Testing 0: null







moduleEventName: "TEST_ENDED_UNEXPECTED_CLAIMED",


moduleId: 6




Testing 0: null







moduleEventName: "TEST_ENDED_TIMEOUT",


moduleId: 7




Testing 0: null







moduleEventName: "LOCKOUT_OCCURRED",


moduleId: 8




Testing 0: null








moduleName: "warm-dim",


moduleId: 12





moduleEventName: "INVALID_WARM_DIM_CURVE_ID",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "curveID",











moduleEventName: "CCT_FADE_ATTEMPTED_BY_XY_CURVE",


moduleId: 1




Testing 0: null








moduleName: "ot",


moduleId: 13





moduleEventName: "RLOC_CHANGED",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "newRloc",











moduleEventName: "LEADER_TAKEOVER",


moduleId: 1




Testing 0: [
we continued!



moduleEventName: "reason",











moduleEventName: "RESET",


moduleId: 2




Testing 0: [
we continued!



moduleEventName: "status",












moduleName: "occupancy",


moduleId: 14





moduleEventName: "OCCUPIED",


moduleId: 0




Testing 0: null







moduleEventName: "GRACE",


moduleId: 1




Testing 0: null







moduleEventName: "VACANT",


moduleId: 2




Testing 0: null







moduleEventName: "OCCUPIED_FROM_GRACE",


moduleId: 3




Testing 0: null







moduleEventName: "MOTION_ENOUGH_ACCUMULATED",


moduleId: 4




Testing 0: [
we continued!



moduleEventName: "continuousRms",







moduleEventName: "lockedRms",







moduleEventName: "minorMotionSliceThreshold",











moduleEventName: "MOTION_MAJOR_ACCUMULATED",


moduleId: 5




Testing 0: [
we continued!



moduleEventName: "continuousRms",







moduleEventName: "lockedRms",







moduleEventName: "majorMotionSliceThreshold",












moduleName: "cal-table",


moduleId: 15





moduleEventName: "INIT_CC",


moduleId: 0




Testing 0: null







moduleEventName: "BEGIN",


moduleId: 1




Testing 0: null







moduleEventName: "ECID",


moduleId: 2




Testing 0: null







moduleEventName: "FINISH",


moduleId: 3




Testing 0: null







moduleEventName: "EEPROM",


moduleId: 4




Testing 0: null







moduleEventName: "ECID_I2C_FAIL",


moduleId: 5




Testing 0: null







moduleEventName: "ECID_TIMEOUT_FAIL",


moduleId: 6




Testing 0: null







moduleEventName: "ECID_FAIL",


moduleId: 7




Testing 0: null







moduleEventName: "ECID_CHECK_BEFORE_CAL_TABLE_PROGRAMMED",


moduleId: 8




Testing 0: null







moduleEventName: "WRITE_FAIL",


moduleId: 9




Testing 0: [
we continued!



moduleEventName: "loadAttemptCount",











moduleEventName: "CRC_FAIL",


moduleId: 10




Testing 0: [
we continued!



moduleEventName: "loadAttemptCount",











moduleEventName: "RESTARTED_AFTER_TRANSFER",


moduleId: 11




Testing 0: [
we continued!



moduleEventName: "loadAttemptCount",











moduleEventName: "ERASE_FAIL",


moduleId: 12




Testing 0: [
we continued!



moduleEventName: "loadAttemptCount",











moduleEventName: "READ_EXTERNAL_FAIL",


moduleId: 13




Testing 0: [
we continued!



moduleEventName: "loadAttemptCount",












moduleName: "local-daylighting",


moduleId: 16





moduleEventName: "CALIBRATION_STARTED",


moduleId: 0




Testing 0: null







moduleEventName: "CALIBRATION_FAILURE",


moduleId: 1




Testing 0: [
we continued!



moduleEventName: "failureType",











moduleEventName: "CALIBRATION_WARNING",


moduleId: 2




Testing 0: [
we continued!



moduleEventName: "warningType",











moduleEventName: "CALIBRATION_COMPLETE",


moduleId: 3




Testing 0: [
we continued!



moduleEventName: "newElectricSlope",











moduleEventName: "CALIBRATION_DATA_CLEARED",


moduleId: 4




Testing 0: null








moduleName: "vb-foldback",


moduleId: 17





moduleEventName: "VB_FOLDBACK_FINISHED",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "vbFoldbackCause",







moduleEventName: "vbScalar",












moduleName: "control-auto-detect",


moduleId: 18





moduleEventName: "SUCCESS_0_10_V",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "zeroToTenReason",











moduleEventName: "SUCCESS_DALI",


moduleId: 1




Testing 0: [
we continued!



moduleEventName: "daliReason",











moduleEventName: "DID_NOT_RUN",


moduleId: 2




Testing 0: [
we continued!



moduleEventName: "didNotRunReason",











moduleEventName: "AUTO_DETECT_TIMEOUT",


moduleId: 3




Testing 0: [
we continued!



moduleEventName: "autoDetectState",







moduleEventName: "pulseState",







moduleEventName: "daliMessageState",







moduleEventName: "daliQueryResponseState",











moduleEventName: "DALI_MESSAGE_TX_ERROR",


moduleId: 4




Testing 0: null








moduleName: "reliable-pc2-ack-sender",


moduleId: 19





moduleEventName: "CACHE_HIGH_WATERMARK",


moduleId: 0




Testing 0: [
we continued!



moduleEventName: "numberOfElements",











moduleEventName: "SENDER_FAILURE",


moduleId: 1




Testing 0: null







moduleEventName: "SENDER_ACK_ATTEMPT_FAILURE",


moduleId: 2




Testing 0: null







moduleEventName: "MESSAGE_RETRIED",


moduleId: 3




Testing 0: [
we continued!



moduleEventName: "destinationAddress",







moduleEventName: "sessionId",











moduleEventName: "MESSAGE_DROPPED",


moduleId: 4




Testing 0: [
we continued!



moduleEventName: "destinationAddress",







moduleEventName: "sessionId",
};


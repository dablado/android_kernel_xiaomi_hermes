#ifndef _DISP_HELPER_H_
#define _DISP_HELPER_H_

typedef enum
{
	DISP_HELPER_OPTION_USE_CMDQ = 0,
	DISP_HELPER_OPTION_USE_M4U,
	DISP_HELPER_OPTION_USE_CLKMGR,
	DISP_HELPER_OPTION_MIPITX_ON_CHIP,
	DISP_HELPER_OPTION_USE_DEVICE_TREE,
	DISP_HELPER_OPTION_FAKE_LCM_X,
	DISP_HELPER_OPTION_FAKE_LCM_Y,
	DISP_HELPER_OPTION_FAKE_LCM_WIDTH,
	DISP_HELPER_OPTION_FAKE_LCM_HEIGHT,
	DISP_HELPER_OPTION_OVL_WARM_RESET,
	DISP_HELPER_OPTION_DYNAMIC_SWITCH_UNDERFLOW_EN,
	DISP_HELPER_OPTION_IDLEMGR_SWTCH_DECOUPLE,
	DISP_HELPER_OPTION_IDLEMGR_DISABLE_ROUTINE_IRQ,
	DISP_HELPER_OPTION_DECOUPLE_MODE_USE_RGB565,
	DISP_HELPER_OPTION_TWO_PIPE_INTERFACE_PATH,
	DISP_HELPER_OPTION_NO_LCM_FOR_LOW_POWER_MEASUREMENT,
	DISP_HELPER_OPTION_DEFAULT_DECOUPLE_MODE,
	DISP_HELPER_OPTION_DISPLAY_PATH_DEBUG_PATTERN,
	DISP_HELPER_OPTION_AUTO_1L_DL,
	DISP_HELPER_OPTION_NUM
}DISP_HELPER_OPTION;

typedef enum
{
	DISP_HELPER_STAGE_EARLY_PORTING,
	DISP_HELPER_STAGE_BRING_UP,
	DISP_HELPER_STAGE_NORMAL
}DISP_HELPER_STAGE;

void disp_helper_option_init(void);
int disp_helper_get_option(DISP_HELPER_OPTION option);
int disp_helper_set_option(DISP_HELPER_OPTION option, int value);
int disp_helper_get_option_list(char* stringbuf, int buf_len);

DISP_HELPER_STAGE disp_helper_get_stage(void);
const char *disp_helper_stage_spy(void);

void enable_screen_idle_switch_decouple();
void disable_screen_idle_switch_decouple();



#endif

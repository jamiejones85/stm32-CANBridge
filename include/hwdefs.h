#ifndef HWDEFS_H_INCLUDED
#define HWDEFS_H_INCLUDED


//Common for any config

#define RCC_CLOCK_SETUP() rcc_clock_setup_in_hse_25mhz_out_72mhz()
#define OVER_CUR_TIMER     TIM4
#define OCURMAX            4096

//Address of parameter block in flash
#define FLASH_PAGE_SIZE 2048
#define PARAM_BLKSIZE FLASH_PAGE_SIZE
#define PARAM_BLKNUM  1   //last block of 1k
#define CAN1_BLKNUM   2
#define CAN2_BLKNUM   4


#endif // HWDEFS_H_INCLUDED

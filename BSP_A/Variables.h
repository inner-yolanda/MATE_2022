/**
  ******************************************************************************
  * @file           : Variables.h
  * @brief          : Variables.h
  *                   ���ļ��������������Ҫʹ�õ�ȫ�ֱ���.
	*										ʹ�ñ��ļ���Ŀ���ǣ��������еĹؼ�ȫ�ֱ���ͳһ����ͬ��λ��.
	*										���ܱ��ܹ������� FreeRTOS ����ϵͳ�����Զ��ڴ���й�����������
	*										�����оֲ�����������鿴���޸ģ���˲�ʹ�ò���ϵͳ�����ڴ������
	*										����ʹ����ȫ�ֱ����ķ�ʽ.
  ******************************************************************************
  * @revision				:
	*										v1.0	:	2022.1�״η���
  *
  *	@Contributor		:	DogeYellow
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef VARIABLES_H
#define VARIABLES_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "Driver_Propellor.h"
#include "Driver_Servo.h"
#include "Driver_Remote.h"
#include "Driver_Gyroscope.h"

/* Exported variables ------------------------------------------------------------*/
extern PROP_DutyTypeDef PROP_Speed ;
extern SEVO_DutyTypeDef SEVO_Angle ;
extern REMO_DataTypeDef REMO_Data ;
extern GYRO_DataTypeDef GYRO_Data ;

/* Exported types ------------------------------------------------------------*/


/* Exported constants --------------------------------------------------------*/


/* Exported macro ------------------------------------------------------------*/


/* Exported functions prototypes ---------------------------------------------*/


/* Private defines -----------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif /* VARIABLES_H */
/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Blue_Button_Pin GPIO_PIN_13
#define Blue_Button_GPIO_Port GPIOC
#define LED_ON_STM_Pin GPIO_PIN_5
#define LED_ON_STM_GPIO_Port GPIOA
#define TIM3_CH1_L_Pin GPIO_PIN_6
#define TIM3_CH1_L_GPIO_Port GPIOC
#define L_TIM3_CH2_Pin GPIO_PIN_7
#define L_TIM3_CH2_GPIO_Port GPIOC
#define TIM3_CH3_R_Pin GPIO_PIN_8
#define TIM3_CH3_R_GPIO_Port GPIOC
#define R_TIM3_CH4_Pin GPIO_PIN_9
#define R_TIM3_CH4_GPIO_Port GPIOC
#define Right_Switch_Pin GPIO_PIN_10
#define Right_Switch_GPIO_Port GPIOA
#define Left_Switch_Pin GPIO_PIN_11
#define Left_Switch_GPIO_Port GPIOA
#define ENA1_Pin GPIO_PIN_4
#define ENA1_GPIO_Port GPIOB
#define ENB1_Pin GPIO_PIN_5
#define ENB1_GPIO_Port GPIOB
#define ENA2_Pin GPIO_PIN_6
#define ENA2_GPIO_Port GPIOB
#define ENB2_Pin GPIO_PIN_8
#define ENB2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

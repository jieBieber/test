#include "myadc.h"


/*******************************************************************
* 函数功能:获取ADC的值
* 函数参数：
* 			ADC_HandleTypeDef *hadc：ADC的通道值
* 函数返回值：
* 			double:转换后的ADC值
*******************************************************************/
double getADC(ADC_HandleTypeDef *hadc)
{
	unsigned int value = 0;
	//开启转换ADC并且获取值
	HAL_ADC_Start(hadc);
	value = HAL_ADC_GetValue(hadc);
	//ADC值的转换 3.3V是电压 4096是ADC的精度为12位也就是2^12=4096
	return value*3.3/4096;
}


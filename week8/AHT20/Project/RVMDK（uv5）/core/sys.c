#include "sys.h"


//STM32F103核心板例程
//库函数版本例程
/********** mcudev.taobao.com 出品  ********/

//	 

//STM32开发板
//系统中断分组设置化		   

//********************************************************************************  
void NVIC_Configuration(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级

}


#include <stdio.h> 
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

//BSP板级支持包所需全局变量
unsigned long UART_BASE = 0xbf000000;                   //UART16550的虚地址
unsigned long CONFREG_TIMER_BASE = 0xbf20f100;          //CONFREG计数器的虚地址
unsigned long CONFREG_CLOCKS_PER_SEC = 50000000L;       //CONFREG时钟频率
unsigned long CORE_CLOCKS_PER_SEC = 33000000L;          //处理器核时钟频率

#define CPSIZE 12
char src[CPSIZE] = "this is src";
char dst[CPSIZE] = "this is dst";

int main(int argc, char** argv)
{
    printf("hello this is JingqianSoc!!!\n");
    printf("hello this is JingqianSoc!!!\n");
    printf("hello this is JingqianSoc!!!\n");
    
    unsigned long DMA_BASE = 0xbf300000;
    unsigned long ISP_BASE = 0xbf500000;
    
    printf("setting isp\n");
    // 1. 战术调整：先唤醒 ISP！让 ISP 敞开大门，准备好接收马上到来的流水线数据
    *(volatile unsigned int *)(ISP_BASE + 0x04) = 0x102; //等一下在找
    *(volatile unsigned int *)(ISP_BASE + 0x08) = 0x9E; //亮度
    *(volatile unsigned int *)(ISP_BASE + 0x0C) = 0x7E; //对比度
    *(volatile unsigned int *)(ISP_BASE + 0x10) = 0x00;  //R
    *(volatile unsigned int *)(ISP_BASE + 0x14) = 0x00;  //G    
    *(volatile unsigned int *)(ISP_BASE + 0x18) = 0x00;  //B  
    *(volatile unsigned int *)(ISP_BASE + 0x1C) = 1920;  //宽度
    *(volatile unsigned int *)(ISP_BASE + 0x20) = 1080;  //高度
    *(volatile unsigned int *)(ISP_BASE + 0x00) = 0x01;   //启动！！！！！
    printf("working\n");

    printf("DMA test start\n");
    
    {
        const unsigned int src_addr  = 0x1C200000;
        const unsigned int dst_addr  = 0x1C300000;
        const unsigned int total_len = 128 * 128 * 4;//搬运的长度  

        *(volatile unsigned int *)(DMA_BASE + 0x00) = src_addr;//读数据地址
        *(volatile unsigned int *)(DMA_BASE + 0x04) = total_len;//读数据长度
        *(volatile unsigned int *)(DMA_BASE + 0x08) = dst_addr;//写数据地址
        *(volatile unsigned int *)(DMA_BASE + 0x0C) = total_len;//写数据长度
        *(volatile unsigned int *)(DMA_BASE + 0x10) = 0x03;//读写同时启动
    }

    printf("all finish!!!\n");

    printf("all finish!!!\n");
    printf("all finish!!!\n");
    printf("all finish!!!\n");
    
    while(1){
        // 死循环，防止跑飞
    }
    return 0;
}

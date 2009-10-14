#include <stdio.h>
#include <device/flash.h>

extern int boot_flash_init(struct flash_device *);
extern int init_cs5536_rtc();
void main(void)
{
	int i;
	struct flash_device flash_dev;
	u32 count;
	
	i = boot_flash_init(&flash_dev);
	if(i == 0)
		early_printf("error\n");
	init_cpu_freq();
	init_cs5536_rtc();
	early_printf("fdsa \n");
	while(1);
	asm (".set mips3\n dli $2, 0xffffffffbfc00000;jalr $2":::"$2");
}



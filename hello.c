#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENCE("GPL");
MODULE_AUTHOR("andresroot");
MODULE_DESCRIPTION("A hello world module");


static int__init hello_init(void)
{
	printk(KERN_INFO)
}
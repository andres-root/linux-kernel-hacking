#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENCE("GPL");
MODULE_AUTHOR("andresroot");
MODULE_DESCRIPTION("A hello world module");


static int __init hello_init(void)
{
	printk(KERN_INFO "Hello world! module by andresroot.\n");
	return 0;  // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_cleanup(void)
{
	printk(KERN_INFO "Cleaning up module.\n");
}
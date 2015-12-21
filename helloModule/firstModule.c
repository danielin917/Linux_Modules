/* Module source file 'syaing hello'. */
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

static int hi(void)
{
	printk(KERN_INFO "Hello World!\n");
	return 0;
}
static void bye(void)
{
	printk(KERN_INFO "Unloading module\n");
}
module_init(hi);
module_exit(bye);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dan Lin");

MODULE_DESCRIPTION("This is just my first module so it doesn't really do anything");



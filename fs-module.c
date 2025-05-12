#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

#define FS procfs

static int __init fs_init(void)
{
    printk("%s initialization\n", FS);
    return 0;
}

static void __exit fs_exit(void)
{
    printk("%s exiting\n", FS);
}

module_init(fs_init);
module_exit(fs_exit);

MODULE_LICENSE("GPL v3");
MODULE_AUTHOR("Zadevarses");
MODULE_DESCRIPTION("Simple text game for %s", FS);

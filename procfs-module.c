#include <linux/init.h> /* Необходим для макросов */
#include <linux/kernel.h> /* Необходим для pr_info() */
#include <linux/module.h> /* Необходим всем модулям */

#define FS procfs

static int __init fs_init(void)
{
    pr_info("FS initialization\n");
    return 0;
}

static void __exit fs_exit(void)
{
    pr_info("FS exiting\n");
}

module_init(fs_init);
module_exit(fs_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Zadevarses");
MODULE_DESCRIPTION("Simple text game on procfs/sysfs");

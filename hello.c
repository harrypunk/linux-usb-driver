#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static init hello_init(void){
  printk(KERn_ALERT "Hello, world\n");
  return 0;
}

static void hello_exit(void){
  printk(KERN_ALERT,"Goodby \n");
}

module_init(hello_init)
module_exit(hello_exit)

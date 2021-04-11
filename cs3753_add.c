#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int number1, int number2, int *result){
    int sum = number1 + number2; 
    printk(KERN_ALERT "Number 1: %d\n", number1); 
    printk(KERN_ALERT "Number 2: %d\n", number2);
    printk(KERN_ALERT "Result: %d\n", sum); 
    if(copy_to_user(result, &sum, sizeof(sum)) != 0) {
        printk(KERN_ALERT "Cannot access memory"); 
        return -1; 
    }
    return 0; 
}
# System Call 
As with hello_world, you will need to write a C test program that calls this new system call and passes the correct types of arguments. 

Your cs3753_add() must do the following:

use printk() to log the numbers to be added
add those two numbers
store the result
use printk() to log the result
return an appropriate return value
Additionally, have your user space test program print out it's result as well.

## Things I learned: 
1. copy_to and copy_from user is important because the memeory address are not the same between user space and kernel space (i.e logical/virtural vs. physical memory)
2. It takes wayyyyy to long to compile and see if something is working or not -> LKM is FIRE 

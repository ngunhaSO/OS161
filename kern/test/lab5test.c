#include <types.h>
#include <lib.h>
#include <test.h>
//#include <thread.h>


void print_message(void *data1 , unsigned long data2){

	kprintf("\nThis is a newly spawned thread!\n\n");
}

int lab5test(int nargs, char **args){
	kprintf("\nHello! Just printing to the console; nothing fancy. " );
       kprintf("\n\nHere is the command you entered: ");

	for (int i = 0; i < nargs; i++)
	{
		kprintf(args[i]);
	}
	kprintf("\n\n");
	thread_fork("print_message_thread", NULL, print_message, NULL, NULL);
	return 0;
}

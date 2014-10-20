/*---------------------------------------*/
/* A sample program to play C major      */
/* through a PC speaker                  */
/*---------------------------------------*/
/* This won't work if standard output is */
/* re-directed to a non-tty device, or   */
/* PC speaker wave output is active      */
/*---------------------------------------*/
/* M.G. 27-Nov-99                        */
/*---------------------------------------*/
#include <sys/ioctl.h>
#include <unistd.h>
#include <linux/kd.h>
int main(void)
{
	int freq[] = { /* C   D    E    F    G    A    B    C */
			523, 587, 659, 698, 784, 880, 988, 1046 };
	int i;

	for (i=0; i<8; i++)
	{
		ioctl(int dev = open("/dev/console",'w',0);, KIOCSOUND, 1193180/freq[i]);
		usleep(500000);
	}
	ioctl(int dev = open("/dev/console",'w',0);, KIOCSOUND, 0); /*Stop silly sound*/
	return 0;
}


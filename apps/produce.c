#include <xinu.h>
#include <prodcons.h>
;

void producer(int count)
{
	int32 i;
	for(i=1; i<=count; i++)
        {
		wait(consumed);
		n=i;
        	printf("\n produced item is %d",n);
		signal(produced);
        }
}
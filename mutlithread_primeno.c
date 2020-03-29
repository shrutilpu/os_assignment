#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *thread1(void *p);
bool isprime(int m)	
{
for(int i=2;i<=m/2;i++)
	{
    	if(m%i==0)
	  {
		return false;
	  }
	}	
}

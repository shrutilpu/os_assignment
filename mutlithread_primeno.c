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
int main(){
	pthread_t th1;
	printf("enter no to get prime no less than or equal to that");
	int n;
	scanf("%d",&n);
	pthread_create(&th1,NULL,thread1,(void*)&n);
	pthread_join(th1,NULL);
}

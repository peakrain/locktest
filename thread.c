#include"thread.h"
void *producer(void *arg)
{

}
void *consumer(void *arg)
{

}
void *salesman(void *arg)
{

}
void init_lock()
{
	pthread_mutex_init(&p_mutex,NULL);
	pthread_mutex_init(&s_mutex,NULL);
	pthread_cond_init(&p_cond,NULL);
	pthread_cond_init(&ps_cond,NULL);
	pthread_cond_init(&ss_cond,NULL);
	pthread_cond_init(s_cond,NULL);
}
void init()
{
	producer_inv=0;
	salesman_inv=0;
	init_lock();
}

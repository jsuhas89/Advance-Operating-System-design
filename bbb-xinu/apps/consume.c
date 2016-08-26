/*#include <prodcons.h>

 void consumer(int count, sid32 consumed, sid32 produced)
 {
     
int i;
for(i=1;i<=count;i++){
wait(produced);
kprintf("consumed: %d \n",n);
signal(consumed);
}
}
*/

#include <prodcons.h>


int consume(future *fut){

  char *i = &fut->value;

  int status;

  status = future_get(fut, &i);

  if (status < 1) {

    printf("future_get failed\n");

    return -1;

  }

	kprintf("Consumer received: %s\n", response);

  return OK;

}


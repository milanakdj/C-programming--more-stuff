#include <stdio.h>
 
// static int ii=0;
 
void staticDemo()
{
  
    static int i ;{
    	static int i=1;
    printf("%d ", i);
    i++;
    }
  
  printf("%d\n", i);
  i++;
}
 
int main()
{
//	printf("%d\n",ii);
//	ii++;
//	printf("%d\n",ii);
  staticDemo();
  staticDemo();
}
//OUTPUT
//======
//1 2
//3 4

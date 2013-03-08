#include <stdio.h>
#include <stdlib.h>

//int cmp1( const void *s1, const void *s2) ;



int cmp1( const void *s1, const void *s2) {
  int *x = (int *)s1;  /* es geht auch  int x= *(int*)s1 ...  unten dann ohne * */
  int *y = (int *)s2;
  return (*x<*y) ? -1 : (( *x==*y ) ? 0 : 1);
}


main() {

  int v[] = {12,89,56,34,92,3,6,7,9,1,2,7,6,5,45,65,34,23,98,6,56,29,76,55,66,22,10};

  int n = sizeof(v) / sizeof(int);

  qsort(v,n,sizeof(int), cmp1);

  int i;

  for(i=0; i<n; i++)
    printf("%d ", v[i]);

  return 0;
}


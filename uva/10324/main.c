// 10324 - Zeros and Ones
#include <stdio.h>
int main(void) {
  size_t casenum = 1, n, a, b, min, max, i, l;
  char val, * buff = NULL;
  for (; getline(&buff, &l, stdin) != -1; ) {
    printf("Case %zu:\n", casenum++);
    for (scanf("%zu", &n); n-- > 0 && scanf("%zu %zu\n", &a, &b); ) {
      min = a < b ? a : b;
  	  max = a < b ? b : a;
      for (i = min, val = buff[min]; i <= max && i < l; i++)
        if (buff[i] != val) { puts("No"); break; }
        else if (i == max)  { puts("Yes");       }	  
    }
  }	 
  return 0;
}

// 11530 - SMS Typing
#include <stdio.h>
int main(void) {
    size_t n, l = 0, r, i, count, casenum = 1;
    char* buff = NULL;
    int presses[26] = { 1, 2, 3,  1, 2, 3,   
              1, 2, 3,  1, 2, 3,  1, 2, 3,
              1,2,3,4,  1, 2, 3,  1,2,3,4  };
    scanf("%zu", &n); getchar(); 
    while (n-- > 0 && (r = getline(&buff, &l, stdin)) != -1) {
        for (i = 0, count = 0; buff[i] != '\n' && i < r; i++)
            count += (buff[i] == ' ') ? 1 : presses[buff[i] - 'a'];
        printf("Case #%zu: %zu\n", casenum++, count);
    }
    return 0;
}

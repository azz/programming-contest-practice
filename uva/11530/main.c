// 11530 - SMS Typing
#include <stdio.h>
int main(void) {
    size_t n, l, r, i, count, casenum = 1;
    char* buff = NULL;
    int presses[27] = { 1, 2, 3,  1, 2, 3,   
              1, 2, 3,  1, 2, 3,  1, 2, 3,
              1,2,3,4,  1, 2, 3,  1,2,3,4, };
    for (scanf("%zu\n", &n); n > 0 && (r = getline(&buff, &l, stdin)) != -1; n--) {
        for (i = 0, count = 0; i+1 < r; i++) 
            count += (buff[i] == ' ') ? 1 : presses[buff[i] - 'a'];
        printf("Case #%zu: %zu\n", casenum++, count);
    }
    return 0;
}

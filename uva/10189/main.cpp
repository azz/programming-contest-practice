#include <iostream>
using namespace std;

char g_field[100][100];

int is_mine(int i, int j, int n, int m) {
    if (i >= 0 && i < n && j >= 0 && j < m)
        return g_field[i][j] == '*' ? 1 : 0;
    return 0; 
}
int main(void) {
    unsigned int n, m, i, j, fieldnum = 1;
    char c;
    for (cin >> n >> m; n && m; cin >> n >> m) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> c;
                g_field[i][j] = (c == '*' ? '*' : '0');
            }
        }
        cout << "Field #" << fieldnum++ << ":" << endl;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (g_field[i][j] != '*')
                    g_field[i][j] += 
                        is_mine(i-1, j-1, n, m) + is_mine(i-1, j,   n, m) + is_mine(i-1, j+1, n, m) + 
                        is_mine(i,   j-1, n, m) + /*  current position */   is_mine(i,   j+1, n, m) +
                        is_mine(i+1, j-1, n, m) + is_mine(i+1, j,   n, m) + is_mine(i+1, j+1, n, m); 
                cout << g_field[i][j];
            }
            cout << endl;
        }        
    }
    return 0;
}

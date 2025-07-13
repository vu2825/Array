#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

void sinh(vector<vector<int>> &board, int rows, int cols, int mines) {
    srand(time(0));
    int placed = 0;
    while (placed < mines) {
        int r = rand() % rows;
        int c = rand() % cols;
        if (board[r][c] == -1) continue;
        board[r][c] = -1; 
        placed++;
    }
}

void xuLy(vector<vector<int>> &board, int rows, int cols) {
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (board[r][c] == -1) continue;
            int count = 0;
            for (int k = 0; k < 8; ++k) {
                int nr = r + dr[k], nc = c + dc[k];
                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && board[nr][nc] == -1)
                    count++;
            }
            board[r][c] = count;
        }
    }
}

void in(vector<vector<int>> &board) {
    for (const auto &row : board) {
        for (int val : row) {
            if (val == -1) cout << "* ";
            else cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rows = 5, cols = 5, mines = 5;
    vector<vector<int>> board(rows, vector<int>(cols, 0));
    sinh(board, rows, cols, mines);
    xuLy(board, rows, cols);
    in(board);
    return 0;
}

#include <iostream>
#include <stdlib.h>

// �}�b�v�\������֐�
void drawMap(int rows, int cols, int** p) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            std::cout << "��";
        }
        std::cout << std::endl;
    }
}

int main() {

    const int rows = 20;
    const int cols = 20;

    // 2�����z�񏉊���
    int map[rows][cols]{};

    int** p = new int* [rows];

    // �e�s�̐擪�A�h���X������B
    for (int r = 0; r < rows; r++) p[r] = map[r];

    drawMap(rows, cols, p);
    delete[]p;

}
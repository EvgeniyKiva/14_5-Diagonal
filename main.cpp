#include <iostream>

int main() {
    float a[4][4];

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            std::cout << "Enter next elements matrix A - ";
            std::cin >> a[i][j];
            if (i!=j) a[i][j] =0;
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            std::cout << a[i][j] <<" ";
        }
        std::cout << std::endl;
    }


    return 0;
}

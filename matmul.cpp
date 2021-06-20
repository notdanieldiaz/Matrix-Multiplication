#include <iostream>
#include <iomanip>
#include <vector>

/* -- Getting Basic int MatMul to work -- */
void intbMM() {
    int buffer_1[3][2], buffer_2[3][2];
    int resmat[2][2]; 
    int res1c = 0, res2c = 0;
    int res1mat[1][2], res2mat[1][2];
    //int mat1[2][3] = {{1, 2, 3},
    //                  {4, 5, 6}};
    //int mat2[3][2] = {{  7,  8},
    //                  {  9, 10},
    //                  { 11, 12}};
    std::vector<std::vector<int>> mat1 = {{1, 2, 3},
                                          {4, 5, 6}};

    std::vector<std::vector<int>> mat2 = {{  7,  8},    
                                          {  9, 10},
                                          { 11, 12}}; 
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            buffer_1[i][j] = (mat1[0][i])*(mat2[i][j]);
            buffer_2[i][j] = (mat1[1][i])*(mat2[i][j]);
        }   
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            res1c += buffer_1[j][i];
            res1mat[0][i] = res1c;
            res2c += buffer_2[j][i];
            res2mat[0][i] = res2c;
        }
        res1c = 0;
        res2c = 0;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resmat[0][j] = res1mat[0][j];
            resmat[1][j] = res2mat[0][j];
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << resmat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void vectorbasic() {
    //std::vector<std::vector<int>> mat1;

    //say  vector<int> m1 = {1, 2, 3}
    //  1 row : 3 elements/columns
    //
    //say vector<vector<int>> m2 = {{1, 2, 3},
    //                              {4, 5, 6}};
    //  2 rows: 3 elements/columns


}

void arrMatMult() {
    // Variable length arrays aren't allowed! 2-dim arrays will not work...
    // [G++ -Pedantic]: ISO C++ forbids variable length array 'mat1'
    
    // As a 2-dim array is a list of lists: a vector of a vector is the same idea.
    std::vector<std::vector<double>> mat1, mat2;



}


int main() {
    // MatMul Rules
    // 1)  Scalar: Multiply scalar by all indices in the matrix. 
    //      - 2* [4][ 0] = [8][  0]
    //           [1][-9]   [2][-18]
    //
    // 2) Multiplying 2 matrices.
    // |    "For MatMul, the no. of columns in the 1st matrix must be equal to the no.
    // |    of rows in the 2nd matrix. The result matrix has the no. of rows of the 
    // |    1st and the number of columns of the 2nd matrix.
    // |
    // 3) --Dot Product-- 
    //    {[1][2][3]} * {[7][ 8]} = {[ 58] [ 64]}
    //    {[4][5][6]}   {[9][10]}   {[139][154]}
    //                  {[11][12]}
    
    // Use Mult-Dim Arrays or Vectors??
    /* Mult-Dim array method */
    /* Vector Method */
    
    intbMM();
    
    arrMatMult();

    return 0;
}


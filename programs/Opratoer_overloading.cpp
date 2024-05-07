#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Matrix {
private:
    std::vector<std::vector<int> >data;
    int rows;
    int cols;

public:
    
    Matrix() : rows(0), cols(0) {}
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols), data(other.data) {}

    ~Matrix() {}

    
    friend std::istream& operator>>(std::istream& in, Matrix& mat) {
        for (int i = 0; i < mat.rows; ++i) {
            for (int j = 0; j < mat.cols; ++j) {
                in >> mat.data[i][j];
            }
        }
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Matrix& mat) {
        for (int i = 0; i < mat.rows; ++i) {
            for (int j = 0; j < mat.cols; ++j) {
                out << mat.data[i][j] << " ";
            }
            out << std::endl;
        }
        return out;
    }

    
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("error");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("erorr");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows)("Error");

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    try {
        Matrix A(2, 2), B(2, 2);
        std::cout << "Enter elements of matrix A:\n";
        std::cin >> A;
        std::cout << "Enter elements of matrix B:\n";
        std::cin >> B;

        Matrix C = A + B;
        std::cout << "A + B:\n" << C;

        Matrix D = A - B;
        std::cout << "A - B:\n" << D;

        Matrix E = A * B;
        std::cout << "A * B:\n" << E;

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}


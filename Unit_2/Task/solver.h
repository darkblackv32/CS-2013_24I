#include <iostream>
#include <vector>


template <typename Container>
Container get_maximum_product_range(Container input) {

    Container result, del;

    for (auto i = input.begin(); i != input.end(); ++i) {
        if(*i < 0) del.push_back(*i);
    }

    if(del.size() % 2 == 0){
        for (auto i = input.begin(); i != input.end(); ++i)
            if(*i != 0) result.push_back(*i);
    }

    else{
        
        for (auto i = input.begin(); i != input.end(); ++i){
            if(*i > 0) result.push_back(*i);
        }

        sort(del.begin(), del.end());

        for (auto i = del.begin() ; i != del.end() - 1; ++i){
            result.push_back(*i);
        }
    }

    return result;
}


template<int Rows, int Cols, typename Container>
std::vector<std::vector<int>> generate_matrix(const Container& data) {
    std::vector<std::vector<int>> matrix(Rows, std::vector<int>(Cols, 0));
    auto it = data.begin();
    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Cols && it != data.end(); ++j, ++it) {
            matrix[i][j] = *it;
        }
    }
    return matrix;
}


template <int ...Coeficientes, typename T>
T generate_polynomial(T x){
    T resultado = 0;
    int exp = 0;
    ((resultado += Coeficientes * pow(x, exp++)), ...);
    return resultado;
}






#include <iostream>
#include <vector>

using namespace std;

void getUsage(){
    std::cout << "Diameter and Connected Components of a Network | HW3 | Benjamin Horn" << std::endl;
    std::cout << "Enter data points and hit enter after each one..." << std::endl;

}

vector<int> getData(){
    std::vector<int> input;
    /*
    int each;
    while ((cin >> each) && each >= 0){
        input.push_back(each);
    }
     */

    input.push_back(5);
    input.push_back(0);
    input.push_back(1);
    input.push_back(1);
    input.push_back(4);
    input.push_back(2);
    input.push_back(3);
    input.push_back(1);
    input.push_back(3);
    input.push_back(3);
    input.push_back(4);
    input.push_back(-1);

    std::cout << "Vertices: " << input[0] << std::endl;
    std::cout << "{";
    for (int i = 0 ; i < input.size() - 2; i+=2){
        std::cout <<  " {" << input[i+1] << "," << input[i+2] << "} ";
    }
    std::cout << "}" << std::endl;
    return input;
}

void getDistanceMatrix(vector<int> i_val, vector<int> j_val){
    std::cout << "Distance Matrix" << std::endl;
    for(int i = 0; i < i_val.size(); i++){
        std::cout << "      {" << i_val[i] << "," << j_val[i]<< "} ";
    }
    std::cout << endl;
    for(int i = 0; i < i_val.size(); i++){
        std::cout << "{" << i_val[i] << "," << j_val[i]<< "}" << std::endl;
    }
    std::cout << endl;
}

int main() {
    getUsage();
    std::vector<int> input = getData();
    std::vector<int> i_val;
    std::vector<int> j_val;
    for (int i = 0 ; i < input.size() - 2; i+=2) {
        i_val.push_back(input[i+1]);
        j_val.push_back(input[i+2]);
    }

    getDistanceMatrix(i_val, j_val);
    return 0;
}
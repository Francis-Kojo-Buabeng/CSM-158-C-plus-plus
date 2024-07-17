#include <iostream>
#include <cmath>
#include<vector>

void GetUserInput(std::vector<double>& values,int size);

void getVariance(std::vector<double>& values,int size, double mean);

void getStdDev(double variance);

int main(){
    int N;
    std::cout<<"Enter the number of numbers: ";
    std::cin>>N;
    
    std::vector<double>values(N);
    GetUserInput(values, N);
    
    return 0;
}
void GetUserInput(std::vector<double> &values,int size){
    double sum = 0.0, mean = 0.0;
    std::cout<<"Enter the numbers\n";
    for(int i = 0; i < size; i++){
        std::cin>>values[i];
        sum += values[i];
    }
    mean = (sum/size);
    std::cout<<"mean: " <<mean<<"\n";
     getVariance(values, size,mean);
}
void getVariance(std::vector<double>& values,int size,double mean){
    double variance = 0.0, result = 0.0;
    for(int i = 0; i < size; i++){
      result += pow((values[i] - mean),2);
    }
    variance = (result/size);
    std::cout<<"variance: "<<variance<<"\n";
    getStdDev(variance);
}
void getStdDev(double variance){
    double stdDev = 0.0;
    stdDev = sqrt(variance);
    std::cout<<"Standard deviation: "<<stdDev<<"\n";
}
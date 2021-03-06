// This is a file for implementation of grid
// It contains all the code and rountines used to build the aesthetical view of puzzle.

#include <iostream>
#include "Grid.h"


Grid::Grid(){
    //Defalut Constructor
}


Grid::~Grid(){
    //Default Destructor
}

/*
void Grid::makeGrid(std::vector<std::vector <int>> &Ans){
    std::cout<<std::endl;
    //Matrix is of size (m,n); "m" rows and "n" columns
    int m = Ans.size();
    for (int i=0; i<m; i++){
        int n = Ans[i].size();
        for (int j=0; j<n; j++){
            if ( j==n-1){
                std::cout<<Ans[i][j]<<" | "<<std::endl;
                std::cout<<"|---|---|---|---|---|---|---|---|---|"<<std::endl;
            }
            else if(j==0){
                std::cout<<"| "<<Ans[i][j]<<" | ";
            }
            else{
                std::cout<<Ans[i][j]<<" | ";
            }
        }
    }
}
*/


void Grid::makeGrid(std::vector<std::vector <int>> Ans){
    //Matrix is of size (m,n); "m" rows and "n" columns
    int m = Ans.size();
    for (int i=0; i<m; i++){
        int n = Ans[i].size();
        if (i==0 ){
            std::cout<<"|-----------|-----------|-----------|"<<std::endl;
        }
        for (int j=0; j<n; j++){
            if ( j==n-1){
                if (Ans[i][j]){
                    std::cout<<Ans[i][j]<<" | "<<std::endl;
                }
                else{
                    std::cout<<"  | "<<std::endl;
                }
            }
            else if(j==0){
                if (Ans[i][j]){
                    std::cout<<"| "<<Ans[i][j]<<" : ";
                }
                else {
                    std::cout<<"|   : ";
                }
            }
            else if ( j==2 || j==5){
                if (Ans[i][j]){
                    std::cout<<""<<Ans[i][j]<<" | ";
                }
                else {
                    std::cout<<"  | ";        
                }
            }
            else{
                if (Ans[i][j]){
                    std::cout<<Ans[i][j]<<" : ";
                }
                else{
                    std::cout<<"  : ";
                }
            }
        }
        if (i==2 || i==5 ){
            std::cout<<"|~~~:~~~:~~~|~~~:~~~:~~~|~~~:~~~:~~~|"<<std::endl;
            
        }
        else if ( i==8){
            std::cout<<"|-----------|-----------|-----------|"<<std::endl;
        }
        else{
            std::cout<<"|---:---:---|---:---:---|---:---:---|"<<std::endl;
        }
    }
}


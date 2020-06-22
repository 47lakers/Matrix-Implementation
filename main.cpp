//
//  main.cpp
//  2D Array
//
//  Created by Ira Xavier Porchia on 5/7/20.
//  Copyright © 2020 Ira Xavier Porchia. All rights reserved.
//

#include <iostream>
using namespace std;

const int ROW = 10;
const int COL = 5;

int main(int argc, const char * argv[]) {
    int arr[ROW][COL];
    for(int i = 0; i < ROW; i++){
        cout << endl;
        for(int j = 0; j < COL; j++){
            arr[i][j] = (i * 10);
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    
    arr[1][4] = 47;
    
    for(int i = 0; i < ROW; i++){
        cout << endl;
        for(int j = 0; j < COL; j++){
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}


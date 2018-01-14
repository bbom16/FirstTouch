//
//  1780.cpp
//  winter-2018
//
//  Created by bomin jung on 2018. 1. 14..
//  Copyright © 2018년 bomin jung. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > paper; //전체 종이 벡터
int cnt_arr[3]; //-1 0 1 개수
int N;

void cntPaper(int size, int x, int y){
    if(size == 1){
        cnt_arr[paper[y][x]+1]++;
        return;
    }
    int before = paper[y][x];
    bool chk_paper = true;
    
    for(int i = y; i<y+size; i++){
        for(int j = x; j<x+size; j++){
            if(i==y && j==x) continue;
            if(paper[i][j] != before){
                chk_paper = false;
                break;
            }
            before = paper[i][j];
        }
    }
    
    if(chk_paper){
        cnt_arr[before+1]++;
    }else{
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                cntPaper(size/3, x+(size/3)*j, y+(size/3)*i);
            }
        }
    }
    return;
}


int main()
{
    cin >> N;
    
    int n;
    
    for(int i =0; i<N; i++)
        paper.resize(N);
    for(int i = 0; i<N; i++){
        for(int j =0; j<N; j++){
            cin >> n;
            paper[i].push_back(n);
        }
    }
    cntPaper(N, 0, 0);
    for(int i =0; i<3; i++)
        cout << cnt_arr[i] << endl;

    return 0;
}

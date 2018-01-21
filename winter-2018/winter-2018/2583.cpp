//
//  2583.cpp
//  winter-2018
//
//  Created by bomin jung on 2018. 1. 21..
//  Copyright © 2018년 bomin jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > paper;
int M,N,K;
int size;

void dfs(int y, int x){
    size++;
    paper[y][x] = 0;
    if(x<N-1 && paper[y][x+1])
        dfs(y, x+1);
    if(x>0 && paper[y][x-1])
        dfs(y, x-1);
    if(y<M-1 && paper[y+1][x])
        dfs(y+1, x);
    if(y>0 && paper[y-1][x])
        dfs(y-1, x);
}

int main(){
    cin >> M >> N >> K;
    
    paper.resize(M);
    for(int i = 0; i<M; i++)
        paper[i].resize(N,1);
    
    int x1, x2, y1, y2;
    for(int i = 0; i<K; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j<x2; j++){
            for(int k = y1; k<y2; k++){
                paper[k][j]  = 0;
            }
        }
    }
    
    vector<int> answer;
    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            if(paper[i][j]){
                dfs(i,j);
                answer.push_back(size);
                size = 0;
            }
        }
    }
    sort(answer.begin(), answer.end());
    cout << answer.size() << endl;
    for(int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
    cout << endl;
    return 0; 
}

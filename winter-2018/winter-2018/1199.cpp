//
//  1199.cpp
//  winter-2018
//
//  Created by bomin jung on 2018. 1. 21..
//  Copyright © 2018년 bomin jung. All rights reserved.
//
//  오일러회로 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<vector<int> > graph;
vector<int> answer;

bool check(){
    for(int i = 1; i<N+1; i++){
        if(graph[i][0]%2)
            return false;
    }
    return true;
}

void euler(int v){ //dfs 이용
    for(int i = 1; i<N+1; i++){
        while(graph[v][i] > 0){
            graph[v][i]--;
            graph[i][v]--;
            euler(i);
        }
    }
    answer.push_back(v);
}

int main(){

    cin >> N;

    graph.resize(N+1);
    for(int i = 1; i<N+1; i++)
        graph[i].resize(N+1);
    int v;
    for(int i = 1; i<N+1; i++){
        for(int j = 1; j<N+1; j++){
            cin >> v;
            graph[i][j] = v;
            graph[i][0] += v;
        }
    }
    
    if(!check()){
        cout << -1 << endl;
        return 0;
    }
    
    euler(1);
    reverse(answer.begin(), answer.end());
    
    for(int i = 0; i <answer.size(); i++)
        cout << answer[i] << " ";
    cout << endl;
    
    return 0;
}

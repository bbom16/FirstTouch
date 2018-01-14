//
//  2805.cpp
//  winter-2018
//
//  Created by bomin jung on 2018. 1. 14..
//  Copyright © 2018년 bomin jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    ios::sync_with_stdio(false);
    long long N, M;
    cin >> N >> M;
    
    vector<long long> height;
    long long h;
    for(long long i = 0; i<N; i++){
        cin >> h;
        height.push_back(h);
    }
   
    sort(height.begin(), height.end());
    
    long long sum = 0;
    long long ans = 0;

    long long start = 0; long long end = height[N-1];
    while(1){
        long long mid = (start+end)/2;
        if(mid == start || mid == end){
            ans = mid;
            break;
        }
        for(long long i = N-1; height[i] > mid; i--){
            sum += height[i] - mid;
        }
        if(sum == M){
            ans = mid;
            break;
        }
        else if(sum > M)
            start = (start+end)/2;
        else
            end = (start+end)/2;
        
        sum = 0;
    }
    
    cout << ans << endl;
    return 0;
}

//
//  main.cpp
//  HackerRankSets
//
//  Created by Aj Gill on 8/19/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int queryCount,queryType,queryInt;
    cin >> queryCount;
    for(int i=0;i<queryCount;i++){
        cin >> queryType;
        cin >> queryInt;
        
        if(queryType==1){
            s.insert(queryInt);
        }
        else if(queryType==2){
            s.erase(queryInt);
        }
        else if(queryType==3){
            set <int>::iterator it = s.find(queryInt);
            if (it ==s.end()){
                cout << "No\n";
            }
            else{
                cout << "Yes\n";
            }
        }
    }
    return 0;
}







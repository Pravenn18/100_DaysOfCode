
            max = std::max(v[i],max);
            if(v[i] == max){
                ans.push_back(v[i]);
            }else if(v[i] < max && v[i] <= s){
                ans.insert(ans.begin(), v[i]);
                s = v[i];
            }else{
                ans.push_back(v[i]);
            }
        }
        for(int x : ans){
            cout << x << " ";
        }
        cout << endl;
else if (i == vt.size() - 1){
            i = 1;
            while (i < vt.size()){
                cout << vt[i] << ' ';
                vt.erase(vt.begin() + i);
                
                i ++;
            } 
        }
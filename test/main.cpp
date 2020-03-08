#include <iostream>
#include <vector>
using namespace std;
struct BiGraph {
    unsigned int _num_user;  /* number of vertices in V1 */
    unsigned int _num_item;  /* number of vertices in V2 */
    unsigned int _num_edges;       /* number of active edges */

    // std::vector< std::vector<unsigned> >  neighbor_user;
    std::vector< std::vector<unsigned> >  neighbor_item;
    // vector<unsigned > degree_user;
    //每个item的边长
    vector<unsigned > degree_item;

};
BiGraph G;

unsigned binSearchCPU(unsigned val, vector<unsigned >& lst){
    unsigned low = 0, high = lst.size() - 1, mid = 0;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(lst[mid] > val){
            high = mid - 1;
        }else if(lst[mid] < val){
            low = mid + 1;
        }else{
            return val;
        }
    }
    return val + 1;
}
inline
bool cmp(unsigned a, unsigned b){
    return a < b;
}

vector<unsigned > cpuResult;
void valid_item_cpu(const unsigned int k1,const unsigned int k2, vector<unsigned > &user, vector<unsigned > &item){
    cout << "valid_item_cpu..." << endl;
    vector<vector<unsigned > >G0;
    vector<int>intersectionCnt(item.size(), 0);
    for(int i = 0; i < item.size(); i++){
        vector<unsigned > temp;
        for(int j = 0; j < user.size(); j++){
            //printf("\nG:%d %d\n", G.neighbor_item[0].size(), G.neighbor_item[1].size());
            int val = binSearchCPU(user[j], (G.neighbor_item)[item[i]]);
            if(val == user[j]){
                temp.push_back(val);
            }
        }
        G0.push_back(temp);
    }

    for(int i = 0; i < G0.size(); i++){
        for(int j = i + 1; j < G0.size(); j++){
            int src = G0[i].size() < G0[j].size() ? i : j;
            int dst = src == i ? j : i;
            int cnt = 0;
            for(int k = 0; k < G0[src].size(); k++){
                int val = binSearchCPU(G0[src][k], G0[dst]);
                if(val == G0[src][k]){
                    cnt++;
                }
            }
            if(cnt >= k1){
                intersectionCnt[src]++;
                intersectionCnt[dst]++;
            }
        }
    }
    for(int i = 0; i < item.size(); i++){
        if(intersectionCnt[i] >= k2 - 1){
            cpuResult.push_back(item[i]);
        }
    }

}


int main() {
    vector<unsigned > degree_item = {13, 15, 14, 16, 17, 19, 20, 20, 20, 21};
    std::vector< std::vector<unsigned> >  neighbor_item{
            {0, 1, 8, 10, 12, 13, 15, 16, 17, 18, 19, 20, 21},
            {1, 4, 6, 7,  8,  10, 11, 13, 15, 16, 17, 18, 19, 20, 21},
            {5, 7, 8, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21},
            {2, 6, 7, 8,  9,  10, 11, 12, 13, 15, 16, 17, 18, 19, 20, 12},
            {0, 4, 5, 6,  7,  8,  9,  10, 12, 13, 14, 15, 16, 18, 19, 20, 21},
            {0, 1, 2, 4,  5,  6,  7,  8,  9,  10, 12, 13, 14, 15, 16, 18, 19, 20, 21},
            {0, 2, 3, 4,  5,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21},
            {1, 2, 3, 4,  5,  6,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21},
            {1, 2, 3, 4,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21},
            {0, 1, 2, 3,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21}
    };
    G.neighbor_item = neighbor_item;
    G.degree_item = degree_item;
    int k1 = 3, k2 = 8;
    vector<unsigned> user = {16, 19, 21}, item = {0,1,2,3,4,5,6,7,8,9};
    valid_item_cpu(k1, k2, user, item);
    for(int i = 0; i < cpuResult.size(); i++){
        cout << cpuResult[i] << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;
int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    vector<int> vec2(vec);
    int arr1[] = {1,2,3,4};
    int arr2[] = {2,3,4,5};
    if(vec == vec2){
        cout << "vec == vec2" << endl;
    }else{
        cout << "vec != vec2" << endl;
    }
    int *arrBegin = begin(arr1), *arrEnd = end(arr1);
    int *arr2Begin = arr2, *arr2End = &arr2[4];
    for(; arrBegin != arrEnd && arr2Begin != arr2End; arrBegin++, arr2Begin++){
        if(*arrBegin != *arr2Begin){
            cout << "arr1 != arr2" << endl;
            return 0;
        }
    }
    cout << "arr1 == arr2" << endl;
    return 0;
}
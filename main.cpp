# include <iostream>
using namespace std;
//shitethings给sort函数添加注释
//shitethis有添加注释
void sort(int arr[], int size) {
    int tmp = 0;
    bool flag = false;
    for (int i =0; i < size-1; ++i) {
        for(int j = 0; j < size-1-i; ++j) {
            if(arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = tmp;
                flag = true;
            }
        }
        if(!flag)
            break;
    }   
}
int main() {
    //marco添加的注释
    //marco又添加了注释
    int arr[] = {12,4,89,43,21,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}

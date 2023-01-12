#include <bits/stdc++.h>
using namespace std;
                                // BUBBLE SORT
// AIM : TIME : N^2; SPACE : O(1) ; STABLE SORTING ALGORITHM
int main(){
    int arr[] = {3, 7, 3, 7, 0, 6, 32, 4, 8, 0, 6, 4, 6, 90, 0, 1};
    int n = 16;
    for (int i = 0; i < n - 1; i++){
        bool sp = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                sp = true;}}
        if (sp == false) break;}
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;}

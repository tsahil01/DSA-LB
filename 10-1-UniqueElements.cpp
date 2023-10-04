// https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

int findUnique(int *arr, int size){
    int ans = arr[0];
    for(int i=1;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
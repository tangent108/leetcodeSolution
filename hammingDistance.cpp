/*

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 2^31



Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.

*/



#include<iostream>

using namespace std;

int hammingDistance(int x, int y) {
        
        int result = x^y;
        int count=0;
        for(int i=0;i<31;i++){
            if((result>>i)&1){
                count++;
                
            }
        }
        return count;
        
    }

int main(){
    int x=1,y=4;
    cout << hammingDistance(x,y)<<endl;

}
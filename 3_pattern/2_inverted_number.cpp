// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 4444
// 333
// 22
// 1

  
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i = 1;
    int j = 1;
    
    while(i<=n){
        j = n-i+1;
        while(j){
            cout<<(n-i+1);
            j--;
        }
        cout<<endl;
        i++;
    }
}



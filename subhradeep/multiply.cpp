#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Enter a positive integer: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
    cout<<endl;
    	for (int j=1;j<=N;++j){
   		cout<<" "<<i*j;
	}
    }
    
    return 0;
}

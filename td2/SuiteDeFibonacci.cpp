#include <iostream>
#include <vector>

using namespace std;

vector<int> fib(int n); 

int main (){
    int n;
    
    n=-1;
    while (n<1){
        cout << "Veuillez entrer un naturel : " << endl;
        cin >> n;
    }

    vector<int> suite_fib = fib(n);

    cout << "Les " << n << " premiers nombres de Fibonacci sont : ";
    for (int i=0; i<n-1; i++)
        cout << suite_fib[i] << " - ";
    cout << suite_fib[n-1];

}

vector<int> fib (int n) {
    vector<int> suite_fib(n);

    suite_fib[0] = 0;
    if (n>1) {
        suite_fib[1] = 1;
        for (int i=2; i<n; i++){
            suite_fib[i] = suite_fib[i-1] + suite_fib[i-2];
        }
    }

    return suite_fib;
}
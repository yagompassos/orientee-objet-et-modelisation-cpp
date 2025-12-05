#include <iostream>
using namespace std;

float moyenne(int *v, int size);
float variance (int *v, int size);


int main(){
    int n, max=0, min= 2147483647;
    int *v;
    float medium, var;

    cout << "Donnez la taille n: " << endl;
    cin >> n;

    v = new int[n];

    for (int i=0; i<n; i++) {
        cout << "Donnez le valeur " << i  << " : "<< endl;
        cin >> v[i];
        if (v[i] <= min)
            min = v[i];
        if (v[i] >= max)
            max = v[i];
    }

    medium = moyenne(v, n);
    var = variance(v, n);

    cout << "Ton vector:" << endl;
    for (int i=0; i<n-1; i++){
        cout << v[i] << " - ";
    }
    cout << v[n-1] << endl;

    cout << "Moyenne: "<< medium << endl;
    cout << "Variance: "<< var << endl;
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;


    delete [] v;
}

float moyenne(int *v, int size){
    int total=0;
    
    for (int i=0; i<size; i++){
        total += v[i];
    }

    return total/size;
}

float variance (int *v, int size){
    float medium = moyenne(v, size);
    float variance = 0;

    for (int i=0; i<size; i++)
        variance += (v[i]-medium)*(v[i]-medium);

    variance /= (size-1); 
    return variance;
}
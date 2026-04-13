#include "reverse_string.h"
using namespace std;
namespace reverse_string {

string reverse_string(string cadena){
    int n = cadena.size();
    for(int i = 0; i < n /2; i++){
        swap(cadena[i], cadena[n - i - 1]);
    }
    return cadena;
}

}  // namespace reverse_string

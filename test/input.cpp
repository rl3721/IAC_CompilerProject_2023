int number(int a, int b){
    return a + b;
}

int main(){
    int a = 1;
    int b = number(a,a);
    //int b = 1;
    int c = number(b,b);
}
int factorial(int input){
    int fact =1;

    for(int i = 1; i<=input; i++){
        fact = fact*i;
    }   
    return fact;
}
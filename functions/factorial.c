//This function returns the factorial of an input number.
int factorial(int num){
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

//This function checks whether an input number is a prime number.
int isPrime(int number){
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

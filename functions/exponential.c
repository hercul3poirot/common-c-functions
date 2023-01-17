//This function returns a number exponentially multiplied, with the number and exponent determined by the user.
int toThePowerOf(int number, int exponent) {
    if (exponent == 1) {
        return number;
    } else {
        return number * toThePowerOf(number, exponent - 1);
    }
}

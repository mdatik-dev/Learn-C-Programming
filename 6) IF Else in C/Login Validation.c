#include <stdio.h>

int main() {

    int otp;

    printf("Enter OTP: ");
    scanf("%d", &otp);

    if(otp == 123456)
        printf("OTP Verified");
    else
        printf("Invalid OTP");

    return 0;
}

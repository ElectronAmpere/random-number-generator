/**
 * @file rand_stdlib.c
 * @author your name (you@domain.com)
 * @brief reference link: https://stackoverflow.com/questions/1190870/i-need-to-generate-random-numbers-in-c
 * @description 
 * @version 0.1
 * @date 2023-10-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    /* Initialise seed */
    unsigned int seed = 0;
    int rand_req = 0,
        rand_range = RAND_MAX,
        rand_min = 1;

    printf("Enter a seed: ");
    scanf("%u",&seed);

    printf("Total Random Numbers to request: ");
    scanf("%d",&rand_req);

    /* Seeding random number with a seed */
    srand(seed);

    /* Display the random number with the seed */
    for (int i = 0; i < rand_req; i++){
        printf("%d\n", rand() % rand_range + rand_min);
    }

    return (0);
 }
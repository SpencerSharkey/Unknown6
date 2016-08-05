char *__fastcall sub_87444(char *input, int size) {
    char arr1[32]; // Random seed for creating arr2
    char arr2[256]; // rot18 over arr1, one bit for every 32 bytes.
    char arr3[256]; // Result (?) buffer
    char*result;
    int roundedsize, totalsize;


    // 32 bytes of randomness for arr1.
    srand48(time(NULL));
    for (int i = 0; i < 32; i++)
        arr1[i] = lrand48() & 0xff;

    // Fill the second array with eight roted iterations of random arr1
    // rot18 (ASCII numbers + letters) on what's essentially a random binary?
    // This is an elaborate junk creation algorithm. Security by obscurity?
    for (int j = 0; j < 8; j++)
        for (int i = 0; i < 32; i++)
            arr2[32 * j + i] = rotl8(arr1[i], j);//rotate byte left


    // Move input data up 32 bytes (make space for header)
    memmove(input + 32, input, size);
    // Copy the first 32 bytes of the roted 256 bytes in front of the payload.
    // Wasn't there supposed to be a timestamp in that?
    // This is the only thing we retain from the random arr1,
    memcpy(input, arr2, 32);

    // Size to a multiple of 256
    roundedsize = size + (256 - (size % 256));
    // Plus "header".
    totalsize = roundedsize + 32;

    if (roundedsize > size)
    {
        memset(input + 32 + size, 0, roundedsize - size); //pad data with zeroes
    }
    // ... and remember the size of the padding
    input[totalsize - 1] = 256 - (size % 256);

    for (int offset = 32; offset < totalsize; offset += 256)
    {
        for (int i = 0; i < 256; i++)
            input[offset + i] ^= arr2[i]; // XOR over your "key" like it's 1989.
        sub_9e9d8(input + offset, arr3); // encryption!!! - Or is it?

        // arr3, what is most likely our result, becomes the XOR key for the next 256 byte block (still loopin')
        memcpy(arr2, arr3, 256);
        // Data size seems to stay the same. Considering the lame obfuscation above,
        // I'm not sure we're looking at "encryption". You don't obfuscate before you encrypt.
        result = memcpy(input + offset, arr3, 256);
    }
}

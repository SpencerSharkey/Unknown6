
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "encrypt.h"

unsigned char* load_file(char const* path, size_t* plength)
{
	unsigned char* buffer = 0;
	size_t length;
	FILE * f = fopen(path, "rb"); //was "rb"

	if (f)
	{
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = (unsigned char*) malloc(length);
		if (buffer)
		{
			fread(buffer, 1, length, f);
		}
		fclose(f);
		*plength = length;
	}
	
	return buffer;
}


void print_hex(const unsigned char *s, size_t l)
{
	for (size_t i = 0; i<l; i++) {
		printf("%02x", (unsigned int)s[i]);
	}
	printf("\n");
}

void verify(const char* plain, const char* enc){
	size_t input_size;
	unsigned char* input = load_file(plain, &input_size);
	size_t expected_output_size;
	unsigned char* expected_output = load_file(enc, &expected_output_size);
	unsigned char iv[32];

	// Steal the IV from the expected output to ensure the same result. Normally you could just use a random IV.
	memcpy(iv, expected_output, 32);

	size_t output_size;
	encrypt(input, input_size, iv, 32, NULL, &output_size);
	unsigned char* output = (unsigned char*)malloc(output_size);
	encrypt(input, input_size, iv, 32, output, &output_size);

	printf("%s: ", plain);
	if (output_size == expected_output_size && memcmp(output, expected_output, output_size) == 0) {
		printf("ok\n");
	}else{
		printf("not ok\n");
	}	
}

/*
void verify_decrypt(const char* plain, const char* enc){
	size_t input_size;
	unsigned char* input = load_file(plain, &input_size);
	size_t output_size;
	unsigned char* output = load_file(enc, &output_size);

	unsigned char* transformed_output = (unsigned char*)malloc(output_size);
	memcpy(transformed_output, output, output_size);

	decrypt(transformed_output, input_size);
	size_t transformed_output_size = input_size;
		
	printf("%s: ", plain);
	if (input_size == transformed_output_size && memcmp(input, transformed_output, input_size) == 0) {
		printf("ok\n");
	}
	else{
		printf("not ok\n");
		printf("actual\n");
		print_hex(transformed_output, transformed_output_size);
		printf("expected\n");
		print_hex(input, input_size);

	}
}
*/

int main() {
	verify("../dumps/dumps_mandra/dump0.bin", "../dumps/dumps_mandra/dump0_encrypted.bin");
	verify("../dumps/dumps_mandra/dump1.bin", "../dumps/dumps_mandra/dump1_encrypted.bin");
	verify("../dumps/dumps_mandra/dump2.bin", "../dumps/dumps_mandra/dump2_encrypted.bin");
	verify("../dumps/dumps_mandra/dump3.bin", "../dumps/dumps_mandra/dump3_encrypted.bin");
	verify("../dumps/dumps_mandra/dump4.bin", "../dumps/dumps_mandra/dump4_encrypted.bin");
	verify("../dumps/dumps_mandra/dump5.bin", "../dumps/dumps_mandra/dump5_encrypted.bin");
	verify("../dumps/dumps_mandra/dump6.bin", "../dumps/dumps_mandra/dump6_encrypted.bin");
	verify("../dumps/dumps_mandra/dump7.bin", "../dumps/dumps_mandra/dump7_encrypted.bin");
	verify("../dumps/dumps_mandra/dump8.bin", "../dumps/dumps_mandra/dump8_encrypted.bin");
	verify("../dumps/dumps_mandra/dump9.bin", "../dumps/dumps_mandra/dump9_encrypted.bin");
	
	//verify_decrypt("../dumps/dumps_mandra/dump0.bin", "../dumps/dumps_mandra/dump0_encrypted.bin");

	
}


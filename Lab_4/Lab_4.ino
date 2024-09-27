// Write a function to compress two 4-bit integers into two byte and unpack them later.

void compress_data(uint16_t* compressed_data, int* original_data, int length);
void decompress_data(uint16_t* compressed_data, int* decompressed_data,int length);

void setup() {
    Serial.begin(9600);

    for (int i = 0; i < 50; i++) {
        Serial.println();  // Print blank lines
    }
    
    // Array of integers to compress (values between 0 and 15)
    int original_data[8] = {3, 10, 7, 5, 12, 14, 2, 9};
    int decompressed_data[8] = {0};

    // Array to hold compressed data 
    // uint16_t compressed_data[2]; // 8 integers packed into 4 bytes
    uint16_t compressed_data[2] = {0};
    compress_data(compressed_data, original_data, 8);

    Serial.println("Compressed Data (in HEX):");
    for (int i = 0; i < 2; i++) {
        Serial.println(compressed_data[i], HEX); // Print compressed data in hex
    }

    decompress_data(compressed_data, decompressed_data, 8);

    Serial.println("Decompressed Data:");
    for (int i = 0; i < 8; i++) {
        Serial.print(decompressed_data[i]); // Print decompressed data
        Serial.print(" ");
    }
    
}

void loop() {
    // Empty loop
}

// Function to compress two integers (4-bit each) into one byte
void compress_data(uint16_t* compressed_data, int* original_data, int length) {
    for (int i = 0; i < length / 4; i++) {
        compressed_data[i] = (original_data[i*4] << 12) 
                           | (original_data[i*4 + 1] << 8) 
                           | (original_data[i*4 + 2] << 4) 
                           | (original_data[i*4 + 3]); 
    }
}

void decompress_data(uint16_t* compressed_data, int* decompressed_data, int length)
{
 for (int i = 0; i < length / 4; i++) {
    decompressed_data[i*4]     = (compressed_data[i] >> 12) & 0xF;
    decompressed_data[i*4 + 1] = (compressed_data[i] >> 8) & 0xF;
    decompressed_data[i*4 + 2] = (compressed_data[i] >> 4) & 0xF;
    decompressed_data[i*4 + 3] = compressed_data[i] & 0xF;
  }
}


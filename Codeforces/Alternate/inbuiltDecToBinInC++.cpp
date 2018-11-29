#include <bits/stdc++.h>
using namespace std;

int main() {
    int lengthBinaryRepresentation = 32;
    int decimalNumber = 254;
    string binary = bitset<32>(decimalNumber).to_string();
    cout<<binary<<"\n";

    unsigned long convertedDecimalNumber = bitset<32>(binary).to_ulong();
    cout<<convertedDecimalNumber;
}
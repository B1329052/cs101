int main() {
    int i = 16;
    if (i & (i-1)) {
        printf("false");
    }
    else {
        printf("true");
    }
    return 0;
}

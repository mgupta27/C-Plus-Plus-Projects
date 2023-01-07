int main();
unsigned int string_length(char str[]);

int main(){
    return 0;
}

unsigned int string_length(char str[]){
    for(unsigned int k{0}; true; ++k){
        if(str[k] == '\0'){
            return k;
        }
    }
}

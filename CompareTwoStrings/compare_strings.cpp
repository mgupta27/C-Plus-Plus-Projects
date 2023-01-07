int main();
bool string_compare(char str0[], char str1[]);

int main(){
    return 0;
}

bool string_compare(char str0[], char str1[]){
    for(unsigned int k{0}; true; ++k){
        if(str0[k] != str1[k]){
            return false;
        }
        else if(str0[k] == '\0'){
            return true;
        }
    }
}
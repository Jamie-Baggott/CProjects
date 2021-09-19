/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*#include <stdio.h>

/*int sum_array(){
    int i, sum, length;
    
    sum =0;
    
    printf("How many integers: ");
    scanf("%d", &length);
    int *array;
    array = malloc(sizeof(int)*length);
    
    for(i=0;i<length;i++){
        scanf("%d", &array[i]);
    }
    
    for(i=0;i<length;i++){
        sum += array[i];
    }
    return sum;
}

void main(void){
    int sum;
   // int array[7];
   sum = sum_array();
 
 // sum = sum_array(array, 7);
    
    printf("%d", sum);

    
    return 0;
}


int read_text(char *array){
    
    int length = 0;
    char input;
    int i = 0;
    //printf("Enter something: ");
    
    while(1){
        input = getchar();
        if (input == '\n') break;
        
        array[i] = input;
        i += 1;
        length += 1;
    }
    
    array[i] = '\n';
    
    return length;
    
}

int main()
{
    
    char charray[50];
    int length;
    length = read_text(charray);
    printf("%s\n", charray);
    printf("The length of the string is %d\n", length);
    
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void to_words(char *sentence, char *words[], int *num_words){
    
    char input = '0';
    char tmp_array[30];
    int i;
    int iterator_words = 0;
    int iterator_sentence = 0;
    
    while (input!= '\n'){
        
        input = getchar();
        
        if (input == '\n'){
            words[*num_words] = malloc(iterator_words+1);
            for (i=0; i<iterator_words;i++){
                words[*num_words][i] = tmp_array[i];
            }
            words[*num_words][i] = '\0';
            *num_words = *num_words +1;
            break;
        }
    
    int main(){
        char *words[50];
        char sentence[100];
        int num_words = 0;
        
        to_words(sentence,words, &num_words);
        int i;
        for(i=0; i< num_words;i++){
            printf("%s\n", words[i]);
            
        }
        
        return 0;
    }
    
}

    


void bar(int[] array, int length) {  

    int i = 0; 

    while (i < length) { 

        array[i] = INC(array[i]); 

        i++; 

    } 

    ;; no return -> function must have return type void 

} 
## Supported and un supported features

* int operations
    * memory allignment not complete
* float operations (free reg to be fixed)
    * memory alignment not complete
* defining and calling arguments
    * "infinite" number of only int arguments supported
    * up to 8 only float/double arguments supported
         * not supporting alternating int and float arguments
         * not supporting more than 8 float arguments
* enum: global and local
* sizeof: for variables and types, size of struct slightly buggy
* single layer pointers
* array
    * multidimensional call and definition
    * initializer not complete
* if else statement, while loop, for loop
    * iterations over pointer address not supported
* switch with default
    * only deals with default at end of switch 
* strings and chars
    * escape characters supported, L prefixes not supported
* struct
    * works with int members
    * not allowing more than one struct in the code


## Some random code discovered that should be made illegal：

* should return 2: done but ugly
``` 
int main(){
    int x = 1;
    {
        x = 2;
        int x;
        x = 3;
    }
    return x;
}
```

* should return 2, not done
``` 
int main(){
    int x = 3;
    switch{
        case 0:
            return 0;
        default:
        case 9999:
            return 2;
    }
}
```